#ifndef PUBLICITE_H
#define PUBLICITE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>
class Publicite
{
    QString description,type;
    int id_sp,id_pub,numero;
public:
        //Constructeur
    Publicite(){}
    Publicite(int,int,int,QString,QString);
        //getters
    QString getdescription(){return description;}
    QString gettype(){return type;}
    int getid_sp(){return id_sp;}
    int getid_pub(){return id_pub;}
    int getnumero(){return numero;}
        //setters
    void setid_sp(int id1){this->id_sp=id1;}
    void setid_pub(int id2){id_pub =id2;}
    void setnumero(int num){numero=num;}
    void setdescription(QString des){description=des;}
    void settype(QString ty){type=ty;}
        //CRUD
    bool ajouter_publicite();
    QSqlQueryModel *afficher_publicite();
    bool supprimer_publicite(int);
    bool modifier_publicite();
    QSqlQueryModel *afficher_idPub();
    QSqlQueryModel *rechercher_id(int);
    QSqlQueryModel *Search_pub(QString input);
    QSqlQueryModel *tri_pub(QString input);


};

#endif // PUBLICITE_H
