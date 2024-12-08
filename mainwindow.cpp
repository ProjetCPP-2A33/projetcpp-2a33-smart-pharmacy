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
#include "produit.h"
#include<QMessageBox>
#include<QString>
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>
#include <QPdfWriter>
#include <QPainter>
#include <QTableWidget>
#include <QFileDialog>
#include <QPixmap>
#include <QLabel>
#include "statistique.h"
#include "Qrcode.hpp"
#include <QPieSeries>
#include <QPieSlice>
#include <QChart>
#include <QChartView>
#include <QNetworkReply>
//using namespace  QtCharts;

MainWindow::~MainWindow()
{
    delete ui;
    delete arduino;
    delete model;
}

MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow), arduino(new Arduino(this)), model(new QStandardItemModel(this))
{

    ui->setupUi(this);
     Produit Ptmp ;

        ui->tableView->setModel(Ptmp.afficher());





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
    connect(&a, &Arduino::idReceived, this, &MainWindow::update_label);

    // Appliquer un fond d'écran à la fenêtre principale
    this->setStyleSheet("QMainWindow { background-image: url(:/images/bg.png); }");

    // Configuration de la table view
 //   model->setHorizontalHeaderLabels({"ID Commande"});
  //  ui->tableView->setModel(model);

    // Connexion à l'Arduino
    bool connected = arduino->connectToArduino("COM3"); // Tente d'ouvrir le port série
    if (connected) {
        connect(arduino, &Arduino::idReceived, this, &MainWindow::handleIdReceived);
        qDebug() << "Connexion et ouverture réussies.";
    } else {
        QMessageBox::critical(this, "Erreur", "Connexion à Arduino échouée.");
    }

//fournisseur
    ui->tableWidget_4->setColumnCount(7);
    QStringList headers1 = { "IDF", "Nomf", "Telephone","Adressef","Date_aff","disponibilite","image"};
    ui->tableWidget_4->setHorizontalHeaderLabels(headers1);
    afficherFournisseur();
   // ui->tableView->setModel(ftmp.afficher());
    ui->lien_image_3->hide();
    stat_fournisseur();
    ui->les_gestions->hide();
    ui->menu->show();
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



void MainWindow::on_inserer_3_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, "Select Image", "", "Images (*.png *.jpg *.bmp *.gif)");

    if (!imagePath.isEmpty()) {
        // Load the image using QPixmap
        QPixmap image(imagePath);

        // Update the QLabel with the image
        ui->afficher_image_3->setPixmap(image.scaled(ui->afficher_image_3->size(), Qt::KeepAspectRatio));
        ui->lien_image_3->setText(imagePath);
        ui->lien_image_3->hide();
    }
}

void MainWindow::on_pushButton_ajouter_4_clicked()
{
    QString id = ui->lineEdit_24->text();
    QString adressef =ui->lineEdit_23->text();
    QString nomf =ui->lineEdit_25->text();
    QString telephone = ui->lineEdit_26->text();
    QDate date_aff=ui->dateEdit_5->date();
    QString image=ui->lien_image_3->text();
    int disponibilite = ui->checkBox_disponible_3->isChecked() ? 1 :
                            (ui->checkBox_indisponible_3->isChecked() ? 0 : -1);

    if (disponibilite == -1) {
        QMessageBox::warning(this, QObject::tr("Attention"), QObject::tr("Veuillez sélectionner une disponibilité."));
        return; // Quitte la méthode si aucune case n'est cochée
    }
    if (disponibilite == -1 ||nomf.isEmpty() || adressef.isEmpty() || telephone.isEmpty() || telephone.toInt() <= 0) {

        QMessageBox::warning(this, QObject::tr("Erreur"), QObject::tr("Veuillez remplir tous les champs obligatoires."));
        return; // Quitte la méthode si des champs sont vides
    }


    if (id.isEmpty() || id.toInt() == 0) {
        QMessageBox::warning(this, QObject::tr("Erreur"), QObject::tr("L'ID doit être unique et non nul."));
        return;
    }
    fournisseur ftmp(id, nomf, adressef, telephone, date_aff, disponibilite,image);
    bool test=ftmp.ajouter(id, nomf, telephone, adressef, date_aff, disponibilite,image);

     if (test)
    {

        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n"
                                             "Click Cancel to exit."),QMessageBox::Cancel);
         afficherFournisseur();
        ui->afficher_image_3->clear();
         stat_fournisseur();

    }
     else{
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "Click Cancel to exit."),QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_modifier_4_clicked()
{

    QString id = ui->lineEdit_24->text();
    QString adressef =ui->lineEdit_23->text();
    QString nomf =ui->lineEdit_25->text();
    QString telephone = ui->lineEdit_26->text();
    QDate date_aff=ui->dateEdit_5->date();
    QString image=ui->lien_image_3->text();
    int disponibilite = ui->checkBox_disponible_3->isChecked() ? 1 :
                            (ui->checkBox_indisponible_3->isChecked() ? 0 : -1);

    if (id.isEmpty() || nomf.isEmpty() || adressef.isEmpty() || telephone.isEmpty() || disponibilite == -1) {
        QMessageBox::warning(this, QObject::tr("Erreur"), QObject::tr("Veuillez remplir tous les champs."));
        return;
    }

    fournisseur ftmp;
    if (ftmp.modifier(id, nomf, adressef, telephone, date_aff, disponibilite,image)) {
        QMessageBox::information(this, QObject::tr("Succès"), QObject::tr("Modification réussie."));
        afficherFournisseur();
        ui->afficher_image_3->clear();
        stat_fournisseur();

    } else {
        QMessageBox::critical(this, QObject::tr("Erreur"), QObject::tr("Échec de la modification."));
    }
}

void MainWindow::on_pushButton_rechercher_4_clicked()
{
    QString id = ui->lineEdit_27->text();  // Récupérer l'ID depuis un champ de texte

    if (id.isEmpty()) {
        QMessageBox::warning(this, QObject::tr("Erreur"), QObject::tr("Veuillez entrer un ID valide."));
        return;
    }

    fournisseur ftmp;
    QSqlQueryModel* model = ftmp.rechercher(id);  // Appeler la méthode rechercher

    if (model != nullptr && model->rowCount() > 0) {
        ui->tableWidget_4->setRowCount(0);  // Vider le tableau avant de le remplir
        for (int row = 0; row < model->rowCount(); ++row) {
            ui->tableWidget_4->insertRow(row);  // Ajouter une nouvelle ligne
            for (int col = 0; col < model->columnCount(); ++col) {
                QString data = model->data(model->index(row, col)).toString();
                ui->tableWidget_4->setItem(row, col, new QTableWidgetItem(data));  // Remplir les données
            }
        }
    } else {
        QMessageBox::warning(this, QObject::tr("Aucun résultat"), QObject::tr("Aucun fournisseur trouvé avec cet ID."));
    }
}

void MainWindow::on_pushButton_supprimer_4_clicked()
{
    QString id = ui->lineEdit_29->text();
    qDebug() << "Suppression de l'ID:" << id;

    fournisseur ftmp;
    bool test = ftmp.supprimer(id);

    if (test) {
        QMessageBox::information(this, QObject::tr("OK"), QObject::tr("Suppression effectuée"));
        afficherFournisseur();
        stat_fournisseur();

    } else {
        QMessageBox::critical(this, QObject::tr("Erreur"), QObject::tr("Échec de la suppression."));
    }
}

void MainWindow::on_pushButton_15_clicked()
{
    afficherFournisseur();

}

void MainWindow::on_pushButton_trier_4_clicked()
{
    // Vérifie si le tableau existe
    if (!ui->tableWidget_4) {
        QMessageBox::warning(this, "Erreur", "Le tableau n'existe pas !");
        return;
    }

    // Trier selon la colonne des noms (colonne indexée à 1)
    ui->tableWidget_4->sortItems(1, Qt::AscendingOrder);

    // Message pour confirmer l'opération
    QMessageBox::information(this, "Tri effectué", "Les noms ont été triés par ordre alphabétique.");
}

void MainWindow::on_pushButton_4_clicked()
{
    {
        QString filePath = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", "", "PDF Files (*.pdf)");
        if (filePath.isEmpty())
            return;

        QPdfWriter pdfWriter(filePath);

    // Définir la taille de la page
    #if QT_VERSION >= QT_VERSION_CHECK(5, 15, 0)
        pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    #else
        pdfWriter.setPageSizeMM(QSizeF(210.0, 297.0));
    #endif
        pdfWriter.setPageMargins(QMargins(30, 30, 30, 30));

        QPainter painter(&pdfWriter);

        // Définir une marge de départ
        int startX = 70; // Position initiale x
        int startY = 80; // Position initiale y
        int rowHeight = 985; // Hauteur de chaque ligne
        int colWidth = 1700; // Largeur de chaque colonne

        // Titre du rapport
        painter.setFont(QFont("Arial", 16, QFont::Bold));
        painter.drawText(startX, startY, "Rapport Exporté");
        startY += 500;

        QTableWidget *tableWidget = ui->tableWidget_4;
        if (!tableWidget) {
            QMessageBox::warning(this, "Erreur", "Aucune table n'est disponible à exporter.");
            return;
        }

        // Dessiner les en-têtes de colonne
        painter.setFont(QFont("Arial", 12, QFont::Bold));
        for (int col = 0; col < tableWidget->columnCount(); ++col) {
            QString headerText = tableWidget->horizontalHeaderItem(col) ? tableWidget->horizontalHeaderItem(col)->text() : QString("Colonne %1").arg(col + 1);
            painter.drawText(startX + col * colWidth, startY, headerText);
        }

        startY += rowHeight;

        // Dessiner les lignes du tableau
        painter.setFont(QFont("Arial", 12));
        for (int row = 0; row < tableWidget->rowCount(); ++row) {
            for (int col = 0; col < tableWidget->columnCount(); ++col) {
                QString cellText = tableWidget->item(row, col) ? tableWidget->item(row, col)->text() : "";

                // Supprimer "T00:00:00" des cellules
                if (col == /* Index de la colonne Date_aff */ 3) { // Adapter à l'index réel
                    cellText = cellText.replace("T00:00:00", "");
                }
                // Supprimer ".000" des dates
                if (col == /* Index de la colonne Date_aff */ 3) { // Adapter à l'index réel
                    cellText = cellText.replace(".000", "");
                }

                painter.drawText(startX + col * colWidth, startY, cellText);
            }
            startY += rowHeight;

            // Vérifier si on dépasse la page et créer une nouvelle page
            if (startY > pdfWriter.height() - 50) {
                pdfWriter.newPage();
                startY = 50;
            }
        }

        painter.end();
        QMessageBox::information(this, "Succès", "Le fichier PDF a été exporté avec succès.");
    }

}

void MainWindow::on_tableWidget_4_itemClicked(QTableWidgetItem *item)
{

    // Get the row of the clicked item
    int row = item->row();
    // Retrieve data from the table based on the new structure
    QString ID = ui->tableWidget_4->item(row, 0)->text();       // Column 1: ID
    QString nomf = ui->tableWidget_4->item(row, 1)->text();      // Column 2: nom
    QString adressef = ui->tableWidget_4->item(row, 3)->text(); // Column 3: adresse
    QString date_aff = ui->tableWidget_4->item(row, 4)->text();  // Column 4: date_aff

    QString telephone = ui->tableWidget_4->item(row, 2)->text();  // Column 6: telephone
    QString disponibilite = ui->tableWidget_4->item(row, 5)->text(); // Column 7: disponibilite
QString imagePath= ui->tableWidget_4->item(row, 6)->text();
    // Set the retrieved data to the line edits
    ui->lineEdit_24->setText(ID);
    ui->lineEdit_25->setText(nomf);       // Assuming this is a combo box
    ui->lineEdit_23->setText(adressef);
    ui->dateEdit_5->setDate(QDate::fromString(date_aff));         // Assuming you have a lineEdit for date_aff
    ui->lineEdit_26->setText(telephone);         // Assuming you have a lineEdit for telephone
    QPixmap image(imagePath);
    ui->afficher_image_3->setPixmap(image.scaled(ui->afficher_image_3->size(), Qt::KeepAspectRatio));
    // Create a QR code from the attributes
    QString text = "ID: " + ID + "\n"
                                 "Nomf: " + nomf + "\n"
                           "Adressef: " + adressef + "\n"
                               "Date Aff: " + date_aff + "\n"
                                "Téléphone: " + telephone + "\n"
                                 "Disponibilité: " + disponibilite + "\n";

    using namespace qrcodegen;
    QrCode qr = QrCode::encodeText(text.toUtf8().data(), QrCode::Ecc::MEDIUM);

    qint32 sz = qr.getSize();
    QImage im(sz, sz, QImage::Format_RGB32);
    QRgb black = qRgb(0, 0, 0);
    QRgb white = qRgb(255, 255, 255);

    for (int y = 0; y < sz; y++) {
        for (int x = 0; x < sz; x++) {
            im.setPixel(x, y, qr.getModule(x, y) ? black : white);
        }
    }
    ui->qrcode_5->setPixmap(QPixmap::fromImage(im.scaled(100, 100, Qt::KeepAspectRatio, Qt::FastTransformation), Qt::MonoOnly));

}


void MainWindow::stat_fournisseur()
{
    QList<QWidget*> childWidgets = ui->label_stat_7->findChildren<QWidget*>();
    for (QWidget* childWidget : childWidgets) {
        childWidget->deleteLater();

    }
    //the clear didnt work, but my goal is when i second click this button it deleted old chart and renders a new one
    ui->label_stat_7->clear();
    ui->label_stat_7->hide();

    int s0, s1;

    s0 = ftmp.countdisponibilite("0");
    s1 = ftmp.countdisponibilite("1");





    int total = s0 + s1   ;
    // Calculate percentages
    float x = (total != 0) ? (s0 * 100.0f) / total : 0.0f;
    float x1 = (total != 0) ? (s1 * 100.0f) / total : 0.0f;


    // Adjust the percentages to ensure they sum up to 100%
    float totalPercentage = x + x1  ;
    if (totalPercentage != 100.0f && total != 0) {
        float correction = 100.0f - totalPercentage;
        x += correction;  // Apply correction to one of the slices (usually the largest one)
    }



    //qDebug() <<  x <<endl;
    // 3 jour  33.00 %
    QString ch1 = QString("dispo %1%").arg(QString::number(x, 'f', 2));
    QString ch2 = QString("non dispo %2%").arg(QString::number(x1, 'f', 2));






    QPieSeries *series=new QPieSeries();
    series->setHoleSize(0.35);

    QPieSlice *slice= series->append(ch1,x);
    slice->setLabelVisible();
    slice->setLabelColor(QColor(9, 124, 54));
    slice->setBrush(QColor(9, 124, 54));

    QPieSlice *slice1= series->append(ch2,x1);
    slice1->setLabelVisible();
    slice1->setLabelColor(QColor(Qt::black));
    slice1->setBrush(QColor(Qt::black));


    QChart *chart=new QChart();
    chart->addSeries(series);
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QBrush backgroundBrush(QColor(187,93,87,0));
    chart->setBackgroundBrush(backgroundBrush);
    QChartView *chartview=new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    chartview->setFixedSize(ui->label_stat_7->size());
    chartview->setParent(ui->label_stat_7);
    ui->label_stat_7->setStyleSheet("background:transparent; color:white; ");
    ui->label_stat_7->show();

}
void MainWindow::afficherFournisseur()
{

    // Créer une instance de livraison pour appeler afficher()
    fournisseur ftmp;
    QSqlQueryModel* model = ftmp.afficherTri();

    // Vider le QTableWidget avant de le remplir à nouveau
    ui->tableWidget_4->setRowCount(0);

    // Remplir le QTableWidget avec les données du modèle
    for (int row = 0; row < model->rowCount(); ++row) {
        ui->tableWidget_4->insertRow(row); // Ajouter une nouvelle ligne
        for (int col = 0; col < model->columnCount(); ++col) {
            QString data = model->data(model->index(row, col)).toString();
            ui->tableWidget_4->setItem(row, col, new QTableWidgetItem(data));
        }
    }
}

void MainWindow::on_menu_client_clicked()
{
    ui->menu->hide();
    ui->les_gestions->show();
    ui->tabWidget->setCurrentIndex(0);
}

void MainWindow::on_menu_commande_clicked()
{
    ui->menu->hide();
    ui->les_gestions->show();
    ui->tabWidget->setCurrentIndex(2);
}

void MainWindow::on_menu_produit_clicked()
{
    ui->menu->hide();
    ui->les_gestions->show();
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_menu_fournisseur_clicked()
{
    ui->menu->hide();
    ui->les_gestions->show();
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_gestion_menu_clicked()
{
    ui->menu->show();
    ui->les_gestions->hide();
}

void MainWindow::on_addbutton_clicked()
{
    // Produit P; // It seems like you may want to create a product instance later

    // Retrieve values from UI elements
    int ID = ui->idProduitAjout->text().toInt();
    QString libelle = ui->libelleAjout->text();
    float prix = ui->prixAjout->text().toFloat();
    QDate date = ui->dateAjout->date();
    QString categorie = ui->categorieAjout->currentText();
    bool Enstock = ui->checkBox->isChecked();
    bool Enrupture = ui->checkBox_3->isChecked();
    bool test;
    // Debugging output
    qDebug() << "ID:" << ID;
    qDebug() << "Libelle:" << libelle;
    qDebug() << "Prix:" << prix;
    qDebug() << "Date:" << date.toString("dd-MM-yyyy"); // Format date for display
    qDebug() << "Categorie:" << categorie;
    qDebug() << "Enstock:" << Enstock;
    qDebug() << "Enrupture:" << Enrupture;

    // Create a Produit object based on the stock status
    if (Enstock) {
        // The first checkbox is selected
        Produit P(ID, libelle, prix, date, categorie, "In Stock"); // Adjust according to your constructor
        test = P.ajouter();
    }

    if (Enrupture) {
        Produit P(ID, libelle, prix, date, categorie, "Out of Stock"); // Adjust according to your constructor
        test = P.ajouter();
    }

    // Attempt to add the product and update the view
    if (test) {
        ui->tableView->setModel(Ptmp.afficher());
        QMessageBox::information(nullptr, QObject::tr("Success"),
                                 QObject::tr("Product added successfully."), QMessageBox::Ok);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Error"),
                              QObject::tr("Failed to add product."), QMessageBox::Ok);
    }
}


void MainWindow::on_modifer_produit_clicked()
{
    int ID = ui->idProduitAjout->text().toInt(); // Assuming ID is still used to identify the product
    QString libelle = ui->libelleAjout->text();
    float prix = ui->prixAjout->text().toFloat();
    QDate date = ui->dateAjout->date();
    QString categorie = ui->categorieAjout->currentText();
    bool Enstock = ui->checkBox->isChecked();
    bool Enrupture = ui->checkBox_3->isChecked();
    bool test;

    // Debugging output
    qDebug() << "Updating product with ID:" << ID;
    qDebug() << "Libelle:" << libelle;
    qDebug() << "Prix:" << prix;
    qDebug() << "Date:" << date.toString("dd-MM-yyyy");
    qDebug() << "Categorie:" << categorie;
    qDebug() << "Enstock:" << Enstock;
    qDebug() << "Enrupture:" << Enrupture;

    // Create a Produit object for the update
    Produit P(ID, libelle, prix, date, categorie, Enstock ? "In Stock" : "Out of Stock"); // Adjust based on your constructor
    test = P.modifier(); // Call the update function

    // Attempt to update the product and notify the user
    if (test) {
        ui->tableView->setModel(P.afficher()); // Refresh the product list
        QMessageBox::information(nullptr, QObject::tr("Success"),
                                 QObject::tr("Product updated successfully."), QMessageBox::Ok);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Error"),
                              QObject::tr("Failed to update product."), QMessageBox::Ok);
    }
}


void MainWindow::on_pushButton_produit_clicked()
{
      ui->tableView->setModel(Ptmp.afficher());
}


void MainWindow::on_pushButton_pdf_produit_clicked()
{
    QString ref = ui->lineEdit_idpdf->text();
    Produit *Prod;
    Prod = Ptmp.readproduit(ref);

    QString id_string = QString::number(Prod->getID());
    QString dateExpiration_string = Prod->getDateExpiration().toString("yyyy-MM-dd");
    QString prix_string = QString::number(Prod->getPrix(), 'f', 2);
    QString libelle_string = Prod->getLibelle();
    QString disponibilite_string = Prod->getDisponiblite();
    QString categorie_string = Prod->getCategorie();

    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);

    printer.setOutputFileName("C:\Users\DELL\Desktop\integration\pdf" + libelle_string + "_" + id_string + ".pdf");

    QPainter painter;
    if (!painter.begin(&printer))
    {
        qWarning() << "Failed to open PDF file for writing";
        return;
    }

    painter.setFont(QFont("Bahnschrift Light", 25));
    painter.setPen(Qt::green);
    painter.drawText(130, 230, "Product Information");
    painter.setPen(Qt::black);
    painter.drawText(120, 150, "Product Management System");

    painter.drawText(150, 300, "ID: " + id_string);
    painter.drawText(150, 400, "Expiration Date: " + dateExpiration_string);
    painter.drawText(150, 500, "Product Name: " + libelle_string);
    painter.drawText(150, 600, "Availability: " + disponibilite_string);
    painter.drawText(150, 700, "Category: " + categorie_string);
    painter.drawText(150, 800, "Price: " + prix_string);

    painter.end();
}


void MainWindow::on_pushButton_stat_produits_clicked()
{
    statistique S;
    S.exec();
}


void MainWindow::on_pushButton_produits_clicked()
{
    QString id = ui->lineEdit_3->text();
    bool success = Ptmp.supprimer(id);
    if (success) {
        QMessageBox::information(this, "Success", "Product deleted successfully!");
        // Optionally refresh the view after deletion
        ui->tableView->setModel(Ptmp.afficher());
    } else {
        QMessageBox::critical(this, "Error", "Failed to delete product.");
    }
}
void MainWindow::afficherProduitsDemandesParGenre() {
    // Créer un modèle de requête SQL
    QSqlQueryModel *model = new QSqlQueryModel;

    // Exécuter la requête SQL pour obtenir le produit le plus demandé par genre
    QSqlQuery query;
    query.prepare(R"(
        SELECT libelle, genre, nb_demandes FROM (
            SELECT gp.libelle, COUNT(c.id_produit) AS nb_demandes, c.genre,
                   ROW_NUMBER() OVER (PARTITION BY c.genre ORDER BY COUNT(c.id_produit) DESC) AS rang
            FROM GESTIONPRODUITS gp
            JOIN client c ON gp.id = c.id_produit
            GROUP BY gp.libelle, c.genre
        ) ranked
        WHERE ranked.rang = 1
    )");

    if (query.exec()) {
        // Remplir le modèle avec les résultats de la requête
        model->setQuery(query);
        // Afficher le modèle dans le QTableView (tableViewEtat)
        ui->tableViewEtat->setModel(model);
    } else {
        qDebug() << "Erreur dans la requête SQL: " << query.lastError().text();
    }
}

void MainWindow::on_pushButton_recherche_produit_clicked()
{
    QString val=ui->lineEdit_rech->text();
    QString option=ui->comboBox_rech->currentText();

    if((val!="")&&(option=="Libelle"))
    {        ui->tableView->setModel(Ptmp.afficher_libelle(val));}
    else if((val!="")&&(option=="Disponibilite"))
    {
        ui->tableView->setModel(Ptmp.afficher_disponibilite(val));
    }
}


void MainWindow::on_send_clicked()
{
    // Récupérer les informations de l'interface utilisateur.
    QString email = ui->email->text(); // Adresse email.
    QString nomProduit = ui->nomProduit->text(); // Nom du produit concerné.
    QString subject = QString("Alerte – Proche expiration du médicament %1").arg(nomProduit); // Objet de l'email.

    QString dateExpiration = ui->dateExpiration->text(); // Date d'expiration.
    QString nom = ui->nom->text(); // Nom du destinataire.

    // Préparer le message d'alerte avec un formatage.
    QString alertMessage = QString(
                               "Bonjour %1,\n\n"
                               "En tant qu'administrateur, je tiens à t'informer que le médicament %2, arrivera bientôt à sa date d'expiration, fixée au %3.\n\n"
                               "Merci de vérifier ce produit en stock et de prendre les mesures nécessaires, telles que :\n"
                               "- Le retrait du produit des étagères si besoin.\n"
                               "- La gestion des éventuels retours ou promotions pour écouler les stocks restants avant cette date.\n\n"
                               "Si tu as des questions ou besoin de précisions supplémentaires, je reste à ta disposition.\n\n"
                               "Merci pour ta vigilance et ton action rapide.\n\n\n"
                               "Cordialement,\n\n"
                               ).arg(nom, nomProduit, dateExpiration);

    // Vérifier que tous les champs obligatoires sont remplis.
    if (email.isEmpty() || subject.isEmpty() || alertMessage.isEmpty()) {
        QMessageBox::critical(nullptr, QObject::tr("EMAIL"),
                              QObject::tr("All fields are required.\n"
                                          "Please fill them and try again."),
                              QMessageBox::Ok);
        return;
    }

    // Initialiser un gestionnaire pour les requêtes réseau.
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);

    // Construire l'URL de l'API avec les paramètres nécessaires.
    QString apiUrl = QString("https://api.backendflow.io/v1/email?templateId=lXnPiheAULB2xxXB3Rx5&to=%1&subject=%2&attachmentLink=&attachmentName=&message=%3")
                         .arg(email, subject, alertMessage);

    QUrl url(apiUrl); // Créer l'objet URL.
    QNetworkRequest request(url); // Créer la requête réseau.

    // Définir les en-têtes de la requête, y compris le jeton d'autorisation.
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    request.setRawHeader("Authorization", "Bearer sk-bf-8c718e0a-55dd-446d-adef-2f3df7e82e23");

    // Préparer un corps JSON vide (statique dans ce cas).
    QJsonObject jsonBody;
    jsonBody["sk-bf-8c718e0a-55dd-446d-adef-2f3df7e82e23"] = ""; // Jeton statique.

    // Convertir l'objet JSON en format QByteArray.
    QJsonDocument jsonDoc(jsonBody);
    QByteArray jsonData = jsonDoc.toJson();

    // Envoyer une requête POST avec le JSON.
    QNetworkReply* reply = manager->post(request, jsonData);

    // Gérer la réponse de l'API lorsqu'elle est terminée.
    connect(reply, &QNetworkReply::finished, [reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            QMessageBox::information(nullptr, QObject::tr("EMAIL"),
                                     QObject::tr("Email sent successfully.\n"
                                                 "Click OK to exit."),
                                     QMessageBox::Ok);
        } else {
            // Afficher un message d'erreur si la requête a échoué.
            QMessageBox::critical(nullptr, QObject::tr("EMAIL"),
                                  QObject::tr("Failed to send email.\n"
                                              "Error"),  QMessageBox::Ok);
        }
        reply->deleteLater(); // Libérer la mémoire utilisée par la réponse.
    });
}

void MainWindow::update_label(){
    QString data;

    // Use Arduino's public methods to read data
    while (a.canReadLine()) {
        data = QString::fromUtf8(a.readLine());
    }

    qDebug() << data;
    int REF = ui->lineEdit_rech->text().toInt();

    if (Ptmp.limit(REF)) {
        a.envoyerCommande("2");  // Use envoyerCommande to send data
        QMessageBox::critical(nullptr, QObject::tr("ALERT"),
                              QObject::tr("STOCK COMPLET.\n"
                                          "Click Cancel to exit."), QMessageBox::Ok);
        ui->label_11->setText("Pas d'ajout !");
        return;
    }

    if (data == "1") {
        ui->label_11->setText("++1");
        Ptmp.incr(REF);
    }
}

