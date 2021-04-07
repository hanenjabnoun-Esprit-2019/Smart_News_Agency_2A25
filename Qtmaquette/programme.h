#ifndef PROGRAMME_H
#define PROGRAMME_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QComboBox>
#include "src/SmtpMime"

class PROGRAMME
{public:
    PROGRAMME();
    PROGRAMME(int,int,QString,QString,QString);
    QString get_nomProg();
    QString get_typeProg();
    QString get_dateProg();
    int get_idprog();
    int get_idstudio();
    bool ajouter_prog();
    QSqlQueryModel * afficher_prog();
    bool supprimer_prog(int);
    bool modifier_prog();
    void comboboxFill(QComboBox *);
    int sendMail();
private:
    QString nomProg,typeProg,dateProg;
    int idprog,idstudio;
};

#endif // PROGRAMME_H
