#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Equipement
{
    QString  type,etat,marque;
    int id,nombre,prix;
public:
    Equipement();
    Equipement(int,QString,int,int,QString,QString);


    int get_id();
    QString get_type();
    int get_nombre();
    int get_prix();
    QString get_etat();
    QString get_marque();
    void setid(int);
    void settype(QString );
    void setnombre(int);
    void setprix(int );
    void setetat(QString );
    void setmarque(QString );
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier_equipement();
    QSqlQueryModel* trier();
    QSqlQueryModel* filtrer();
;

private:

};



#endif // EQUIPEMENT_H
