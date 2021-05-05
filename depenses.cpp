#include "depenses.h"
#include "src/SmtpMime"

int Depenses::getId() const
{
    return id;
}

void Depenses::setId(int value)
{
    id = value;
}

QString Depenses::getDate() const
{
    return date_d;
}

void Depenses::setDate(const QString &value)
{
    date_d = value;
}

QString Depenses::getMontant() const
{
    return montant_d;
}

void Depenses::setMontant(const QString &value)
{
    montant_d = value;
}

QString Depenses::getLibelle() const
{
    return libelle_d;
}

void Depenses::setLibelle(const QString &value)
{
    libelle_d = value;
}

int Depenses::getId_e() const
{
    return id_e1;
}

void Depenses::setId_e(int value)
{
    id_e1 = value;
}

Depenses::Depenses()
{

}

Depenses::Depenses(int _0_, QString _1_, QString _2_, QString _3_, int _4_)
{
    this->id = _0_;
    this->date_d = _1_;
    this->montant_d = _2_;
    this->libelle_d = _3_;
    this->id_e1 = _4_;
}

bool Depenses::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO DEPENSES (ID_DEPENSE, DATE_DEPENSE, MONTANT_DEPENSE, LIBELLE_D, ID_EM1) VALUES (?, ?, ?, ?, ?)");
    this->id = autoId();
    query.addBindValue(QString::number(autoId()));
    query.addBindValue(this->date_d);
    query.addBindValue(this->montant_d);
    query.addBindValue(this->libelle_d);
    query.addBindValue(QString::number(this->id_e1));

    return query.exec();
}

bool Depenses::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM DEPENSES WHERE ID_DEPENSE = ?");
    query.addBindValue(QString::number(this->id));

    return query.exec();
}
QSqlQueryModel * Depenses::afficher_iddepense()
{QSqlQueryModel * model= new QSqlQueryModel();
model->setQuery("SELECT ID_DEPENSE from DEPENSES");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_DEPENSE"));

    return model;
}
bool Depenses::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE ID_DEPENSE SET DATE_DEPENSE = ?, MONTANT_DEPENSE = ?, LIBELLE_D = ?, ID_EM1 = ? WHERE ID_DEPENSE = ? ");
    query.addBindValue(this->date_d);
    query.addBindValue(this->montant_d);
    query.addBindValue(this->libelle_d);
    query.addBindValue(QString::number(this->id_e1));
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

QSqlQueryModel *Depenses::afficher()
{
    QSqlQuery query;
    query.exec("SELECT * FROM DEPENSE");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_DEPENSE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_DEPENSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT_DEPENSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE_D"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_EM1"));

    return model;
}

QSqlQueryModel *Depenses::sort(QString __input__)
{
    QSqlQuery query;
    query.exec("SELECT * FROM DEPENSE ORDER BY "+__input__+" ASC");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_DEPENSE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_DEPENSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT_DEPENSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE_D"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_EM1"));

    return model;
}

QSqlQueryModel *Depenses::search(QString __input__)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM DEPENSE WHERE DATE_DEPENSE LIKE ? OR MONTANT_DEPENSE LIKE ? OR LIBELLE_D LIKE ?");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.addBindValue("%"+__input__+"%");
    query.exec();

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_DEPENSE"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE_DEPENSE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT_DEPENSE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE_D"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID_EM1"));

    return model;
}

void Depenses::sendMail()
{
    SmtpClient smtp("smtp.gmail.com", 465, SmtpClient::SslConnection);

    smtp.setUser("wiem.mahat@esprit.tn");
    smtp.setPassword("191JFT3780");

    MimeMessage message;

    EmailAddress sender("wiem.mahat@esprit.tn", "yosr");
    message.setSender(&sender);

    EmailAddress to("wiem.mahat@esprit.tn", "yosr");
    message.addRecipient(&to);

    message.setSubject(" Depense ajouter ");

    MimeText text;
    text.setText("Depense:: id:"+QString::number(this->id)+", libelle:"+this->libelle_d+", montant:"+this->montant_d+", date:"+this->date_d+", id_employe:"+QString::number(this->id_e1));

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

void Depenses::fillComboBoxId(QComboBox *c)
{
    c->clear();
    QSqlQuery query;
    query.exec("SELECT ID_DEPENSE FROM DEPENSES");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}

void Depenses::fillEmp(QComboBox *c)
{
    c->clear();
    QSqlQuery query;
    query.exec("SELECT ID_EMPLOYE FROM EMPLOYE");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}

int Depenses::autoId() {
    QSqlQuery query;
    query.exec("SELECT ID_DEPENSE FROM DEPENSES ORDER BY id ASC");
    int x = 0;
    while (query.next()) {
        x = query.value(0).toInt();
    }
    x++;
    return x;
}
