#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fournisseur.h"
#include<QMessageBox>
#include<QString>
#include<QSqlQuery>
#include<QSqlDatabase>
#include<QSqlError>


    MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
  {
    ui->setupUi(this);
    fournisseur ftmp;

    ui->tableWidget->setColumnCount(6);
    QStringList headers = { "ID", "Nom", "Adresse","Date_aff","Telephone","disponibilite"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    connect(ui->pushButton_ajouter, &QPushButton::clicked, this, &MainWindow::on_pushButton_ajouter_clicked);
    connect(ui->pushButton_supprimer, &QPushButton::clicked, this, &MainWindow::on_pushButton_supprimer_clicked);
    afficherFournisseur();

  }
void MainWindow::afficherFournisseur()
{
    // Vider le QTableWidget avant de le remplir à nouveau
    ui->tableWidget->setRowCount(5);

    // Créer une instance de livraison pour appeler afficher()
    fournisseur ftmp;
    QSqlQueryModel* model = ftmp.afficher();

    // Remplir le QTableWidget avec les données du modèle
    for (int row = 0; row < model->rowCount(); ++row) {
        ui->tableWidget->insertRow(row); // Ajouter une nouvelle ligne
        for (int col = 0; col < model->columnCount(); ++col) {
            QString data = model->data(model->index(row, col)).toString();
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(data));
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_ajouter_clicked()
{
    QString id = ui->lineEdit_4->text();
    QString adresse =ui->lineEdit_3->text();
    QString nom =ui->lineEdit_14->text();
    QString telephone = ui->lineEdit_15->text();
    QDate date_aff=ui->dateEdit->date();
    int disponibilite = ui->checkBox_disponible->isChecked() ? 1 :
                            (ui->checkBox_indisponible->isChecked() ? 0 : -1);

    if (disponibilite == -1) {
        QMessageBox::warning(this, QObject::tr("Attention"), QObject::tr("Veuillez sélectionner une disponibilité."));
        return; // Quitte la méthode si aucune case n'est cochée
    }
    if (nom.isEmpty() || adresse.isEmpty() || telephone.isEmpty() || telephone.toInt() <= 0) {

        QMessageBox::warning(this, QObject::tr("Erreur"), QObject::tr("Veuillez remplir tous les champs obligatoires."));
        return; // Quitte la méthode si des champs sont vides
    }

    fournisseur ftmp(id, nom, adresse, telephone, date_aff, disponibilite);
    bool test=ftmp.ajouter(id, nom, telephone, adresse, date_aff, disponibilite);

     if (test)
    {

        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n"
                                             "Click Cancel to exit."),QMessageBox::Cancel);
         afficherFournisseur();


    }
     else{
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "Click Cancel to exit."),QMessageBox::Cancel);
    }
}


void MainWindow::on_pushButton_modifier_clicked() {
    QString id = ui->lineEdit_4->text();
    QString adresse = ui->lineEdit_3->text();
    QString nom = ui->lineEdit_14->text();
    QString telephone = ui->lineEdit_15->text();
    QDate date_aff = ui->dateEdit->date();
    int disponibilite = ui->checkBox_disponible->isChecked() ? 1 :
                            (ui->checkBox_indisponible->isChecked() ? 0 : -1);

    if (id.isEmpty() || nom.isEmpty() || adresse.isEmpty() || telephone.isEmpty() || disponibilite == -1) {
        QMessageBox::warning(this, QObject::tr("Erreur"), QObject::tr("Veuillez remplir tous les champs."));
        return;
    }

    fournisseur ftmp;
    QSqlQuery query;
    query.prepare("UPDATE fournisseur SET nom = :nom, adresse = :adresse, telephone = :telephone, date_aff = :date_aff, disponibilite = :disponibilite WHERE id = :id");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":telephone", telephone);
    query.bindValue(":date_aff", date_aff);
    query.bindValue(":disponibilite", disponibilite);

    if (query.exec()) {
        QMessageBox::information(this, QObject::tr("Succès"), QObject::tr("Modification réussie."));
        afficherFournisseur();
    } else {
        QMessageBox::critical(this, QObject::tr("Erreur"), QObject::tr("Échec de la modification."));
    }
}


void MainWindow::on_pushButton_supprimer_clicked()

{
    QString id=ui->lineEdit_16->text();
    qDebug() << "Suppression de l'ID:" << id;

    fournisseur ftmp;
    bool test=ftmp.supprimer(id);

    if (test)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                                 QObject::tr("Suppression effectué\n"
                                             "Click Cancel to exit."),QMessageBox::Cancel);


        ui->lineEdit_16->clear();
        ui->lineEdit_14->clear();
        ui->lineEdit_15->clear();
        ui->lineEdit_3->clear();
        ui->lineEdit_4->clear();
        ui->dateEdit->setDate(QDate::currentDate()); // Réinitialiser la date

        // Vider le QTableWidget
        ui->tableWidget->setRowCount(6);
        afficherFournisseur();

    }    else{
        QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                              QObject::tr("Suppression non effectué.\n"
                                          "Click Cancel to exit."),QMessageBox::Cancel);
    }


}
void MainWindow::on_pushButton_trier_clicked() {
    // Ajoutez le code nécessaire pour trier et afficher les données
    fournisseur ftmp;
    QSqlQueryModel* model = ftmp.afficher(); // Si vous modifiez 'afficher()' pour inclure le tri

    // Affichage des données triées dans l'interface
    ui->tableView->setModel(model);  // Remplacez 'tableView' par le nom de votre widget d'affichage
}


