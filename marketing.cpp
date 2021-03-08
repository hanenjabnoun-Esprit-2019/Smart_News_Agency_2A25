#include "marketing.h"
#include "sponsor.h"
#include "publicite.h"
#include "connection.h"
#include "ui_marketing.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QDialog>
#include <QDebug>
#include <QComboBox>
#include <QRadioButton>
Marketing::Marketing(QWidget *parent) :

    QDialog(parent),
    ui(new Ui::Marketing)

{

    ui->setupUi(this);
    ui->comboBox_1->setModel(tmpsponsor.afficher_id());

    QIntValidator *idsp= new QIntValidator(1,10000);
    QIntValidator *num= new QIntValidator(1,100);
    ui->lineEdit_num->setValidator(num);
    ui->lineEdit_idsp->setValidator(idsp);

    ui->lineEdit_idsp->setValidator(new QIntValidator(0,999999,this));
}

Marketing::~Marketing()
{
    delete ui;
}

void Marketing::on_pushButton_clicked()
{

}

void Marketing::on_pushButton_ajoutSP_clicked()
{

    int id1 = ui->lineEdit_idsp->text().toInt();
    int numero = ui->lineEdit_num->text().toInt();
    QString nom= ui->lineEdit_nom->text();
    QString budget= ui->lineEdit_budget->text();
    QString adresse= ui->lineEdit_adresse->text();
  Sponsor S(id1, nom, numero, budget, adresse);
  bool test=S.ajouter_sponsor();
    if (test)
            {
            QMessageBox::information(nullptr, QObject::tr("Ajouter un Sponsor"),
                              QObject::tr("Sponsor ajouté.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }
    else
            {
            QMessageBox::critical(nullptr, QObject::tr("Ajouter un Sponsor"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }
    ui->comboBox_1->setModel(tmpsponsor.afficher_id()); //refresh ComboBox

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}                                  //refresh
}

void Marketing::on_pushButton_affichersp_clicked()
{
    ui->tableView->setModel(tmpsponsor.afficher_sponsor());


}

void Marketing::on_pushButton_supprimer_clicked()
{
    int id = ui->lineEdit_supp->text().toInt();
    bool test=tmpsponsor.supprimer_sponsor(id);
    if(test)
    {ui->tableView->setModel(tmpsponsor.afficher_sponsor());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Sponsor"),
                    QObject::tr("Sponsor supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Sponsor"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}

}



void Marketing::on_pushButton_Pb_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(0);      //SCROLL

}

void Marketing::on_pushButton_SP_2_clicked()
{
    ui->stackedWidget_2->setCurrentIndex(1);       //SCROLL

}

void Marketing::on_pushButton_ajoutPub_clicked()
{
    int id1 = ui->lineEdit_idpub->text().toInt();
    int id2 = ui->comboBox_1->currentText().toInt();
    int numero = ui->lineEdit_num_2->text().toInt();
    QString type;/*= ui->lineEdit_type->text();*/
    if(ui->radioButton_logo->isChecked()){type="logo";}
    else if(ui->radioButton_video->isChecked()){type="video";}
    else if(ui->radioButton_sript->isChecked()){type="script";}
    QString des= ui->lineEdit_description->text();
  Publicite P(id1, id2, numero, type, des);
  bool test=P.ajouter_publicite();
    if (test)
            {
            QMessageBox::information(nullptr, QObject::tr("Ajouter une Publicitée"),
                              QObject::tr("Publicitée ajouté.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }
    else
            {
            QMessageBox::critical(nullptr, QObject::tr("Ajouter une Publicitée"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }
    this->ui->radioButton_logo->setAutoExclusive(false);
    this->ui->radioButton_logo->setChecked(false);      //refresh radiobutton



    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}                                  //refresh
}

void Marketing::on_pushButton_afficherPub_clicked()
{
    ui->tableView_2->setModel(tmppuclicite.afficher_publicite());

}

void Marketing::on_pushButton_supprimerPub_clicked()
{
    int id = ui->lineEdit_supp_2->text().toInt();
    bool test=tmppuclicite.supprimer_publicite(id);
    if(test)
    {ui->tableView->setModel(tmppuclicite.afficher_publicite());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une Publicité"),
                    QObject::tr("Publicitée supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une Publicité"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}
}


void Marketing::on_pushButton_modifierSP_clicked()
{
    int id1 = ui->lineEdit_idspEdit->text().toInt();
    int numero = ui->lineEdit_numEdit->text().toInt();
    QString nom= ui->lineEdit_nomEdit->text();
    QString budget= ui->lineEdit_budgetEdit->text();
    QString adresse= ui->lineEdit_adresseEdit->text();
  Sponsor S(id1, nom, numero, budget, adresse);
  bool test=S.modifier_sponsor();
    if (test)
            {
            QMessageBox::information(nullptr, QObject::tr("Modifier un Sponsor"),
                              QObject::tr("Sponsor Modifier.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tabWidget_2->setCurrentIndex(1);
            ui->tableView->setModel(tmpsponsor.afficher_sponsor());
            }
    else
            {
            QMessageBox::critical(nullptr, QObject::tr("Modifier un Sponsor"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}
}

void Marketing::on_tableView_doubleClicked(const QModelIndex &index)
{
    QString x = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),0)).toString();
    ui->lineEdit_idspEdit->setText(x);

     x = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),1)).toString();
     ui->lineEdit_numEdit->setText(x);

     x = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),2)).toString();
     ui->lineEdit_nomEdit->setText(x);

     x = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),3)).toString();
     ui->lineEdit_adresseEdit->setText(x);

     x = ui->tableView->model()->data(ui->tableView->model()->index(index.row(),4)).toString();
     ui->lineEdit_budgetEdit->setText(x);

    ui->tabWidget_2->setCurrentIndex(3);

    qDebug() << x;

}

void Marketing::on_tableView_2_doubleClicked(const QModelIndex &index)
{
    QString x = ui->tableView_2->model()->data(ui->tableView_2->model()->index(index.row(),0)).toString();
    ui->lineEdit_idpub_Edit->setText(x);

     x = ui->tableView_2->model()->data(ui->tableView_2->model()->index(index.row(),1)).toString();
     ui->lineEdit_IDsp2_Edit->setText(x);

     x = ui->tableView_2->model()->data(ui->tableView_2->model()->index(index.row(),1)).toString();
     ui->lineEdit_num2Edit->setText(x);

     x = ui->tableView_2->model()->data(ui->tableView_2->model()->index(index.row(),3)).toString();
     ui->lineEdit_typeEdit->setText(x);

     x = ui->tableView_2->model()->data(ui->tableView_2->model()->index(index.row(),4)).toString();
     ui->lineEdit_descriptionEdit->setText(x);

    ui->tabWidget_3->setCurrentIndex(3);

    qDebug() << x;
}

void Marketing::on_pushButton_editPub_clicked()
{
    int id1 = ui->lineEdit_idpub_Edit->text().toInt();
    int id2 = ui->lineEdit_IDsp2_Edit->text().toInt();
    int numero = ui->lineEdit_num2Edit->text().toInt();
    QString type= ui->lineEdit_typeEdit->text();
    QString des= ui->lineEdit_descriptionEdit->text();
  Publicite P(id1, id2, numero, type, des);
  bool test=P.modifier_publicite();
    if (test)
            {
            QMessageBox::information(nullptr, QObject::tr("Modifier une Publicitée"),
                              QObject::tr("Publicitée Modifiée.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tabWidget_3->setCurrentIndex(1);
            ui->tableView_2->setModel(tmppuclicite.afficher_publicite());
            }
    else
            {
            QMessageBox::critical(nullptr, QObject::tr("Modifier une Publicitée"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}
}

void Marketing::on_comboBox_idpb2_currentIndexChanged(const QString &arg1)
{

}
