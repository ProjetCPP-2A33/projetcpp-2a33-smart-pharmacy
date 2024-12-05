#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Client.h"
#include"commande.h"
#include "CamembertDialog.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QInputDialog>
#include <QTextDocument>
#include <QFileDialog>
#include <QPainter>
#include <QPrinter>
#include <QFileDialog>
#include <QtCharts/QPieSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QVBoxLayout>
#include <QStandardItemModel>
#include <QTableView>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QSqlQueryModel>
#include <QDesktopServices>
#include <QNetworkAccessManager>


MainWindow::~MainWindow()
{
    delete ui;
    delete arduino;
    delete model;
}

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow), arduino(new Arduino(this)), model(new QStandardItemModel(this))
{
    ui->setupUi(this);



    ui->tableView_2->setModel(client.afficher());
    ui->tableView_hm->setModel(client.afficherHistorique());
    ui->tableWidget_2->setColumnCount(5);
    QStringList headers = { "IDC", "Date", "Montant Total", "Mode Paiement", "État" };
    ui->tableWidget_2->setHorizontalHeaderLabels(headers);
    ui->lineEdit->clear(); // Initialise le champ vide


    // Appeler la fonction afficherCommandes pour initialiser l'affichage
    afficherCommandes();

    connect(ui->pushButton_modifier, &QPushButton::clicked, this, &MainWindow::on_pushButton_modifier_clicked);
    connect(ui->pushButton_fidele, &QPushButton::clicked, this, &MainWindow::on_pushButton_AddHistorique_clicked);
    connect(ui->pushButton_supprimer, &QPushButton::clicked, this, &MainWindow::on_pushButton_supprimer_clicked);
    connect(ui->pushButton_trier, &QPushButton::clicked, this, &MainWindow::on_pushButton_trier_clicked);
    connect(ui->pushButton_rechercher, &QPushButton::clicked, this, &MainWindow::on_pushButton_rechercher_clicked);
    connect(ui->pushButton_pdf, &QPushButton::clicked, this, &MainWindow::on_pushButton_pdf_clicked);


    // Appliquer un fond d'écran à la fenêtre principale
    this->setStyleSheet("QMainWindow { background-image: url(:/images/bg.png); }");

    // Configuration de la table view
    model->setHorizontalHeaderLabels({"ID Commande"});
    ui->tableView->setModel(model);

    // Connexion à l'Arduino
    bool connected = arduino->connectToArduino("COM5"); // Tente d'ouvrir le port série
    if (connected) {
        connect(arduino, &Arduino::idReceived, this, &MainWindow::handleIdReceived);
        qDebug() << "Connexion et ouverture réussies.";
    } else {
        QMessageBox::critical(this, "Erreur", "Connexion à Arduino échouée.");
    }




}


//Ajouter client
void MainWindow::on_pushButton_ajouter_clicked()
{

    int id=ui->lineEdit_id->text().toInt();
    int gsm=ui->lineEdit_gsm->text().toInt();
    int cin=ui->lineEdit_cin->text().toInt();
    int nbrachat=ui->lineEdit_nbrachat->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString sexe=ui->lineEdit_sexe->text();
    QString allergies=ui->lineEdit_allergies->text();
    QString adresse=ui->lineEdit_adresse->text();
    QString mail=ui->lineEdit_mail->text();

    Client C(id,gsm,cin,nbrachat, nom, prenom, sexe, allergies, adresse, mail);
    bool test=C.ajouter();
    if(test)
    {
        ui->tableView_2->setModel(client.afficher());
        QMessageBox::information(nullptr,QObject::tr("Ok"),QObject::tr("Ajout effectué\n" "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),QObject::tr("Ajout non effectué\n" "Click Cancel to exit."),QMessageBox::Cancel);
}

//Afficher client
void MainWindow::afficherClients()
{
    QSqlQueryModel *model = client.afficher();
    if (model)
    {
        ui->tableView_2->setModel(model);
        qDebug() << "Affichage des clients : modèle mis à jour";
    }
    else
    {
        qDebug() << "Erreur : impossible d'afficher les clients.";
    }
}

//supprimer client
void MainWindow::on_pushButton_supprimer_clicked()
{
    // Vérifier si une ligne est sélectionnée dans QTableView
    QModelIndex index = ui->tableView_2->currentIndex();

    if (!index.isValid())
    {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner un client à supprimer.");
        return;
    }

    // Obtenir l'ID du client depuis la première colonne de la ligne sélectionnée
    int id = ui->tableView_2->model()->data(ui->tableView_2->model()->index(index.row(), 0)).toInt();

    // Confirmer la suppression avec l'utilisateur
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer ce client ?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::No) {
        return;
    }

    // Appeler la méthode de suppression
    bool test=client.supprimer(id);
    if (test)
    {
        // Actualiser la vue
        ui->tableView_2->setModel(client.afficher());
        QMessageBox::information(this, "Succès", "Client supprimé avec succès.");
    }
    else
    {
        QMessageBox::warning(this, "Erreur", "Erreur lors de la suppression du client.");
    }
}


//modifier client
void MainWindow::on_pushButton_modifier_clicked()
{
    // Obtenez l'ID du client sélectionné dans le champ de recherche
    int id = ui->lineEdit_rechercher->text().toInt();

    if (id == 0)
    {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide pour le client.");
        return;
    }

    // Récupération des autres valeurs depuis les champs de saisie de l'interface
    int gsm = ui->lineEdit_gsm->text().toInt();
    int cin = ui->lineEdit_cin->text().toInt();
    int nbrachat = ui->lineEdit_nbrachat->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QString sexe = ui->lineEdit_sexe->text();
    QString allergies = ui->lineEdit_allergies->text();
    QString adresse = ui->lineEdit_adresse->text();
    QString mail = ui->lineEdit_mail->text();

    // Création de l'objet client
    bool success = client.modifier(id, gsm, cin,nbrachat ,nom, prenom, sexe, allergies, adresse, mail);

    if (success)
    {
        // Actualiser la vue
        ui->tableView_2->setModel(client.afficher());
        QMessageBox::information(this, "Succès", "Le client a été modifié avec succès.");
    }
    else
    {
        QMessageBox::warning(this, "Erreur", "Échec de la modification du client.");
    }
}

//trier client
void MainWindow::on_pushButton_trier_clicked()
{
    // Appeler la fonction trierParNom() et mettre à jour l'affichage dans tableView
    ui->tableView_2->setModel(client.trierParNom());
}

//rechercher client
void MainWindow::on_pushButton_rechercher_clicked()
{
    // Récupérer l'ID saisi par l'utilisateur
    int id = ui->lineEdit_rechercher->text().toInt();

    // Vérifier si l'ID est valide
    if (id <= 0)
    {
        QMessageBox::warning(this, "Erreur", "ID invalide. Veuillez entrer un ID valide.");
        return;
    }

    // Appeler la fonction de recherche
    QSqlQueryModel* model = client.rechercherParID(id);

    // Vérifier si des résultats ont été trouvés
    if (model->rowCount() > 0)
    {
        ui->tableView_2->setModel(model);
    } else
    {
        QMessageBox::information(this, "Résultat", "Aucun client trouvé avec cet ID.");
    }
}

//exporter
void MainWindow::on_pushButton_pdf_clicked() {
    // Ouvre un dialogue pour choisir le fichier de sortie PDF
    QString filename = QFileDialog::getSaveFileName(this, "Exporter la liste des clients au format PDF", "", "*.pdf");
    if (filename.isEmpty()) return;

    // Configurer le QPrinter pour la sortie en PDF
    QPrinter printer(QPrinter::PrinterResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(filename);

    // Création du document texte pour générer le PDF
    QTextDocument doc;
    QString text;

    // Récupère le modèle de données du QTableView
    QAbstractItemModel *model = ui->tableView_2->model();
    if (!model) {
        QMessageBox::warning(this, "Exportation PDF", "Aucun modèle de données trouvé dans la table !");
        return;
    }

    // Construire le texte à partir des données du modèle
    text.append("<table border='1' cellspacing='0' cellpadding='3'>");
    text.append("<tr>");

    // En-têtes de colonnes
    for (int col = 0; col < model->columnCount(); ++col) {
        text.append("<th>").append(model->headerData(col, Qt::Horizontal).toString()).append("</th>");
    }
    text.append("</tr>");

    // Données des lignes
    for (int row = 0; row < model->rowCount(); ++row) {
        text.append("<tr>");
        for (int col = 0; col < model->columnCount(); ++col) {
            text.append("<td>").append(model->data(model->index(row, col)).toString()).append("</td>");
        }
        text.append("</tr>");
    }
    text.append("</table>");

    doc.setHtml(text);

    // Imprimer le document sur le QPrinter configuré
    doc.print(&printer);

    // Message de confirmation
    QMessageBox::information(this, "Exportation PDF", "La liste des clients a été exportée avec succès en PDF !");
}

//les stat
void MainWindow::on_pushButton_stat_clicked()
{
    int nombreHommes = 0;
    int nombreFemmes = 0;

    QSqlQuery query;

    // Requête pour compter le nombre d'hommes
    if (query.exec("SELECT COUNT(*) FROM clients WHERE sexe = 'Homme'")) {
        if (query.next()) {
            nombreHommes = query.value(0).toInt();
        }
    } else {
        qDebug() << "Erreur lors du calcul du nombre d'hommes:" << query.lastError().text();
    }

    // Requête pour compter le nombre de femmes
    if (query.exec("SELECT COUNT(*) FROM clients WHERE sexe = 'Femme'")) {
        if (query.next()) {
            nombreFemmes = query.value(0).toInt();
        }
    } else {
        qDebug() << "Erreur lors du calcul du nombre de femmes:" << query.lastError().text();
    }

    // Ouvrir la boîte de dialogue avec les statistiques
    CamembertDialog *dialog = new CamembertDialog(nombreHommes, nombreFemmes, this);
    dialog->exec();
}


//historique ajout
void MainWindow::on_pushButton_AddHistorique_clicked()
{
    int id = ui->lineEdit_idc->text().toInt();
    QString diagnostic = ui->lineEdit_diag->text();
    QString traitement = ui->lineEdit_trait->text();
    QDate date = ui->dateEdit->date();

    if (id == 0 || diagnostic.isEmpty() || traitement.isEmpty())
    {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs !");
        return;
    }

    Client client;
    if (client.ajouterHistorique(id, diagnostic, traitement, date))
    {
        QMessageBox::information(this, "Succès", "Historique ajouté avec succès !");
        // Actualiser la vue
        afficherTableHistorique();
        ui->tableView_hm->setModel(client.afficherHistorique());
    } else {
        QMessageBox::critical(this, "Erreur", "Impossible d'ajouter l'historique.");
    }
}

//historique aff
void MainWindow::afficherTableHistorique()
{
    Client client;
    QSqlQueryModel* model = client.afficherHistorique();
    ui->tableView_hm->setModel(model);
}


//rechercher historique
void MainWindow::on_pushButton_recherche_clicked()
{
    // Récupérer l'ID saisi dans le QLineEdit
    QString idClient = ui->lineEdit_recherche->text();

    // Vérifier si le champ est vide
    if (idClient.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide.");
        return;
    }

    // Préparer la requête SQL
    QSqlQuery query;
    query.prepare("SELECT * FROM HistoriqueMedical WHERE IDCL = :idcl");
    query.bindValue(":idcl", idClient);

    // Exécuter la requête
    if (query.exec()) {
        auto *model = new QStandardItemModel(this); // Créer un modèle pour afficher les résultats
        model->setHorizontalHeaderLabels({"ID", "Diagnostique", "Traitement", "Date"}); // Définir les en-têtes des colonnes

        int row = 0;
        while (query.next()) {
            model->setItem(row, 0, new QStandardItem(query.value("IDCL").toString()));
            model->setItem(row, 1, new QStandardItem(query.value("Diagnostique").toString()));
            model->setItem(row, 2, new QStandardItem(query.value("Traitement").toString()));
            model->setItem(row, 3, new QStandardItem(query.value("DateHM").toString()));
            row++;
        }

        // Mettre à jour le QTableView avec le modèle
        ui->tableView_hm->setModel(model);

        // Alerte si aucun résultat trouvé
        if (row == 0) {
            QMessageBox::information(this, "Aucun résultat", "Aucun historique trouvé pour cet ID.");
        }
    } else {
        QMessageBox::critical(this, "Erreur", "La recherche a échoué. Vérifiez la base de données.");
    }
}

//affichage fidelite
void MainWindow::afficherTopClients()
{
    Client client;
    QSqlQueryModel* model = client.afficherfidele();
    ui->tableView_fidele->setModel(model);
}

//Arduino
void MainWindow::handleIdReceived(const QString &id)
{
    // Vérifie si l'ID n'est pas vide
    if (id.isEmpty()) {
        ui->lineEdit->clear(); // Initialise le champ vide
        return; // Ne rien faire si l'ID est vide
    }

    // Affiche l'ID reçu dans le QLineEdit
    ui->lineEdit->setText(id);

    // Vérifie si l'ID existe dans la base de données
    if (isCommandeIdValid(id)) {
        // Si l'ID est valide, vérifie l'état de la commande
        QString etat = chercherEtatDansBD(id);

        // Affiche l'état dans une QMessageBox
        if (!etat.isEmpty()) {
            QMessageBox::information(this, "État de la commande", "État : " + etat);
        } else {
            QMessageBox::warning(this, "Erreur", "État de la commande introuvable.");
        }
    } else {
        // Si l'ID n'existe pas dans la base de données, affiche un message d'erreur
        QMessageBox::warning(this, "Erreur", "ID non trouvé dans la base de données.");
    }

    qDebug() << "ID reçu :" << id;
}


QString MainWindow::chercherEtatDansBD(const QString &idc)
{
    QSqlQuery query;
    query.prepare("SELECT etat FROM COMMANDE WHERE idc = :idc");
    query.bindValue(":idc", idc);

    if (query.exec() && query.next())
    {
        return query.value(0).toString();
    }
    return "";
}
void MainWindow::on_pushButton_12_clicked() {
    int idc = ui->lineEdit_2->text().toInt();
    QDate datec = ui->dateEdit->date();
    double montantTotal = ui->lineEdit_4->text().toDouble();
    QString modePaiement = ui->comboBox_2->currentText();
    QString etat = ui->lineEdit_14->text();

    // Contrôle de saisie pour l'ID
    if (idc == 0) {
        QMessageBox::warning(this, "Erreur", "L'ID ne peut pas être nul ou égal à zéro.");
        return;
    }

    // Si le montant total n'est pas renseigné, on met une valeur par défaut (par exemple 0)
    if (montantTotal < 0) {
        QMessageBox::warning(this, "Erreur", "Le montant total ne peut pas être négatif.");
        return;
    }
    if (ui->lineEdit_4->text().isEmpty()) {
        montantTotal = 0;  // Valeur par défaut si le champ est vide
    }

    // Si l'état n'est pas renseigné, on met une valeur par défaut (par exemple "normal")
    if (etat.isEmpty()) {
        etat = "normal";  // Valeur par défaut si le champ est vide
    }

    // Créer une instance temporaire de Commande pour l'ajout
    Commande Ctemp(idc, datec, montantTotal, modePaiement, etat);
    bool test = Ctemp.ajouter();

    if (test) {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        //addToHistory("Ajout de la commande", idc);
        afficherCommandes();  // Rafraîchir l'affichage après l'ajout réussi
        // addToHistory("Ajout de la commande", idc);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

void MainWindow::afficherCommandes()
{
    // Vider le QTableWidget avant de le remplir à nouveau
    ui->tableWidget_2->setRowCount(0);

    // Créer une instance de Commande pour appeler afficher()
    Commande Ctemp;
    QSqlQueryModel* model = Ctemp.afficher();
    //addToHistory("Affichage des commandes", 0);
    //addToHistory("Affichage de la commande",idc);

    // Remplir le QTableWidget avec les données du modèle
    for (int row = 0; row < model->rowCount(); ++row) {
        ui->tableWidget_2->insertRow(row); // Ajouter une nouvelle ligne
        for (int col = 0; col < model->columnCount(); ++col) {
            QString data = model->data(model->index(row, col)).toString();
            ui->tableWidget_2->setItem(row, col, new QTableWidgetItem(data));
        }
    }
}
void MainWindow::on_pushButton_8_clicked()
{
    int idc = ui->lineEdit_15->text().toInt();
    qDebug() << "Suppression de l'ID:" << idc;  // Pour le débogage

    Commande Ctemp;  // Créez une nouvelle instance de Commande
    bool test = Ctemp.supprimer(idc);

    if (test) {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectuée\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        afficherCommandes(); // Rafraîchir le tableau
        //addToHistory("Suppression de la commande", idc);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Suppression non effectuée.\n"
                                          "L'ID n'existe pas dans la base de données."), QMessageBox::Cancel);
    }
}
void MainWindow::on_pushButton_3_clicked() {
    int idc = ui->lineEdit_2->text().toInt();
    if (idc == 0) {
        QMessageBox::warning(this, "Erreur", "L'ID ne peut pas être nul ou égal à zéro.");
        return;
    }

    QDate datec;
    double montantTotal = -1;
    QString modePaiement;
    QString etat;

    if (ui->dateEdit->date().isValid()) {
        datec = ui->dateEdit->date();
    }

    if (!ui->lineEdit_2->text().isEmpty()) {
        montantTotal = ui->lineEdit_4->text().toDouble();
        if (montantTotal < 0) {
            QMessageBox::warning(this, "Erreur", "Le montant total ne peut pas être négatif.");
            return;
        }
    }

    if (!ui->comboBox_2->currentText().isEmpty()) {
        modePaiement = ui->comboBox_2->currentText();
    }
    //addToHistory("Modifier de la commande", idc);

    if (!ui->lineEdit_14->text().isEmpty()) {
        etat = ui->lineEdit_14->text();
        if (!etat.contains(QRegularExpression("[a-zA-Z]+"))) {
            QMessageBox::warning(this, "Erreur", "L'état doit être une chaîne de caractères valide.");
            return;
        }
    }

    Commande Ctemp(idc, datec, montantTotal, modePaiement, etat);

    bool test = Ctemp.modifier();
    if (test) {
        QMessageBox::information(nullptr, QObject::tr("Succès"),
                                 QObject::tr("Modification effectuée avec succès.\nCliquez sur Annuler pour quitter."),
                                 QMessageBox::Cancel);
        afficherCommandes();
        //addToHistory("modification de la commande", idc);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                              QObject::tr("La modification a échoué.\nCliquez sur Annuler pour quitter."),
                              QMessageBox::Cancel);
    }
}
void MainWindow::on_pushButton_10_clicked() {
    int idc = ui->lineEdit_13->text().toInt();  // Remplacez `lineEdit_idRecherche` par l'ID réel du champ de saisie

    Commande Ctemp;
    QSqlQueryModel* model = Ctemp.rechercher(idc);
    //addToHistory("recherche de la commande", idc);

    if (model && model->rowCount() > 0) {
        ui->tableWidget_2->setRowCount(0);  // Vider le tableau avant d'afficher les résultats
        for (int row = 0; row < model->rowCount(); ++row) {
            ui->tableWidget_2->insertRow(row);
            for (int col = 0; col < model->columnCount(); ++col) {
                QString data = model->data(model->index(row, col)).toString();
                ui->tableWidget_2->setItem(row, col, new QTableWidgetItem(data));
            }
        }
    } else {
        qDebug() << "Aucun résultat trouvé pour l'ID de commande:" << idc;
        QMessageBox::warning(this, "Aucun résultat", "Aucun résultat trouvé pour l'ID de commande spécifié.");
        delete model;
    }
}
void MainWindow::on_pushButton_7_clicked() {
    Commande Ctemp;
    QSqlQueryModel *model = Ctemp.trierParDateDesc();
    //addToHistory("trier de la commande", 0);

    if (model && model->rowCount() > 0) {
        // Vider le QTableWidget avant d'ajouter les nouvelles données
        ui->tableWidget_2->setRowCount(0); // Supprimer toutes les lignes existantes

        // Remplir le QTableWidget avec les données du modèle
        for (int row = 0; row < model->rowCount(); ++row) {
            ui->tableWidget_2->insertRow(row); // Ajouter une nouvelle ligne
            for (int col = 0; col < model->columnCount(); ++col) {
                QString data = model->data(model->index(row, col)).toString();
                ui->tableWidget_2->setItem(row, col, new QTableWidgetItem(data));
            }
        }

        // Rafraîchir l'interface utilisateur pour s'assurer que les changements sont visibles
        ui->tableWidget_2->repaint();
        ui->tableWidget_2->update();

        qDebug() << "Tri effectué, " << model->rowCount() << " lignes affichées.";

    } else {
        QMessageBox::warning(this, "Erreur de tri", "Impossible de trier les données.");
        delete model;
    }
}

void MainWindow::on_pushButton_statistiques_2_clicked() {
    Commande Ctemp;
    QMap<QString, int> statistiques = Ctemp.statistiquesParModePaiement();

    // Calculer le total des commandes
    int totalCommandes = 0;
    for (auto it = statistiques.constBegin(); it != statistiques.constEnd(); ++it) {
        totalCommandes += it.value();
    }

    // Vider le layout avant d'ajouter un nouveau graphique
    QLayoutItem* item;
    while ((item = ui->verticalLayout_graphique_2->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    // Créer un pie series pour le graphique
    QPieSeries *series = new QPieSeries();

    // Ajouter les données du mode de paiement dans le graphique avec le pourcentage
    for (auto it = statistiques.constBegin(); it != statistiques.constEnd(); ++it) {
        QString modePaiement = it.key();
        int count = it.value();
        double percentage = (totalCommandes > 0) ? (count * 100.0 / totalCommandes) : 0.0;

        // Ajouter l'élément avec le pourcentage
        QString label = QString("%1: %2%").arg(modePaiement).arg(percentage, 0, 'f', 1);
        series->append(label, count);
    }

    // Créer un graphique à partir de la série
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques des commandes par mode de paiement");

    // Créer un chart view pour afficher le graphique
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);  // Améliorer l'anti-aliasing

    // Afficher le graphique dans un layout
    ui->verticalLayout_graphique_2->addWidget(chartView); // Ajoutez un QVBoxLayout dans votre UI
}
void MainWindow::on_pb_pdf_2_clicked()
{
    QString nomFichier = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", "", "Fichiers PDF (*.pdf)");
    if (!nomFichier.isEmpty()) {
        Commande commande;

        // Mettre à jour et récupérer les données de commande
        QSqlQueryModel *model = commande.afficher();

        // Exporter vers PDF
        commande.exporterPDF(nomFichier, model);

        // Libération de mémoire
        delete model;

        QMessageBox::information(this, "Exportation PDF", "Exportation vers PDF réussie !");
    }
}

void MainWindow::afficherHistorique() {
    QString cheminFichier = "C:/Users/yomna/OneDrive/Documents/gestioncommande/gestioncommande.txt";
    QFile file(cheminFichier);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Erreur", "Impossible d'ouvrir le fichier d'historique.");
        return;
    }

    QTextStream in(&file);
    QString historique = in.readAll();
    file.close();

    QMessageBox msgBox;
    msgBox.setWindowTitle("Historique des commandes");
    msgBox.setText(historique);
    msgBox.exec();
}

void MainWindow::addToHistory(const QString &action, int idc) {
    Commande Ctemp;
    Ctemp.addToHistory(action, idc);
}

void MainWindow::on_pb_historique_2_clicked() {
    QString cheminFichier = "C:/Users/yomna/OneDrive/Documents/gestioncommande/gestioncommande.txt";
    QDesktopServices::openUrl(QUrl::fromLocalFile(cheminFichier));
    QMessageBox::information(this, "Historique", "Les actions ont été enregistrées dans l'historique.");
}

void MainWindow::envoyerSMS(const QString &destinataire, const QString &message)
{
    // SID et auth token de Twilio
    QString sid = "AC3d774920150677652a616de9643321c5";
    QString authToken = "f508d8a29f08635a3f98d69e0fc121e7";

    // URL de l'API Twilio
    QString url = "https://api.twilio.com/2010-04-01/Accounts/" + sid + "/Messages.json";

    // Créer un gestionnaire de requêtes
    QNetworkAccessManager *networkAccessManager = new QNetworkAccessManager(this);

    // Connecter le signal pour traiter la réponse
    // connect(networkAccessManager, &QNetworkAccessManager::finished, this, &MainWindow::replyFinished);

    // Construire les données POST
    QByteArray postData;
    postData.append("To=" + QUrl::toPercentEncoding(destinataire)); // Encodage pour les caractères spéciaux
    postData.append("&From=%2B15075937465"); // Numéro de l'expéditeur avec "%2B" pour "+"
    postData.append("&Body=" + QUrl::toPercentEncoding(message));

    // Configurer la requête HTTP
    QNetworkRequest request;
    request.setUrl(QUrl(url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    // Ajouter l'autorisation avec Basic Auth
    QString credentials = QString("%1:%2").arg(sid).arg(authToken);
    request.setRawHeader("Authorization", "Basic " + credentials.toUtf8().toBase64());

    // Envoyer la requête
    networkAccessManager->post(request, postData);

    QMessageBox::information(this, "Envoi SMS", "Le SMS est en cours d'envoi...");
}



void MainWindow::on_sendSMS_2_clicked()
{
    QString destinataire = "+21620629612"; // Numéro de téléphone du destinataire
    QString message = ui->contenu_2->toPlainText(); // Récupérer le contenu du champ de texte

    envoyerSMS(destinataire, message);

}


bool MainWindow::isCommandeIdValid(const QString& commandeId) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM COMMANDE WHERE IDC = :commandeId");
    query.bindValue(":commandeId", commandeId);

    if (query.exec()) {
        if (query.next()) {
            int count = query.value(0).toInt();
            qDebug() << "Nombre d'ID correspondants :" << count; // Affiche le nombre d'ID trouvés
            return count > 0; // Retourne true si l'ID existe dans la base de données
        } else {
            qDebug() << "Erreur lors de l'exécution de la requête.";
        }
    } else {
        qDebug() << "Erreur SQL:" << query.lastError().text(); // Affiche l'erreur si la requête échoue
    }
    return false; // Retourne false si l'ID n'existe pas ou si la requête échoue
}

void MainWindow::on_arduino_2_clicked() {
    QString commandeId = ui->commandeIdInput_2->text(); // Récupère l'ID du QLineEdit

    // Vérifie si l'ID est vide
    if (commandeId.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer un ID valide.");
        return;
    }

    // Valide l'ID dans la base de données
    if (isCommandeIdValid(commandeId)) {
        // Si l'ID est valide, envoie la commande à Arduino
        if (arduino->estPortOuvert()) {
            if (arduino->envoyerCommande("ouvrir")) {
                QMessageBox::information(this, "Succès", "L'ID est valide. Le servomoteur tourne.");
            }
        } else {
            QMessageBox::critical(this, "Erreur", "Le port série n'est pas ouvert !");
        }
    } else {
        //Si l'ID n'est pas valide, ne pas afficher ce message si lQLatin1Char('ID existe dans la base)
        QMessageBox::warning(this, "Erreur", "L'ID saisi n'existe pas dans la table 'commande'.");
    }
}
