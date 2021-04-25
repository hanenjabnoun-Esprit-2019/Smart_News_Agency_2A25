#ifndef DEPENSES_H
#define DEPENSES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QComboBox>

class Depenses
{
private:
    int id;
    QString date;
    QString montant;
    QString libelle;
    int id_e;
public:
    Depenses();
    Depenses(int, QString, QString, QString, int);

    int getId() const;
    void setId(int value);
    QString getDate() const;
    void setDate(const QString &value);
    QString getMontant() const;
    void setMontant(const QString &value);
    QString getLibelle() const;
    void setLibelle(const QString &value);
    int getId_e() const;
    void setId_e(int value);

    bool ajouter();
    bool supprimer();
    bool modifier();
    QSqlQueryModel* afficher();
    QSqlQueryModel* sort(QString);
    QSqlQueryModel* search(QString);

    void sendMail();
    void fillComboBoxId(QComboBox*);
    void fillEmp(QComboBox*);
    int autoId();
};

#endif // DEPENSES_H
