#include "studio.h"
#include "connection.h"
#include <QString>
#include "marketing.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
STUDIO::STUDIO()
{
    numeroST=0;
    idstudio=0;
    descriptionST="";
    nomST="";
}
STUDIO::STUDIO(int numeroST, int idstudio ,QString descriptionST, QString nomST )
{
  this->idstudio=idstudio;
  this->numeroST=numeroST;
  this->descriptionST=descriptionST;
    this->nomST=nomST;

}
QString STUDIO::get_nomST(){return  nomST;}
QString STUDIO::get_descriptionST(){return descriptionST;}

int STUDIO::get_numeroST(){return  numeroST;}
int STUDIO::get_idstudio(){return  idstudio;}


bool STUDIO::ajouter_studio()
{
QSqlQuery query;
QString idp= QString::number(numeroST);
QString ids= QString::number(idstudio);
query.prepare("INSERT INTO STUDIO (ID_STUDIO, DESCRIPTIONST, NUMEROST,NOMST ) "
                    "VALUES (:idstudio, :descriptionST, :numeroST, :nomST)");
query.bindValue(":descriptionST", descriptionST);
query.bindValue(":nomST", nomST);
query.bindValue(":numeroST", numeroST);
query.bindValue(":idstudio", idstudio);


return    query.exec();
}

QSqlQueryModel * STUDIO::afficher_studio()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from STUDIO");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_STUDIO"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("DESCRIPTIONST"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUMEROST"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOMST"));


    return model;
}

bool STUDIO::supprimer_studio(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from STUDIO where ID_STUDIO = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool STUDIO::modifier_studio() {
    QSqlQuery query;
    QString idp= QString::number(numeroST);
    QString ids= QString::number(idstudio);
    query.prepare("UPDATE STUDIO SET DESCRIPTIONST = :descriptionST,"
                  " NUMEROST = :numeroST,NOMST = :nomST"
                  " WHERE ID_STUDIO = :idstudio");
    query.bindValue(":descriptionST", descriptionST);
    query.bindValue(":nomST", nomST);
    query.bindValue(":numeroST", numeroST);
    query.bindValue(":idstudio", idstudio);


    return    query.exec();
}
QSqlQueryModel * STUDIO::tri_studio(QString input)
{
    QSqlQuery query;
    QSqlQueryModel *model = new QSqlQueryModel();

    query.prepare("SELECT * FROM STUDIO ORDER BY "+input+" ASC"); //DESC

    if(query.exec())
    {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_STUDIO"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("DESCRIPTIONST"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUMEROST"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("NOMST"));

    }
    return model;
}

QSqlQueryModel * STUDIO::afficher_idStudio()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("SELECT ID_STUDIO from STUDIO");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_STUDIO"));

    return model;
}
