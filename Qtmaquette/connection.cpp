
#include "connection.h"
#include "QSqlDatabase"
connection::connection()
{

}
bool connection::openconnection(){
    bool test=false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("projet_2a");
    db.setUserName("tyty");
    db.setPassword("tyty");

    if(db.open())
        test=true;
    return test;




}
