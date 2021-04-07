#include "programme.h"
#include <QDebug>
PROGRAMME::PROGRAMME()
{
idprog=0;
idstudio=0;
nomProg="";
typeProg="";
dateProg="";
}
PROGRAMME::PROGRAMME(int idprog, int idstudio ,QString nomProg, QString typeProg ,QString dateProg)
{
  this->idprog=idprog;
    this->idstudio=idstudio;
  this->nomProg=nomProg;
  this->typeProg=typeProg;
    this->dateProg=dateProg;

}
QString PROGRAMME::get_nomProg(){return  nomProg;}
QString PROGRAMME::get_typeProg(){return typeProg;}
QString PROGRAMME::get_dateProg(){return dateProg;}

int PROGRAMME::get_idprog(){return  idprog;}
int PROGRAMME::get_idstudio(){return  idstudio;}


bool PROGRAMME::ajouter_prog()
{
QSqlQuery query;
QString idp= QString::number(idprog);
QString ids= QString::number(idstudio);
query.prepare("INSERT INTO PROGRAMME (ID_PROGRAMME, TYPE, NOM,DATEE, ID_STUDIO) "
                    "VALUES (:idprog, :typeProg, :nomProg, :dateProg, :idstudio)");
query.bindValue(":idprog", idp);
query.bindValue(":typeProg", typeProg);
query.bindValue(":nomProg", nomProg);
query.bindValue(":dateProg", dateProg);
query.bindValue(":idstudio", ids);


return    query.exec();
}

QSqlQueryModel * PROGRAMME::afficher_prog()
{QSqlQueryModel * model= new QSqlQueryModel();

model->setQuery("select * from PROGRAMME");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_PROGRAMME"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("TYPE"));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("NOM"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATEE"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_S"));


    return model;
}

bool PROGRAMME::supprimer_prog(int idd)
{
QSqlQuery query;
QString res= QString::number(idd);
query.prepare("Delete from PROGRAMME where ID_PROGRAMME = :id ");
query.bindValue(":id", res);
return    query.exec();
}

bool PROGRAMME::modifier_prog() {
    QSqlQuery query;
    QString idp= QString::number(idprog);
    QString ids= QString::number(idstudio);
    query.prepare("UPDATE PROGRAMME SET TYPE = :typeProg, NOM = :nomProg,DATEE = :dateProg, ID_STUDIO = :idstudio WHERE  ID_PROGRAMME = :idprog");
    query.bindValue(":idprog", idp);
    query.bindValue(":typeProg", typeProg);
    query.bindValue(":nomProg", nomProg);
    query.bindValue(":dateProg", dateProg);
    query.bindValue(":idstudio", ids);


    return    query.exec();
}

void PROGRAMME::comboboxFill(QComboBox *c) {
    c->clear();
    QSqlQuery query;
    query.exec("SELECT ID_STUDIO FROM STUDIO");
    while(query.next()) {
       c->addItem(query.value(0).toString());
    }
}
int PROGRAMME::sendMail() {
       SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

       smtp.setUser("best.news.agency@gmail.com");
       smtp.setPassword("achrafachraf");

       MimeMessage message;

       EmailAddress sender("best.news.agency@gmail.com", "BEST NEWS");
       message.setSender(&sender);

       EmailAddress to("abdessalem.drine@esprit.tn", "Admin");
       message.addRecipient(&to);

       message.setSubject("Programme ajoute ");

       MimeText text;

       QString res= QString::number(this->idprog);
       QString res1= QString::number(this->idstudio);

       text.setText("Id_prog: "+res+", Id_studio: "+res1+", Nom: "+this->nomProg+", Type: "+this->typeProg);

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
