#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Client.h"
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
    if (arduino->connectToArduino("COM9")) { // Remplacez "COM9" par votre port série
        connect(arduino, &Arduino::idReceived, this, &MainWindow::handleIdReceived);
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
    // Affiche l'ID reçu dans le QLineEdit
    ui->lineEdit->setText(id);

    // Vérifie l'état de l'ID dans la base de données
    QString etat = chercherEtatDansBD(id);

    // Affiche l'état dans une QLabel
    if (!etat.isEmpty()) {
        QMessageBox::information(this, "État de la commande", "État : " + etat);
    } else {
        QMessageBox::warning(this, "Erreur", "ID non trouvé dans la base de données.");
    }

    qDebug() << "ID reçu :" << id << ", État :" << etat;
}

QString MainWindow::chercherEtatDansBD(const QString &id)
{
    QSqlQuery query;
    query.prepare("SELECT etat FROM COMMANDES WHERE idc = :idc");
    query.bindValue(":idc", id);

    if (query.exec() && query.next())
    {
        return query.value(0).toString();
    }
    return "";
}


