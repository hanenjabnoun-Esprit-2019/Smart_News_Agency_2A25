#ifndef MARKETING_H
#define MARKETING_H
#include "sponsor.h"
#include <QDialog>
#include "publicite.h"
#include <QLabel>


namespace Ui {
class Marketing;
}

class Marketing : public QDialog
{
    Q_OBJECT

public:
    explicit Marketing(QWidget *parent = nullptr);
    ~Marketing();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_ajoutSP_clicked();

    void on_pushButton_affichersp_clicked();

    void on_pushButton_supprimer_clicked();

    void on_pushButton_Pb_clicked();

    void on_pushButton_SP_2_clicked();

    void on_pushButton_ajoutPub_clicked();

    void on_pushButton_afficherPub_clicked();

    void on_pushButton_supprimerPub_clicked();

    void on_pushButton_modifierSP_clicked();

    void on_pushButton_editPub_clicked();

    void on_recherche_textChanged(const QString &arg1);

    void on_recherche_sponsor_textChanged(const QString &arg1);

    void on_comboBox_tri_pub_currentTextChanged(const QString &arg1);

    void on_tableView_sponsor_doubleClicked(const QModelIndex &index);

    void on_tableView_pub_doubleClicked(const QModelIndex &index);

private:
    Ui::Marketing *ui;
    Sponsor tmpsponsor;
    Publicite tmppuclicite;


};

#endif // MARKETING_H
