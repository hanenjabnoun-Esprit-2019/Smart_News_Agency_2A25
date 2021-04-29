#include "revenues.h"
#include "src/SmtpMime"

int Revenues::getId() const
{
    return id;
}

void Revenues::setId(int value)
{
    id = value;
}

QString Revenues::getDate() const
{
    return date;
}

void Revenues::setDate(const QString &value)
{
    date = value;
}

QString Revenues::getMontant() const
{
    return montant;
}

void Revenues::setMontant(const QString &value)
{
    montant = value;
}

QString Revenues::getLibelle() const
{
    return libelle;
}

void Revenues::setLibelle(const QString &value)
{
    libelle = value;
}

int Revenues::getId_e() const
{
    return id_e;
}

void Revenues::setId_e(int value)
{
    id_e = value;
}

bool Revenues::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO revenues (id, datee, montant, libelle, id_e) VALUES (?, ?, ?, ?, ?)");
    this->id = autoId();
    query.addBindValue(QString::number(autoId()));
    query.addBindValue(this->date);
    query.addBindValue(this->montant);
    query.addBindValue(this->libelle);
    query.addBindValue(QString::number(this->id_e));

    return query.exec();
}

bool Revenues::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM revenues WHERE id = ?");
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

bool Revenues::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE revenues SET datee = ?, montant = ?, libelle = ?, id_e = ? WHERE id = ? ");
    query.addBindValue(this->date);
    query.addBindValue(this->montant);
    query.addBindValue(this->libelle);
    query.addBindValue(QString::number(this->id_e));
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

QSqlQueryModel *Revenues::afficher()
{
    QSqlQuery query;
    query.exec("SELECT * FROM revenues");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID EMPLOYE"));

    return model;
}

QSqlQueryModel *Revenues::sort(QString __input__)
{
    QSqlQuery query;
    query.exec("SELECT * FROM revenues ORDER BY "+__input__+" ASC");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID EMPLOYE"));

    return model;
}

QSqlQueryModel *Revenues::search(QString __input__)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM revenues WHERE datee LIKE ? OR montant LIKE ? OR libelle LIKE ?");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.exec();

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID EMPLOYE"));

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
    text.setText("Revenue:: id:"+QString::number(this->id)+", libelle:"+this->libelle+", montant:"+this->montant+", date:"+this->date+", id_employe:"+QString::number(this->id_e));

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
    query.exec("SELECT id FROM revenues");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}

void Revenues::fillEmp(QComboBox *c)
{
    c->clear();
    QSqlQuery query;
    query.exec("SELECT id FROM employes");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}

int Revenues::autoId() {
    QSqlQuery query;
    query.exec("SELECT id FROM Revenues ORDER BY id ASC");
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
    this->id = _0_;
    this->date = _1_;
    this->montant = _2_;
    this->libelle = _3_;
    this->id_e = _4_;
}
