#include "maintenance.h"
#include "ui_maintenance.h"
#include "equipement.h"
#include "maintenance1.h"
#include <QMessageBox>
#include <QIntValidator>
#include "connection.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QTableView>
#include <QDialog>
#include <QDebug>


maintenance::maintenance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::maintenance)
{
Equipement E;
    ui->setupUi(this);
    ui->lineEdit_id->setValidator( new QIntValidator(0, 9999999, this));
    ui->tab_equipement->setModel(E.afficher());
}

maintenance::~maintenance()
{
    delete ui;
}

void maintenance::on_pb_ajouter_clicked()
{
    int id=ui->lineEdit_id->text().toInt();
    QString type =ui->lineEdit_type->text();
    int nombre=ui->lineEdit_nombre->text().toInt();
    int prix=ui->lineEdit_prix->text().toInt();
    QString etat =ui->lineEdit_etat->text();
    QString marque =ui->lineEdit_marque->text();

    Equipement E (id,type,nombre,prix,etat,marque);
    bool test=E.ajouter();
    if(test)
    {
        {QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}
ui->tab_equipement->setModel(E.afficher());
}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Ajout non effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void maintenance::on_pb_supprimer_clicked()
{ Equipement E;
    int id =ui->lineEdit_idsupp->text().toInt();

    bool test=E.supprimer(id);
    if(test)
    {
        {QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Suppression effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}
ui->tab_equipement->setModel(E.afficher());
}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Echec de suppression.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void maintenance::on_pushButton_maintenance_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);      //SCROLL
}

void maintenance::on_pushButton_equipement_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);      //SCROLL
}

void maintenance::on_pushButton_updateequip_clicked()
{

    int id = ui->lineEdit_idm_2->text().toInt();
    QString type= ui->lineEdit_typem->text();
    int nombre = ui->lineEdit_nombrem->text().toInt();
    int prix = ui->lineEdit_prixm->text().toInt();
    QString etat= ui->lineEdit_etatm->text();
    QString marque= ui->lineEdit_marquem->text();
    Equipement E (id,type, nombre,prix,etat, marque);

  bool test=E.modifier_equipement();
    if (test)
            {
            QMessageBox::information(nullptr, QObject::tr("Modifier un équipement"),
                              QObject::tr("Equipement Modifié.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            ui->tabWidget_2->setCurrentIndex(1);
            ui->tab_equipement->setModel(E.afficher());
            }
    else
            {
            QMessageBox::critical(nullptr, QObject::tr("Modifier un équipement"),
                              QObject::tr("Erreur !.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);
            }

    foreach(QLineEdit* le, findChildren<QLineEdit*>())
        {le->clear();}
}



void maintenance::on_pb_ajouterm_clicked()
{
    int idm=ui->lineEdit_idm->text().toInt();
        int idemp=ui->lineEdit_idemp->text().toInt();
        int idequip=ui->lineEdit_idequip->text().toInt();
        QString typep =ui->lineEdit_typep->text();
        QString datem =ui->lineEdit_datem->text();

        Maintenance1 M (idm,idemp,idequip,typep,datem);
        bool test=M.ajouter_maintenance();
        if(test)
        {
            {QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("Ajout effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);}
    ui->tab_maintenance->setModel(M.afficher_maintenance());
    }
        else
            QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                        QObject::tr("Ajout non effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void maintenance::on_pb_supprimerm_clicked()
{

        Maintenance1 M;
            int idm =ui->lineEdit_idm_3->text().toInt();

            bool test=M.supprimer_maintenance(idm);
            if(test)
            {
                {QMessageBox::information(nullptr, QObject::tr("OK"),
                            QObject::tr("Suppression effectué.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);}
        ui->tab_maintenance->setModel(M.afficher_maintenance());
        }
            else
                QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                            QObject::tr("Echec de suppression.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
    }



void maintenance::on_pb_updatem_clicked()
{

        int idm = ui->lineEdit_idmm->text().toInt();
        int idemp = ui->lineEdit_idempm->text().toInt();
        int idequip = ui->lineEdit_idequipm->text().toInt();
        QString typep= ui->lineEdit_typepm->text();
        QString datem= ui->lineEdit_datem->text();
        Maintenance1 M (idm,idemp,idequip,typep,datem);

      bool test=M.modifier_maintenance();
        if (test)
                {
                QMessageBox::information(nullptr, QObject::tr("Modifier maintenance"),
                                  QObject::tr("Maintenance Modifiée.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
                ui->tabWidget->setCurrentIndex(1);
                ui->tab_maintenance->setModel(M.afficher_maintenance());
                }
        else
                {
                QMessageBox::critical(nullptr, QObject::tr("Modifier maintenance"),
                                  QObject::tr("Erreur !.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
                }

        foreach(QLineEdit* le, findChildren<QLineEdit*>())
            {le->clear();}
    }


void maintenance::on_pb_trier_clicked()
{
    Equipement E;
    ui->tab_equipement->setModel(E.trier());

}



void maintenance::on_pushButton_filtrer_clicked()
{
    Equipement E;
    ui->tab_equipement->setModel(E.filtrer());
}
