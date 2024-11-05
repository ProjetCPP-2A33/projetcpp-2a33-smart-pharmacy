#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Client.h"
#include <QSpinBox>

QT_BEGIN_NAMESPACE
namespace Ui{
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
    void on_pushButton_rechercher_clicked();
private:
    Ui::MainWindow *ui;
    Client client;
    QSpinBox *spinBox_ID;
    void afficherClient();

};

#endif // MAINWINDOW_H
