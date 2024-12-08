#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Client.h"
#include <QList>
#include <QTableWidgetItem>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql>
#include <QStandardItemModel>
#include "arduino.h"
#include "commande.h"
#include "fournisseur.h"
#include "produit.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_pushButton_ajouter_clicked();
    void on_pushButton_supprimer_clicked();
    void on_pushButton_modifier_clicked();
    void on_pushButton_trier_clicked();
    void on_pushButton_rechercher_clicked();
    void on_pushButton_pdf_clicked();
    void on_pushButton_stat_clicked();
    void on_pushButton_recherche_clicked();
    void on_pushButton_AddHistorique_clicked();
    void afficherTopClients();
    void handleIdReceived(const QString &id);
    QString chercherEtatDansBD(const QString &id);
    void on_pushButton_12_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_10_clicked();
    void on_pushButton_statistiques_2_clicked();
    void on_pb_pdf_2_clicked();
    void on_pb_historique_2_clicked();
    void envoyerSMS(const QString &destinataire, const QString &message);
    void on_sendSMS_2_clicked();
     void on_arduino_2_clicked();



     void on_inserer_3_clicked();

     void on_pushButton_ajouter_4_clicked();

     void on_pushButton_modifier_4_clicked();

     void on_pushButton_rechercher_4_clicked();

     void on_pushButton_supprimer_4_clicked();

     void on_pushButton_15_clicked();

     void on_pushButton_trier_4_clicked();

     void on_pushButton_4_clicked();

     void on_tableWidget_4_itemClicked(QTableWidgetItem *item);
     void stat_fournisseur();
     void afficherFournisseur();

     void on_menu_client_clicked();

     void on_menu_commande_clicked();

     void on_menu_produit_clicked();

     void on_menu_fournisseur_clicked();

     void on_gestion_menu_clicked();

     void on_addbutton_clicked();

     void on_modifer_produit_clicked();

     void on_pushButton_produit_clicked();

     void on_pushButton_pdf_produit_clicked();

     void on_pushButton_stat_produits_clicked();

     void on_pushButton_produits_clicked();

     void on_pushButton_recherche_produit_clicked();

     void on_send_clicked();
     void afficherProduitsDemandesParGenre();
    void update_label();

 private:
    Ui::MainWindow *ui;
    Client client;
    fournisseur ftmp;
    Commande Ctemp;
     Produit Ptmp;
     QByteArray data;
     Arduino a ;
    void afficherClients();
    void afficherTableHistorique();
    void afficherCommandes();
    void afficherHistorique();
    bool isCommandeIdValid(const QString& commandeId);
    void addToHistory(const QString &action, int idc);
    Arduino *arduino;
    QStandardItemModel *model;


};

#endif // MAINWINDOW_H
