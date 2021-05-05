#ifndef MAINTENANCE1_H
#define MAINTENANCE1_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>


class Maintenance1
{

    QString  typep;
    int idm,idemp,idequip;
    QDate datem;
public:
    Maintenance1();
    Maintenance1(int,int,int,QString,QDate);


    int get_idm();
    int get_idemp();
    int get_idequip();
    QString get_typep();
    QDate get_datem();
    void setidm(int);
    void setidemp(int);
    void setidequip(int);
    void settypep(QString );
    void setdatem(QDate );

    bool ajouter_maintenance();
    QSqlQueryModel* afficher_maintenance();
    bool supprimer_maintenance(int);
    bool modifier_maintenance();

    QSqlQueryModel * afficherecherche(QString )
;

private:
};

#endif // MAINTENANCE1_H
