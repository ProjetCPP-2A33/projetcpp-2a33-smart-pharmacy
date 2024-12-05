#include "Connection.h"
connection::connection()
{}



bool connection::createconnection()
{bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("source2a33");
    db.setUserName("yomna");//inserer nom de l'utilisateur
    db.setPassword("oracle");//inserer mot de passe de cet utilisateur

    if (db.open())
        test=true;





    return  test;
}
void connection::closeConnection(){db.close();}

