#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QDebug>


class Connection
{
    QSqlDatabase db;
public:
    Connection();
    bool createconnect();
    void closeConnection();


};

#endif // CONNECTION_H

