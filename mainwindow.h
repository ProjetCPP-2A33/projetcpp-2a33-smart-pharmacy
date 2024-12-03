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

private:
    Ui::MainWindow *ui;
    Client client;
    void afficherClients();
    void afficherTableHistorique();
    Arduino *arduino;
    QStandardItemModel *model;


};

#endif // MAINWINDOW_H
