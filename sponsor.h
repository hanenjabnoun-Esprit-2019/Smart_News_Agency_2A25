#ifndef SPONSOR_H
#define SPONSOR_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>

class Sponsor
{

    QString nom,adresse,budget;
    int id_sp,numero;
public:
        //Constructeur
    Sponsor(){}
    Sponsor(int,QString,int,QString,QString);
        //getters
    QString getnom(){return nom;}
    QString getadresse(){return adresse;}
    int getid_sp(){return id_sp;}
    QString getbudget(){return budget;}
    int getnumero(){return numero;}
        //setters
    void setid_sp(int id1){this->id_sp=id1;}
    void setnom(QString n){nom =n;}
    void setnumero(int num){numero=num;}
    void setbudget(QString b){budget=b;}
    void setadresse(QString ad){adresse=ad;}
        //CRUD
    bool ajouter_sponsor();
    QSqlQueryModel *afficher_sponsor();
    bool supprimer_sponsor(int);
    bool modifier_sponsor();
    QSqlQueryModel *afficher_id();



};

#endif // SPONSOR_H
