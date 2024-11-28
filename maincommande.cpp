#include "maincommande.h"
#include "ui_maincommande.h"
#include "commande.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QSqlError>
#include <QRegularExpression>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QTabWidget>
#include <QFileDialog>
#include <QDesktopServices>
#include <QUrl>
#include <QFile>
#include <QTextStream>
#include <QNetworkReply>
#include <QNetworkAccessManager>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    arduino(new Arduino(this)) // Initialisation de l'objet Arduino
{
    ui->setupUi(this);

    if (!arduino->ouvrirPort("COM4")) {
        QMessageBox::critical(this, "Erreur", "Impossible d'ouvrir le port série.");
    }

    // Définir les en-têtes de colonnes pour QTableWidget une seule fois
    ui->tableWidget->setColumnCount(5);
    QStringList headers = { "IDC", "Date", "Montant Total", "Mode Paiement", "État" };
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    // Appeler la fonction afficherCommandes pour initialiser l'affichage
    afficherCommandes();
}

void MainWindow::afficherCommandes()
{
    // Vider le QTableWidget avant de le remplir à nouveau
    ui->tableWidget->setRowCount(0);

    // Créer une instance de Commande pour appeler afficher()
    Commande Ctemp;
    QSqlQueryModel* model = Ctemp.afficher();
    addToHistory("Affichage des commandes", 0);
    //addToHistory("Affichage de la commande",idc);

    // Remplir le QTableWidget avec les données du modèle
    for (int row = 0; row < model->rowCount(); ++row) {
        ui->tableWidget->insertRow(row); // Ajouter une nouvelle ligne
        for (int col = 0; col < model->columnCount(); ++col) {
            QString data = model->data(model->index(row, col)).toString();
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(data));
        }
    }
}

MainWindow::~MainWindow() {
    serialPort->close();
    delete ui;
}

void MainWindow::on_pushButton_5_clicked() {
    int idc = ui->lineEdit->text().toInt();
    QDate datec = ui->dateEdit->date();
    double montantTotal = ui->lineEdit_3->text().toDouble();
    QString modePaiement = ui->comboBox->currentText();
    QString etat = ui->lineEdit_11->text();

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
    if (ui->lineEdit_3->text().isEmpty()) {
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
        addToHistory("Ajout de la commande", idc);
        afficherCommandes();  // Rafraîchir l'affichage après l'ajout réussi
       // addToHistory("Ajout de la commande", idc);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
    }
}
    void MainWindow::on_pushButton_4_clicked()
    {
        int idc = ui->lineEdit_12->text().toInt();
        qDebug() << "Suppression de l'ID:" << idc;  // Pour le débogage

        Commande Ctemp;  // Créez une nouvelle instance de Commande
        bool test = Ctemp.supprimer(idc);

        if (test) {
            QMessageBox::information(nullptr, QObject::tr("OK"),
                                     QObject::tr("Suppression effectuée\n"
                                                 "Click Cancel to exit."), QMessageBox::Cancel);
            afficherCommandes(); // Rafraîchir le tableau
            addToHistory("Suppression de la commande", idc);
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                                  QObject::tr("Suppression non effectuée.\n"
                                              "L'ID n'existe pas dans la base de données."), QMessageBox::Cancel);
        }
    }


    void MainWindow::on_pushButton_clicked() {
        int idc = ui->lineEdit_12->text().toInt();
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

        if (!ui->lineEdit_3->text().isEmpty()) {
            montantTotal = ui->lineEdit_3->text().toDouble();
            if (montantTotal < 0) {
                QMessageBox::warning(this, "Erreur", "Le montant total ne peut pas être négatif.");
                return;
            }
        }

        if (!ui->comboBox->currentText().isEmpty()) {
            modePaiement = ui->comboBox->currentText();
        }
         addToHistory("Modifier de la commande", idc);

        if (!ui->lineEdit_11->text().isEmpty()) {
            etat = ui->lineEdit_11->text();
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
            addToHistory("modification de la commande", idc);
        } else {
            QMessageBox::critical(nullptr, QObject::tr("Erreur"),
                                  QObject::tr("La modification a échoué.\nCliquez sur Annuler pour quitter."),
                                  QMessageBox::Cancel);
        }
    }

void MainWindow::on_pushButton_9_clicked() {
    int idc = ui->lineEdit_10->text().toInt();  // Remplacez `lineEdit_idRecherche` par l'ID réel du champ de saisie

    Commande Ctemp;
    QSqlQueryModel* model = Ctemp.rechercher(idc);
    addToHistory("recherche de la commande", idc);

    if (model && model->rowCount() > 0) {
        ui->tableWidget->setRowCount(0);  // Vider le tableau avant d'afficher les résultats
        for (int row = 0; row < model->rowCount(); ++row) {
            ui->tableWidget->insertRow(row);
            for (int col = 0; col < model->columnCount(); ++col) {
                QString data = model->data(model->index(row, col)).toString();
                ui->tableWidget->setItem(row, col, new QTableWidgetItem(data));
            }
        }
    } else {
        qDebug() << "Aucun résultat trouvé pour l'ID de commande:" << idc;
        QMessageBox::warning(this, "Aucun résultat", "Aucun résultat trouvé pour l'ID de commande spécifié.");
        delete model;
    }
}
void MainWindow::on_pushButton_2_clicked() {
    Commande Ctemp;
    QSqlQueryModel *model = Ctemp.trierParDateDesc();
    addToHistory("trier de la commande", 0);

    if (model && model->rowCount() > 0) {
        // Vider le QTableWidget avant d'ajouter les nouvelles données
        ui->tableWidget->setRowCount(0); // Supprimer toutes les lignes existantes

        // Remplir le QTableWidget avec les données du modèle
        for (int row = 0; row < model->rowCount(); ++row) {
            ui->tableWidget->insertRow(row); // Ajouter une nouvelle ligne
            for (int col = 0; col < model->columnCount(); ++col) {
                QString data = model->data(model->index(row, col)).toString();
                ui->tableWidget->setItem(row, col, new QTableWidgetItem(data));
            }
        }

        // Rafraîchir l'interface utilisateur pour s'assurer que les changements sont visibles
        ui->tableWidget->repaint();
        ui->tableWidget->update();

        qDebug() << "Tri effectué, " << model->rowCount() << " lignes affichées.";

    } else {
        QMessageBox::warning(this, "Erreur de tri", "Impossible de trier les données.");
        delete model;
    }
}

void MainWindow::on_pushButton_statistiques_clicked() {
    Commande Ctemp;
    QMap<QString, int> statistiques = Ctemp.statistiquesParModePaiement();

    // Calculer le total des commandes
    int totalCommandes = 0;
    for (auto it = statistiques.constBegin(); it != statistiques.constEnd(); ++it) {
        totalCommandes += it.value();
    }

    // Vider le layout avant d'ajouter un nouveau graphique
    QLayoutItem* item;
    while ((item = ui->verticalLayout_graphique->takeAt(0)) != nullptr) {
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
    ui->verticalLayout_graphique->addWidget(chartView); // Ajoutez un QVBoxLayout dans votre UI
}



void MainWindow::on_pb_pdf_clicked()
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

void MainWindow::on_pb_historique_clicked() {
    QString cheminFichier = "C:/Users/yomna/OneDrive/Documents/gestioncommande/gestioncommande.txt";
    QDesktopServices::openUrl(QUrl::fromLocalFile(cheminFichier));
    QMessageBox::information(this, "Historique", "Les actions ont été enregistrées dans l'historique.");
}


void MainWindow::envoyerSMS(const QString &destinataire, const QString &message)
{
    // SID et auth token de Twilio
    QString sid = "";
    QString authToken = "";

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



void MainWindow::on_sendSMS_clicked()
{
    QString destinataire = "+21620629612"; // Numéro de téléphone du destinataire
    QString message = ui->contenu->toPlainText(); // Récupérer le contenu du champ de texte

    envoyerSMS(destinataire, message);

}
bool MainWindow::isCommandeIdValid(const QString& commandeId) {
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM commande WHERE IDC = :commandeId");
    query.bindValue(":commandeId", commandeId);

    if (query.exec()) {
        if (query.next()) {
            return query.value(0).toInt() > 0; // Retourne true si l'ID existe
        }
    }
    return false; // Retourne false si une erreur survient ou si l'ID n'existe pas
}
void MainWindow::on_arduino_clicked() {
    QString commandeId = ui->commandeIdInput->text(); // Suppose que tu as une zone de texte pour saisir l'ID

    if (isCommandeIdValid(commandeId)) {
        if (arduino->estPortOuvert()) {
            if (arduino->envoyerCommande("ouvrir")) {
                QMessageBox::information(this, "Succès", "L'ID est valide. Le servomoteur tourne.");
            }
        } else {
            QMessageBox::critical(this, "Erreur", "Le port série n'est pas ouvert !");
        }
    } else {
        QMessageBox::warning(this, "Erreur", "L'ID saisi n'existe pas dans la table 'commande'.");
    }
}

