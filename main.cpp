#include "mainwindow.h"
#include "connection.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    connection c;
    bool test=c.createconnection();
    MainWindow w;
    if (test)
    {
        w.show();
        QMessageBox::information(nullptr,QObject::tr("database is open "),QObject::tr("connectionsuccessful.\n" "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open "),QObject::tr("connection failed.\n " "Click Cancel to exit ."),QMessageBox::Cancel);


    w.show();

    return a.exec();
}
