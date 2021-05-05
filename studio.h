#ifndef STUDIO_H
#define STUDIO_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QComboBox>
class STUDIO
{
public:
    STUDIO();
    STUDIO(int,int,QString,QString);
    QString get_nomST();
    QString get_descriptionST();
    int get_numeroST();
    int get_idstudio();
    bool ajouter_studio();
    QSqlQueryModel * afficher_studio();
    bool supprimer_studio(int);
    bool modifier_studio();
    void comboboxFill(QComboBox *);
    QSqlQueryModel * afficher_idStudio();
    QSqlQueryModel *tri_studio(QString input);
private:
    QString nomST,descriptionST;
    int numeroST,idstudio;
};

#endif // STUDIO_H
