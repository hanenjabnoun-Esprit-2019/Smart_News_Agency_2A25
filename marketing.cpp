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
    ui->comboBox_1->setModel(tmpsponsor.afficher_idSP());
    ui->comboBox_suppSP->setModel(tmpsponsor.afficher_idSP());

    ui->comboBox_suppPUB->setModel(tmppuclicite.afficher_idPub());

   //Controle de saisie
    ui->lineEdit_idsp->setValidator(new QIntValidator(0,999,this));
    ui->lineEdit_num_2->setValidator(new QIntValidator(0,999,this));
    ui->lineEdit_num->setValidator(new QIntValidator(0,999,this));
    ui->lineEdit_idpub->setValidator(new QIntValidator(0,999,this));

    ui->comboBox_tri_pub->addItem("NUMERO");
    ui->comboBox_tri_pub->addItem("TYPE");
    ui->comboBox_tri_pub->addItem("DESCRIPTION");
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
           S.sendMail();
    }
    else
            {
            QMessageBox::critical(nullptr, QObject::tr("Ajouter un Sponsor"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }
    ui->comboBox_1->setModel(tmpsponsor.afficher_idSP()); //refresh ComboBox
    ui->comboBox_suppSP->setModel(tmpsponsor.afficher_idSP());

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}                                  //refresh
}

void Marketing::on_pushButton_affichersp_clicked()
{
    ui->tableView_sponsor->setModel(tmpsponsor.afficher_sponsor());


}

void Marketing::on_pushButton_supprimer_clicked()
{
    int id = ui->comboBox_suppSP->currentText().toInt();
    bool test=tmpsponsor.supprimer_sponsor(id);
    if(test)
    {ui->tableView_sponsor->setModel(tmpsponsor.afficher_sponsor());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Sponsor"),
                    QObject::tr("Sponsor supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Sponsor"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    ui->comboBox_suppSP->setModel(tmpsponsor.afficher_idSP());//Refresh


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

    ui->comboBox_suppPUB->setModel(tmppuclicite.afficher_idPub()); //refresh id_pub


    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}                                  //refresh
}

void Marketing::on_pushButton_afficherPub_clicked()
{
    ui->tableView_pub->setModel(tmppuclicite.afficher_publicite());

}

void Marketing::on_pushButton_supprimerPub_clicked()
{
    int id = ui->comboBox_suppPUB->currentText().toInt();
    bool test=tmppuclicite.supprimer_publicite(id);
    if(test)
    {ui->tableView_pub->setModel(tmppuclicite.afficher_publicite());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer une Publicité"),
                    QObject::tr("Publicitée supprimée.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer une Publicité"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->comboBox_suppPUB->setModel(tmppuclicite.afficher_idPub());

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
            ui->tableView_sponsor->setModel(tmpsponsor.afficher_sponsor());
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

void Marketing::on_pushButton_editPub_clicked()
{
    int id1 = ui->lineEdit_idpub_Edit->text().toInt();
    int id2 = ui->lineEdit_IDsp2_Edit->text().toInt();
    int numero = ui->lineEdit_num2Edit->text().toInt();
   // QString type= ui->lineEdit_typeEdit->text();
    QString type;/*= ui->lineEdit_type->text();*/
    if(ui->radioButton_logoEdit->isChecked()){type="logo";}
    else if(ui->radioButton_videoEdit->isChecked()){type="video";}
    else if(ui->radioButton_scriptEdit->isChecked()){type="script";}
    QString des= ui->lineEdit_descriptionEdit->text();
  Publicite P(id1, id2, numero, type, des);
  bool test=P.modifier_publicite();
    if (test)
            {
            QMessageBox::information(nullptr, QObject::tr("Modifier une Publicitée"),
                              QObject::tr("Publicitée Modifiée.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tabWidget_3->setCurrentIndex(1);
            ui->tableView_pub->setModel(tmppuclicite.afficher_publicite());
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



void Marketing::on_recherche_textChanged(const QString &arg1)
{
  //  QString input = ui->recherche->text();
        ui->tableView_pub->setModel(tmppuclicite.Search_pub(arg1));
}

void Marketing::on_recherche_sponsor_textChanged(const QString &arg1)
{
  //  QString input2 = ui->rechercher_SP->text();

        ui->tableView_sponsor->setModel(tmpsponsor.Search_sponsor(arg1));
}

void Marketing::on_comboBox_tri_pub_currentTextChanged(const QString &arg1)
{
    ui->tableView_pub->setModel(tmppuclicite.tri_pub(arg1));
}

void Marketing::on_tableView_sponsor_doubleClicked(const QModelIndex &index) //EDIT SPONSOR
{
    QString x = ui->tableView_sponsor->model()->data(ui->tableView_sponsor->model()->index(index.row(),0)).toString();
    ui->lineEdit_idspEdit->setText(x);

     x = ui->tableView_sponsor->model()->data(ui->tableView_sponsor->model()->index(index.row(),1)).toString();
     ui->lineEdit_numEdit->setText(x);

     x = ui->tableView_sponsor->model()->data(ui->tableView_sponsor->model()->index(index.row(),2)).toString();
     ui->lineEdit_nomEdit->setText(x);

     x = ui->tableView_sponsor->model()->data(ui->tableView_sponsor->model()->index(index.row(),3)).toString();
     ui->lineEdit_adresseEdit->setText(x);

     x = ui->tableView_sponsor->model()->data(ui->tableView_sponsor->model()->index(index.row(),4)).toString();
     ui->lineEdit_budgetEdit->setText(x);

    ui->tabWidget_2->setCurrentIndex(3);

    qDebug() << x;

}

void Marketing::on_tableView_pub_doubleClicked(const QModelIndex &index) //EDIT PUB
{
    QString x = ui->tableView_pub->model()->data(ui->tableView_pub->model()->index(index.row(),0)).toString();
    ui->lineEdit_idpub_Edit->setText(x);

     x = ui->tableView_pub->model()->data(ui->tableView_pub->model()->index(index.row(),1)).toString();
     ui->lineEdit_IDsp2_Edit->setText(x);

     x = ui->tableView_pub->model()->data(ui->tableView_pub->model()->index(index.row(),1)).toString();
     ui->lineEdit_num2Edit->setText(x);

     x = ui->tableView_pub->model()->data(ui->tableView_pub->model()->index(index.row(),3)).toString();
     ui->lineEdit_typeEdit->setText(x);

     x = ui->tableView_pub->model()->data(ui->tableView_pub->model()->index(index.row(),4)).toString();
     ui->lineEdit_descriptionEdit->setText(x);

    ui->tabWidget_3->setCurrentIndex(3);

    qDebug() << x;
}
