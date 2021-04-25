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
    return date;
}

void Depenses::setDate(const QString &value)
{
    date = value;
}

QString Depenses::getMontant() const
{
    return montant;
}

void Depenses::setMontant(const QString &value)
{
    montant = value;
}

QString Depenses::getLibelle() const
{
    return libelle;
}

void Depenses::setLibelle(const QString &value)
{
    libelle = value;
}

int Depenses::getId_e() const
{
    return id_e;
}

void Depenses::setId_e(int value)
{
    id_e = value;
}

Depenses::Depenses()
{

}

Depenses::Depenses(int _0_, QString _1_, QString _2_, QString _3_, int _4_)
{
    this->id = _0_;
    this->date = _1_;
    this->montant = _2_;
    this->libelle = _3_;
    this->id_e = _4_;
}

bool Depenses::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO depenses (id, datee, montant, libelle, id_e) VALUES (?, ?, ?, ?, ?)");
    this->id = autoId();
    query.addBindValue(QString::number(autoId()));
    query.addBindValue(this->date);
    query.addBindValue(this->montant);
    query.addBindValue(this->libelle);
    query.addBindValue(QString::number(this->id_e));

    return query.exec();
}

bool Depenses::supprimer()
{
    QSqlQuery query;
    query.prepare("DELETE FROM depenses WHERE id = ?");
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

bool Depenses::modifier()
{
    QSqlQuery query;
    query.prepare("UPDATE depenses SET datee = ?, montant = ?, libelle = ?, id_e = ? WHERE id = ? ");
    query.addBindValue(this->date);
    query.addBindValue(this->montant);
    query.addBindValue(this->libelle);
    query.addBindValue(QString::number(this->id_e));
    query.addBindValue(QString::number(this->id));

    return query.exec();
}

QSqlQueryModel *Depenses::afficher()
{
    QSqlQuery query;
    query.exec("SELECT * FROM depenses");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID EMPLOYE"));

    return model;
}

QSqlQueryModel *Depenses::sort(QString __input__)
{
    QSqlQuery query;
    query.exec("SELECT * FROM depenses ORDER BY "+__input__+" ASC");

    QSqlQueryModel*model=new QSqlQueryModel();
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("DATE"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("MONTANT"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("LIBELLE"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ID EMPLOYE"));

    return model;
}

QSqlQueryModel *Depenses::search(QString __input__)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM depenses WHERE datee LIKE ? OR montant LIKE ? OR libelle LIKE ?");
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
    text.setText("Depense:: id:"+QString::number(this->id)+", libelle:"+this->libelle+", montant:"+this->montant+", date:"+this->date+", id_employe:"+QString::number(this->id_e));

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
    query.exec("SELECT id FROM depenses");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}

void Depenses::fillEmp(QComboBox *c)
{
    c->clear();
    QSqlQuery query;
    query.exec("SELECT id FROM employes");
    while(query.next()) {
        c->addItem(query.value(0).toString());
    }
}

int Depenses::autoId() {
    QSqlQuery query;
    query.exec("SELECT id FROM depenses ORDER BY id ASC");
    int x = 0;
    while (query.next()) {
        x = query.value(0).toInt();
    }
    x++;
    return x;
}

