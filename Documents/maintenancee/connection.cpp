#include "connection.h"
#include <QSqlDatabase>
//testGit
connection::connection()
{

}


bool connection::createconnect()
{
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
bool test=false;
db.setDatabaseName("Projet_2A");//inserer le nom de la source de données ODBC
db.setUserName("mariem");//inserer nom de l'utilisateur
db.setPassword("26380878");//inserer mot de passe de cet utilisateur

if (db.open())
test= true;
return test;

}
void connection::fermerconnect()
{   db.close();}
