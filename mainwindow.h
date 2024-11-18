#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "commande.h"
#include <Qstring>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_5_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_statistiques_clicked();
    void on_pb_pdf_clicked();
    void on_pb_historique_clicked();
    void envoyerSMS(const QString &destinataire, const QString &message);
    void on_sendSMS_clicked();

private:
    Ui::MainWindow *ui;
    Commande Ctemp;
   void afficherCommandes();
    void afficherHistorique();
    void addToHistory(const QString &action, int idc);
    // Ajoutez cette ligne dans la section des déclarations de votre classe MainWindow

};

#endif // MAINWINDOW_H
