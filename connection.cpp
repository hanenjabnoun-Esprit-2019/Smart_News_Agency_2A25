#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("bd-wiem");//inserer le nom de la source de données ODBC
db.setUserName("wiem");//inserer nom de l'utilisateur
db.setPassword("wiem");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
