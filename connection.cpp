#include "connection.h"
#include <QSqlDatabase>
Connection::Connection()
{

}
bool Connection::Openconn()
{
    db = QSqlDatabase::addDatabase("QODBC");
        bool test=false;
    db.setDatabaseName("Projet_2A");
    db.setUserName("achraf");
    db.setPassword("achraf");
        if(db.open())
            test=true;
        return test;
}
void Connection::closeconn()
{db.close();}
