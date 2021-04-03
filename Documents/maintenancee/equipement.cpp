#include "equipement.h"
#include<QSqlQuery>
#include<QDebug>
#include <QSqlQueryModel>
#include <QObject>
Equipement::Equipement()
{
    id=0;
    type="";
    nombre=0;
    prix=0;
    etat="";
    marque="";
}
Equipement::Equipement(int id,QString type,int nombre,int prix,QString etat,QString marque)
{this->id=id;this->type=type;this->nombre=nombre;this->prix=prix;this->etat=etat;this->marque=marque;}
void Equipement::setid(int id){this->id=id;}
void Equipement::settype(QString type){this->type=type;}
void Equipement::setnombre(int nombre){this->nombre=nombre;}
void Equipement::setprix(int prix){this->prix=prix;}
void Equipement::setetat(QString etat){this->etat=etat;}
void Equipement::setmarque(QString marque){this->marque=marque;}


int Equipement:: get_id(){return id;}
QString Equipement:: get_type(){return type;}
int Equipement:: get_nombre(){return nombre;}
int Equipement:: get_prix(){return prix;}
QString Equipement:: get_etat(){return etat;}
QString Equipement:: get_marque(){return marque;}

bool Equipement::ajouter()
{

    QSqlQuery query;
    QString id_string= QString::number(id);
    QString nombre_string= QString::number(nombre);
    QString prix_string= QString::number(prix);
    query.prepare("INSERT INTO EQUIPEMENT (id, type, nombre, prix, etat, marque) "
                  "VALUES (:id, :type, :nombre, :prix, :etat, :marque)");
    query.bindValue(":id", id_string);
    query.bindValue(":type", type);
    query.bindValue(":nombre", nombre_string);
    query.bindValue(":prix", prix_string);
    query.bindValue(":etat", etat);
    query.bindValue(":marque", marque);
    return query.exec();



}
bool Equipement::supprimer(int id)
{


        QSqlQuery query;

        query.prepare("Delete from EQUIPEMENT where id=:id");
        query.bindValue(":id", id);

        return query.exec();

}



QSqlQueryModel* Equipement::afficher()

{
    QSqlQueryModel* model=new QSqlQueryModel();

       model->setQuery("SELECT * FROM equipement");
       model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nombre"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("Etat"));
       model->setHeaderData(5, Qt::Horizontal, QObject::tr("Marque"));




    return model;
}
bool Equipement::modifier_equipement()
{
    QSqlQuery query;
    QString id1= QString::number(id);
    query.prepare("UPDATE EQUIPEMENT SET  TYPE=:type, NOMBRE=:nombre, PRIX=:prix, ETAT=:etat, MARQUE=:marque WHERE ID=:id");

    query.bindValue(":id", id1);
    query.bindValue(":type", type);
    query.bindValue(":nombre", nombre);
    query.bindValue(":prix", prix);
    query.bindValue(":etat", etat);
    query.bindValue(":marque", marque);


    return    query.exec();

}


QSqlQueryModel* Equipement:: trier()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from EQUIPEMENT order by PRIX ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMBRE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRIX"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ETAT"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("MARQUE"));


    return model;
}
QSqlQueryModel* Equipement:: filtrer()
{

    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("select * from EQUIPEMENT order by TYPE ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOMBRE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("PRIX"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("ETAT"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("MARQUE"));


    return model;
}



