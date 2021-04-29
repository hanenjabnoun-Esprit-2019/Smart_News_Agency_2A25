#include "finance.h"
#include "ui_finance.h"
#include <QMessageBox>
#include <QFile>

Finance::Finance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Finance)
{
    ui->setupUi(this);


    refrech();

    ui->cb_sort_r->addItem("datee");
    ui->cb_sort_r->addItem("libelle");
    ui->cb_sort_r->addItem("montant");
    ui->le_montant_r_ajout->setValidator( new QIntValidator(0, 100000, this) );
    ui->le_montant_r_ajout_2->setValidator( new QIntValidator(0, 100000, this) );

    ui->comboBox_tri_dp->addItem("datee");
    ui->comboBox_tri_dp->addItem("libelle");
    ui->comboBox_tri_dp->addItem("montant");
    ui->le_montant_r_ajout_3->setValidator( new QIntValidator(0, 100000, this) );
    ui->le_montant_r_ajout_4->setValidator( new QIntValidator(0, 100000, this) );

}

Finance::~Finance()
{
    delete ui;
}

void Finance::refrech()
{
    __R.fillComboBoxId(ui->cb_r_id_modif);
    __R.fillComboBoxId(ui->cb_supp_r);
    __R.fillEmp(ui->cb_r_emp_ajout);
    __R.fillEmp(ui->cb_r_emp_ajout_2);
    ui->tableView_Revenue->setModel(__R.afficher());

    __D.fillComboBoxId(ui->cb_r_id_modif_2);
    __D.fillComboBoxId(ui->cb_d_supp);
    __D.fillEmp(ui->cb_r_emp_ajout_3);
    __D.fillEmp(ui->cb_r_emp_ajout_4);
    ui->tableView_depense->setModel(__D.afficher());

}

void Finance::on_pushButton_Dp_clicked()
{
    ui->stackedWidget_Finance->setCurrentIndex(0);
}

void Finance::on_pushButton_Revenue_clicked()
{
    ui->stackedWidget_Finance->setCurrentIndex(1);
}

void Finance::on_pushButton_ajoutRevenue_clicked()
{
    Revenues _r_r(ui->le_id_r_ajout->text().toInt(), ui->de_date_r_ajout->text(), ui->le_montant_r_ajout->text(), ui->le_libelle_r_ajout->text(), ui->cb_r_emp_ajout->currentText().toInt());
    if(_r_r.ajouter()) {
        _r_r.sendMail();
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Revenue"),
                           QObject::tr("Ajout avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Revenue"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_pushButton_supprimerRevenue_clicked()
{
    Revenues _r_r;
    _r_r.setId(ui->cb_supp_r->currentText().toInt());
    if(_r_r.supprimer()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Revenue"),
                           QObject::tr("Supprimer avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Revenue"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_pushButton_modifierRevenue_clicked()
{
    Revenues _r_r(ui->cb_r_id_modif->currentText().toInt(), ui->de_date_r_ajout_2->text(), ui->le_montant_r_ajout_2->text(), ui->le_libelle_r_ajout_2->text(), ui->cb_r_emp_ajout_2->currentText().toInt());
    if(_r_r.modifier()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Modfier un Revenue"),
                           QObject::tr("Modfier avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Revenue"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_cb_sort_r_currentTextChanged(const QString &arg1)
{
    ui->tableView_Revenue->setModel(__R.sort(arg1));
}

void Finance::on_le_r_search_textChanged(const QString &arg1)
{
    ui->tableView_Revenue->setModel(__R.search(arg1));
}

void Finance::on_pushButton_ajoutDepense_clicked()
{
    Depenses _r_r(ui->le_id_r_ajout_2->text().toInt(), ui->de_date_r_ajout_3->text(), ui->le_montant_r_ajout_3->text(), ui->le_libelle_r_ajout_3->text(), ui->cb_r_emp_ajout_3->currentText().toInt());
    if(_r_r.ajouter()) {
        _r_r.sendMail();
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Ajouter un Depenses"),
                           QObject::tr("Ajout avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Ajouter un Depenses"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_pushButton_editDepense_clicked()
{
    Depenses _r_r(ui->cb_r_id_modif_2->currentText().toInt(), ui->de_date_r_ajout_4->text(), ui->le_montant_r_ajout_4->text(), ui->le_libelle_r_ajout_4->text(), ui->cb_r_emp_ajout_4->currentText().toInt());
    if(_r_r.modifier()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Modfier un Depenses"),
                           QObject::tr("Modfier avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Modfier un Depenses"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_pushButton_supprimerDepense_clicked()
{
    Depenses _r_r;
    _r_r.setId(ui->cb_d_supp->currentText().toInt());
    if(_r_r.supprimer()) {
        refrech();
        QMessageBox::information(nullptr, QObject::tr("Supprimer un Depenses"),
                           QObject::tr("Supprimer avec succès !.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
    else {
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un Depenses"),
                           QObject::tr("Erreur!.\n"
                                       "Click Close to exit."), QMessageBox::Close);
    }
}

void Finance::on_recherche_depense_textChanged(const QString &arg1)
{
    ui->tableView_depense->setModel(__D.search(arg1));
}

void Finance::on_comboBox_tri_dp_currentTextChanged(const QString &arg1)
{
    ui->tableView_depense->setModel(__D.sort(arg1));

}
