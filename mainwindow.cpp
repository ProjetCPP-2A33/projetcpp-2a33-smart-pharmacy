#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include <QMessageBox>
#include "connection.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Produit Ptmp ;
    ui->setupUi(this);    
    Connection connection;
    // Attempt to connect to the database
    if (connection.createconnect()) {
        QMessageBox::information(this, "Connection", "Database connected successfully!");
        ui->tableView->setModel(Ptmp.afficher());

    } else {
        QMessageBox::critical(this, "Connection", "Database connection failed!");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addbutton_clicked() {
    Produit P; // It seems like you may want to create a product instance later

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
        ui->tableView->setModel(P.afficher());
        QMessageBox::information(nullptr, QObject::tr("Success"),
                                 QObject::tr("Product added successfully."), QMessageBox::Ok);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Error"),
                              QObject::tr("Failed to add product."), QMessageBox::Ok);
    }
}



    void MainWindow::on_pushButton_11_clicked()
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


    void MainWindow::on_pushButton_10_clicked()
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

