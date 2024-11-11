#include "mainwindow.h"
#include "ui_mainwindow.h"
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





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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
    Commande commande;
    QSqlQueryModel* model = commande.afficher();

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
        afficherCommandes();  // Rafraîchir l'affichage après l'ajout réussi
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


