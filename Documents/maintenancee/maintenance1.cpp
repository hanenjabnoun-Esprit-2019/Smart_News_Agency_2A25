#include "maintenance1.h"
#include<QSqlQuery>
#include<QDebug>
#include <QSqlQueryModel>
#include <QObject>

Maintenance1::Maintenance1()
{

    idm=0;
    idemp=0;
    idequip=0;
    typep="";
    datem="";
}
Maintenance1::Maintenance1(int idm,int idemp,int idequip,QString typep,QString datem)
{this->idm=idm;this->idemp=idemp;this->idequip=idequip;this->typep=typep;this->datem=datem;}
void Maintenance1::setidm(int idm){this->idm=idm;}
void Maintenance1::setidemp(int idemp){this->idemp=idemp;}
void Maintenance1::setidequip(int idequip){this->idequip=idequip;}
void Maintenance1::settypep(QString typep){this->typep=typep;}
void Maintenance1::setdatem(QString datem){this->datem=datem;}



int Maintenance1:: get_idm(){return idm;}
int Maintenance1:: get_idemp(){return idemp;}
int Maintenance1:: get_idequip(){return idequip;}
QString Maintenance1:: get_typep(){return typep;}
QString Maintenance1:: get_datem(){return datem;}

bool Maintenance1::ajouter_maintenance()
{

    QSqlQuery query;
    QString idm_string= QString::number(idm);
   QString idemp_string= QString::number(idemp);
   QString idequip_string= QString::number(idequip);
    query.prepare("INSERT INTO MAINTENANCE (idm, idemp, idequip, typep, datem) "
                  "VALUES (:idm, :idemp, :idequip, :typep, :datem)");
    query.bindValue(":idm", idm_string);
    query.bindValue(":idemp", idemp_string);
    query.bindValue(":idequip", idequip_string);
    query.bindValue(":typep", typep);
    query.bindValue(":datem", datem);

    return query.exec();



}

QSqlQueryModel* Maintenance1::afficher_maintenance()

{
    QSqlQueryModel* model=new QSqlQueryModel();

       model->setQuery("SELECT * FROM Maintenance");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID maintenance"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID employé"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("ID équipement"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type du panne"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date de la maintenance"));





    return model;
}
bool Maintenance1::supprimer_maintenance(int idm)
{


        QSqlQuery query;

        query.prepare("Delete from MAINTENANCE where idm=:idm");
        query.bindValue(":idm", idm);

        return query.exec();

}


bool Maintenance1::modifier_maintenance()
{
    QSqlQuery query;
    QString id2= QString::number(idm);
    query.prepare("UPDATE MAINTENANCE SET  IDEMP=:idemp, IDEQUIP=:idequip, TYPEP=:typep, DATEM=:datem WHERE IDM=:idm");

    query.bindValue(":idm", id2);
    query.bindValue(":idemp", idemp);
    query.bindValue(":idequip", idequip);
    query.bindValue(":typep", typep);
    query.bindValue(":datem", datem);



    return    query.exec();

}
