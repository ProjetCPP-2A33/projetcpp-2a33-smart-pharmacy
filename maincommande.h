#ifndef MAINCOMMANDE_H
#define MAINCOMMANDE_H

#include <QMainWindow>
#include "arduinocommande.h"
#include "commande.h"
#include <Qstring>
#include <QSerialPort>
#include "arduinocommande.h"


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
    void on_arduino_clicked();


private:
    Ui::MainWindow *ui;
    Commande Ctemp;
   void afficherCommandes();
    void afficherHistorique();
    void addToHistory(const QString &action, int idc);
    bool isCommandeIdValid(const QString& commandeId);
    // Ajoutez cette ligne dans la section des déclarations de votre classe MainWindow
    QSerialPort *serialPort;
    Arduino *arduino;

};

#endif // MAINCOMMANDE_H
