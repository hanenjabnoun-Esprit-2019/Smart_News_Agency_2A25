#include "sponsor.h"
#include "publicite.h"
#include "connection.h"
#include <QString>
#include "marketing.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
Publicite::Publicite(int id2,int id1,int num,QString ty,QString des)
{
    this->id_sp=id1;
    this->id_pub=id2;
    this->type=ty;
    this->description=des;
    this->numero=num;
}
bool Publicite::ajouter_publicite()
{
    QSqlQuery query;
    QString id1= QString::number(id_sp);
    QString id2= QString::number(id_pub);

    query.prepare("INSERT INTO PUBLICITE (ID_PUB, ID_SPONSOR, NUMERO, TYPE, DESCRIPTION) "
                        "VALUES (:id_pub, :id_sp, :numero, :type, :description)");
    query.bindValue(":id_pub", id2);
    query.bindValue(":id_sp", id1);
    query.bindValue(":numero", numero);
    query.bindValue(":type", type);
    query.bindValue(":description", description);


    return    query.exec();

}
QSqlQueryModel * Publicite::afficher_idPub()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("SELECT ID_PUB from PUBLICITE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_PUB"));

    return model;
}
QSqlQueryModel * Publicite::afficher_publicite()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from PUBLICITE");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_PUB"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("ID_SPONSOR "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NUMERO"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("DESCRIPTION"));

    return model;
}
bool Publicite::supprimer_publicite(int id2)
{
QSqlQuery query;
QString res= QString::number(id2);
query.prepare("Delete from PUBLICITE where ID_PUB = :id ");
query.bindValue(":id", res);
return    query.exec();

}
bool Publicite::modifier_publicite()
{
    QSqlQuery query;

    QString id2= QString::number(id_pub);
    query.prepare("UPDATE PUBLICITE SET ID_SPONSOR=:id_sp, NUMERO=:numero,TYPE=:type,DESCRIPTION=:description WHERE ID_PUB=:id_pub");
    query.bindValue(":id_pub", id2);
    query.bindValue(":id_sp", id_sp);
    query.bindValue(":numero", numero);
    query.bindValue(":type", type);
    query.bindValue(":description", description);


    return    query.exec();

}
