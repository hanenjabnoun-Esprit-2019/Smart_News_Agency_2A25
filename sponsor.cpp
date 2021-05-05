#include "sponsor.h"
#include "connection.h"
#include <QString>
#include "marketing.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
Sponsor::Sponsor(int id1,QString nom,int numero,QString budget,QString adresse)
{
    this->id_sp=id1;
    this->nom=nom;
    this->adresse=adresse;
    this->budget=budget;
    this->numero=numero;
}
bool Sponsor::ajouter_sponsor()
{
    QSqlQuery query;
    QString id1= QString::number(id_sp);
    query.prepare("INSERT INTO SPONSORS (ID_SP, NUMERO, NOM,ADRESSE,BUDGET) "
                        "VALUES (:id_sp, :numero, :nom, :adresse, :budget)");
    query.bindValue(":id_sp", id1);
    query.bindValue(":numero", numero);
    query.bindValue(":nom", nom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":budget", budget);

    return    query.exec();

}
QSqlQueryModel * Sponsor::afficher_idSP()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("SELECT ID_SP from SPONSORS");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_SP"));

    return model;
}
QSqlQueryModel * Sponsor::afficher_sponsor()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("select * from SPONSORS");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_SP"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("NUMERO "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("BUDGET"));

    return model;
}
bool Sponsor::supprimer_sponsor(int id1)
{
QSqlQuery query;
QString res= QString::number(id1);
query.prepare("Delete from SPONSORS where ID_SP = :id ");
query.bindValue(":id", res);
return    query.exec();
}
bool Sponsor::modifier_sponsor()
{
    QSqlQuery query;
    QString id1= QString::number(id_sp);
    query.prepare("UPDATE SPONSORS SET NUMERO=:numero, NOM=:nom,ADRESSE=:adresse,BUDGET=:budget WHERE ID_SP=:id_sp");
    query.bindValue(":id_sp", id1);
    query.bindValue(":numero", numero);
    query.bindValue(":nom", nom);
    query.bindValue(":adresse", adresse);
    query.bindValue(":budget", budget);


    return    query.exec();

}
QSqlQueryModel * Sponsor::Search_sponsor(QString input)
{
    QSqlQuery query;
    QSqlQueryModel *model = new QSqlQueryModel();

    query.prepare("SELECT * FROM SPONSORS WHERE ID_SP LIKE ? OR BUDGET LIKE ? OR NOM LIKE ?");
    query.addBindValue("%"+input+"%");
    query.addBindValue("%"+input+"%");
    query.addBindValue("%"+input+"%");

    if(query.exec())
    {
        model->setQuery(query);
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_SP"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("NUMERO"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("BUDGET"));


    }
    return model;
}

int Sponsor::sendMail() {
       SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

       smtp.setUser("best.news.agency@gmail.com");
       smtp.setPassword("achrafachraf");

       MimeMessage message;

       EmailAddress sender("best.news.agency@gmail.com", "BEST NEWS");
       message.setSender(&sender);

       EmailAddress to("achraf.zarroug@esprit.tn", "Admin");
       message.addRecipient(&to);

       message.setSubject("Sponsor ajoute ");

       MimeText text;

       QString res= QString::number(this->numero);
       text.setText("Nom: "+this->nom+", Numero: "+res+", Adresse: "+this->adresse+", Budget: "+this->budget);

       message.addPart(&text);

       if (!smtp.connectToHost()) {
           qDebug() << "Failed to connect to host!" << endl;
           return -1;
       }

       if (!smtp.login()) {
           qDebug() << "Failed to login!" << endl;
           return -2;
       }

       if (!smtp.sendMail(message)) {
           qDebug() << "Failed to send mail!" << endl;
           return -3;
       }

       smtp.quit();

       return 1;
}
