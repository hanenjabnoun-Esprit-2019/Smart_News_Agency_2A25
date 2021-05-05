#include "revenues.h"
#include "src/SmtpMime"

int Revenues::getId() const
{
    return id2;
}

void Revenues::setId(int value)
{
    id2 = value;
}

QString Revenues::getDate() const
{
    return date_r;
}

void Revenues::setDate(const QString &value)
{
    date_r = value;
}

QString Revenues::getMontant() const
{
    return montant_r;
}

void Revenues::setMontant(const QString &value)
{
    montant_r = value;
}

QString Revenues::getLibelle() const
{
    return libelle_r;
}

void Revenues::setLibelle(const QString &value)
{
    libelle_r = value;
}

int Revenues::getId_e() const
{
    return id_e2;
}

void Revenues::setId_e(int value)
{
    id_e2 = value;
}

bool Revenues::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO REVENUES (ID_REVENUES, DATE_REVENUES, MONTANT_R, LIBELLE_R, ID_EM2) VALUES (?, ?, ?, ?, ?)");
    this->id2 = autoId();
    query.addBindValue(QString::number(autoId()));
    query.addBindValue(this->date_r);
    query.addBindValue(this->montant_r);
    query.addBindValue(this->libelle_r);
    query.addBindValue(QString::number(this->id_e2));

    return query.exec();
}

bool Revenues::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM REVENUES WHERE ID_REVENUES = ?");
    query.addBindValue(QString::number(this->id2));

    return query.exec();
}

bool Revenues::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE REVENUES SET DATE_REVENUES = ?, MONTANT_R = ?, LIBELLE_R = ?, ID_EM2 = ? WHERE ID_REVENUES = ? ");
    query.addBindValue(this->date_r);
    query.addBindValue(this->montant_r);
    query.addBindValue(this->libelle_r);
    query.addBindValue(QString::number(this->id_e2));
    query.addBindValue(QString::number(this->id2));

    return query.exec();
}
QSqlQueryModel *Revenues::afficher()
{
    QSqlQuery query;
    query.exec("SELECT * FROM REVENUES");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_REVENUES"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_REVENUES"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT_R"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE_R"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_EM2"));

    return model;
}

QSqlQueryModel *Revenues::sort(QString __input__)
{
    QSqlQuery query;
    query.exec("SELECT * FROM REVENUES ORDER BY "+__input__+" ASC");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_REVENUES"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_REVENUES"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT_R"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE_R"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_EM2"));

    return model;
}

QSqlQueryModel *Revenues::search(QString __input__)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM REVENUES WHERE DATE_REVENUES LIKE ? OR MONTANT_R LIKE ? OR LIBELLE_R LIKE ?");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.exec();

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_REVENUES"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_REVENUES"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT_R"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE_R"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_EM2"));

    return model;
}

void Revenues::sendMail()
{
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

    smtp.setUser("wiem.mahat@esprit.tn");
    smtp.setPassword("191JFT3780");

    MimeMessage message;

    EmailAddress sender("wiem.mahat@esprit.tn", "yosr");
    message.setSender(&sender);

    EmailAddress to("wiem.mahat@esprit.tn", "yosr");
    message.addRecipient(&to);

    message.setSubject(" Revenue ajouter ");

    MimeText text;
    text.setText("Revenue:: id:"+QString::number(this->id2)+", libelle:"+this->libelle_r+", montant:"+this->montant_r+", date:"+this->date_r+", id_employe:"+QString::number(this->id_e2));

    message.addPart(&text);

        if (!smtp.connectToHost()) {
            qDebug() << "Failed to connect to host!" << endl;
        }

        if (!smtp.login()) {
            qDebug() << "Failed to login!" << endl;
        }

        if (!smtp.sendMail(message)) {
            qDebug() << "Failed to send mail!" << endl;
        }

    smtp.quit();
}

void Revenues::fillComboBoxId(QComboBox *c)
{
    c->clear();
    QSqlQuery query;
    query.exec("SELECT ID_REVENUES FROM REVENUES");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}

void Revenues::fillEmp(QComboBox *c)
{
    c->clear();
    QSqlQuery query;
    query.exec("SELECT ID_EMPLOYE FROM EMPLOYE");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}
QSqlQueryModel * Revenues::afficher_idrevenue()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("SELECT ID_REVENUES from REVENUES");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_REVENUES"));

    return model;
}

int Revenues::autoId() {
    QSqlQuery query;
    query.exec("SELECT ID_REVENUES FROM REVENUES ORDER BY id ASC");
    int x = 0;
    while (query.next()) {
        x = query.value(0).toInt();
    }
    x++;
    return x;
}


Revenues::Revenues()
{

}

Revenues::Revenues(int _0_, QString _1_, QString _2_, QString _3_, int _4_)
{
    this->id2 = _0_;
    this->date_r = _1_;
    this->montant_r = _2_;
    this->libelle_r = _3_;
    this->id_e2 = _4_;
}
