#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "produit.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addbutton_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_stat_clicked();

    void on_comboBox_tri_activated(int index);

    void on_pushButton_recherche_clicked();

    void on_pushButton_pdf_clicked();

    void on_pushButton_clicked();

    void on_send_clicked();


    void on_showStatsForMen_clicked();

    void on_showStatsForWomen_clicked();
    void showPieChart(const QString &genre, QLayout *layout);

private:
    Ui::MainWindow *ui;

    Produit Ptmp;
};

#endif // MAINWINDOW_H
