#ifndef MAINTENANCE1_H
#define MAINTENANCE1_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class Maintenance1
{
    QString  typep,datem;
    int idm,idemp,idequip;
public:
    Maintenance1();
    Maintenance1(int,int,int,QString,QString);


    int get_idm();
    int get_idemp();
    int get_idequip();
    QString get_typep();
    QString get_datem();
    void setidm(int);
    void setidemp(int);
    void setidequip(int);
    void settypep(QString );
    void setdatem(QString );

    bool ajouter_maintenance();
    QSqlQueryModel* afficher_maintenance();
    bool supprimer_maintenance(int);
    bool modifier_maintenance();
;

private:

};


#endif // MAINTENANCE1_H
