#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>

class Employe
{
    int id_employe,id_departement;
    QString nom_employe,prenom_employe,salaire_employe,type_employe;
public:
        //Constructeur
    Employe();
    Employe(int,int,QString,QString,QString,QString);
        //getters
    int getid_employe(){return id_employe;}
    int getid_departement(){return id_departement;}
    QString getnom_employe(){return nom_employe;}
    QString getprenom_employe(){return prenom_employe;}

    QString getsalaire_employe(){return salaire_employe;}

    QString gettype_employe(){return type_employe;}

        //setters
    void setid_employe(int id1){this->id_employe=id1;}
    void setid_departement(int id2){id_departement =id2;}
    void setnom_employe(QString nom){nom_employe=nom;}
    void setprenom_employe(QString prenom){prenom_employe=prenom;}
    void settype_employe(QString type){type_employe=type;}

  QSqlQueryModel* afficher_idemploye();
};

#endif // EMPLOYE_H
