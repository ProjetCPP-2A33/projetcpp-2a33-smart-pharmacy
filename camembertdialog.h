#ifndef CAMEMBERTDIALOG_H
#define CAMEMBERTDIALOG_H

#include <QDialog>

class CamembertDialog : public QDialog
{
    Q_OBJECT
public:
    CamembertDialog(int hommes, int femmes, QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event) override;
private:
    int hommes;
    int femmes;
};

#endif // CAMEMBERTDIALOG_H
