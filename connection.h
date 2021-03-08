#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>


class Connection
{
    QSqlDatabase db;
public:
    Connection();
    bool Openconn();
    void closeconn();
};

#endif // CONNECTION_H
