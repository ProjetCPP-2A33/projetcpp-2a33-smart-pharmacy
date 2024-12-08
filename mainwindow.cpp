#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "produit.h"
#include <QMessageBox>
#include "connection.h"
#include "statistique.h"

#include <QFileDialog>
#include <QFile>
#include <QFileInfo>
#include <QDebug>

#include <QFile>
#include <QPixmap>
#include <QPainter>
#include <QPrinter>
#include <QNetworkAccessManager>
#include <QNetworkReply>

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

        afficherProduitsDemandesParGenre();

    } else {
        QMessageBox::critical(this, "Connection", "Database connection failed!");
    }

    ui->label_9->setText("INIT");

    int ret=a.connect_arduino();
    switch (ret) {
    case(0):qDebug()<<"arduino is available and connected to :"<<a.getarduino_port_name();
        break;
    case(1):qDebug()<<"arduino is available but not connected to :"<<a.getarduino_port_name();
        break;
    case(-1):qDebug()<<"arduino is not available";
    }
    QObject::connect(a.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_addbutton_clicked() {
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


void MainWindow::on_pushButton_stat_clicked()
{
    statistique S;
    S.exec();
}


void MainWindow::on_comboBox_tri_activated(int index)
{
    QString choix=ui->comboBox_tri->currentText();
    ui->tableView->setModel(Ptmp.afficher_choix(choix));
}


void MainWindow::on_pushButton_recherche_clicked()
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

void MainWindow::on_pushButton_pdf_clicked()
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

    printer.setOutputFileName("C:/Users/DELL/Documents/GestionProduit/pdf/" + libelle_string + "_" + id_string + ".pdf");

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


void MainWindow::on_pushButton_clicked()
{
    ui->tableView->setModel(Ptmp.afficher());
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

void MainWindow::update_label(){
    data=a.read_from_arduino();
    qDebug()<<data;
    int REF = ui->lineEdit_rech->text().toInt() ;
    if(Ptmp.limit(REF))
    {



        a.write_to_arduino("2");
        QMessageBox::critical(nullptr, QObject::tr("ALERT"),
                              QObject::tr("STOCK COMPLET.\n"
                                          "Click Cancel to exit."), QMessageBox::Ok);
        return ;
        ui->label_11->setText("Pas d'ajout !");
    }

    if (data == "1")
    {
        ui->label_11->setText("++1");
        Ptmp.incr(REF);



}
}












