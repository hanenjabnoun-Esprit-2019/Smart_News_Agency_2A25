#include "employe.h"
#include "connection.h"
#include <QString>
#include "marketing.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
Employe::Employe()
{
    id_employe=0;
    id_departement=0;
    nom_employe="";
    prenom_employe="";
    salaire_employe="";
    type_employe="";

}
Employe::Employe(int id_emp,int id_dep,QString nom_emp,QString prenom_emp,QString salaire_emp,QString type_emp)
{
    this->id_employe=id_emp;
    this->id_departement=id_dep;
    this->nom_employe=nom_emp;
      this->prenom_employe=prenom_emp;
    this->salaire_employe=salaire_emp;
    this->type_employe=type_emp;

}
QSqlQueryModel * Employe::afficher_idemploye()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("SELECT ID_EMPLOYE from EMPLOYE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_EMPLOYE"));

    return model;
}
