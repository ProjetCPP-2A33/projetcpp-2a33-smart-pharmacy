#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(client.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Ajouter client
void MainWindow::on_pushButton_ajouter_clicked()
{

    int id=ui->lineEdit_id->text().toInt();
    int gsm=ui->lineEdit_gsm->text().toInt();
    int cin=ui->lineEdit_cin->text().toInt();
    QString nom=ui->lineEdit_nom->text();
    QString prenom=ui->lineEdit_prenom->text();
    QString sexe=ui->lineEdit_sexe->text();
    QString allergies=ui->lineEdit_allergies->text();
    QString adresse=ui->lineEdit_adresse->text();
    QString mail=ui->lineEdit_mail->text();

    Client C(id,gsm,cin, nom, prenom, sexe, allergies, adresse, mail);

    // Contrôle pour l'adresse e-mail : utiliser une expression régulière simple
    QRegularExpression mailRegex("^[\\w.-]+@[\\w.-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = mailRegex.match(mail);
    if (!match.hasMatch()) {
        QMessageBox::warning(this, "Erreur", "L'adresse e-mail est invalide.");
        return;
    }
    bool test=C.ajouter();

    if(test)
    {
        //actualiser
        ui->tableView->setModel(client.afficher());

        QMessageBox::information(nullptr,QObject::tr("Ok"),QObject::tr("Ajout effectué\n" "Click Cancel to exit."), QMessageBox::Cancel);
    }
    else
        QMessageBox::critical(nullptr,QObject::tr("Not Ok"),QObject::tr("Ajout non effectué\n" "Click Cancel to exit."),QMessageBox::Cancel);
}

// Supprimer client
void MainWindow::on_pushButton_supprimer_clicked() {
    int id = ui->lineEdit_id->text().toInt();
    qDebug() << "Suppression de l'ID:" << id;

    Client client; // Créez une nouvelle instance de Commande
    bool test = client.supprimer(id);

    if (test) {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("Suppression effectuée\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);
        afficherClient(); // Rafraîchir le tableau
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Suppression non effectuée.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
}

//Afficher client
void MainWindow::afficherClients()
{
    // Supposons que `afficherClients` renvoie une liste de clients
    QList<QMap<QString, QString>> clients = client.afficherClients();

    // Effacer les anciennes lignes
    ui->tableWidgetClients->setRowCount(0);

    // Remplir le tableau avec les données des clients
    for (const auto &client : clients) {
        int row = ui->tableWidgetClients->rowCount();
        ui->tableWidgetClients->insertRow(row);

        ui->tableWidgetClients->setItem(row, 0, new QTableWidgetItem(client["ID"]));
        ui->tableWidgetClients->setItem(row, 1, new QTableWidgetItem(client["Nom"]));
        ui->tableWidgetClients->setItem(row, 2, new QTableWidgetItem(client["Prénom"]));
        ui->tableWidgetClients->setItem(row, 3, new QTableWidgetItem(client["CIN"]));
        ui->tableWidgetClients->setItem(row, 4, new QTableWidgetItem(client["GSM"]));
        ui->tableWidgetClients->setItem(row, 5, new QTableWidgetItem(client["Mail"]));
        ui->tableWidgetClients->setItem(row, 6, new QTableWidgetItem(client["Adresse"]));
        ui->tableWidgetClients->setItem(row, 7, new QTableWidgetItem(client["Allergies"]));
        ui->tableWidgetClients->setItem(row, 8, new QTableWidgetItem(client["Sexe"]));
    }
}


//Modifier client
void MainWindow::on_pushButton_modifier_clicked() {
    int id = ui->lineEdit_id->text().toInt();
    int gsm = ui->lineEdit_gsm->text().toInt();
    int cin = ui->lineEdit_cin->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QString sexe = ui->lineEdit_sexe->text();
    QString allergies = ui->lineEdit_allergies->text();
    QString adresse = ui->lineEdit_adresse->text();
    QString mail = ui->lineEdit_mail->text();


    Client client;
    if (client.modifier(id, gsm, cin, nom, prenom, sexe, allergies, adresse, mail)) {
        ui->tableView->setModel(client.afficher());
        QMessageBox::information(this, "Succès", "Le client a été modifié avec succès.");
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de la modification du client.");
    }
}

void MainWindow::on_pushButton_rechercher_clicked()
{
    // Récupérer l'ID saisi par l'utilisateur
    QString id = ui->lineEdit_rechercher->text();

    // Vérifier si l'ID n'est pas vide
    if(id.isEmpty()) {
        QMessageBox::warning(this, "Recherche", "Veuillez entrer un ID pour la recherche.");
        return;
    }

    // Créer une requête SQL pour rechercher par ID
    QSqlQuery query;
    query.prepare("SELECT * FROM Client WHERE id = :id");
    query.bindValue(":id", id);

    // Exécuter la requête
    if(query.exec()) {
        if(query.next()) {
            // Récupérer les données du client
            QString nom = query.value("nom").toString();
            QString prenom = query.value("prenom").toString();
            int cin = query.value("cin").toInt();
            int gsm = query.value("gsm").toInt();
            QString mail = query.value("mail").toString();
            QString adresse = query.value("adresse").toString();
            QString allergies = query.value("allergies").toString();
            QString sexe = query.value("sexe").toString();
            int id = query.value("id").toInt();

            // Afficher les données dans les champs appropriés de l'interface
            ui->lineEdit_nom->setText(nom);
            ui->lineEdit_prenom->setText(prenom);
            ui->lineEdit_cin->setText(QString::number(cin));
            ui->lineEdit_gsm->setText(QString::number(cin));
            ui->lineEdit_id->setText(QString::number(cin));
            ui->lineEdit_mail->setText(mail);
            ui->lineEdit_adresse->setText(adresse);
            ui->lineEdit_allergies->setText(allergies);
            ui->lineEdit_sexe->setText(sexe);
        } else {
            QMessageBox::information(this, "Recherche", "Aucun client trouvé avec cet ID.");
        }
    } else {
        QMessageBox::critical(this, "Erreur", "Erreur lors de l'exécution de la recherche.");
    }
}

