#ifndef FINANCE_H
#define FINANCE_H

#include <QDialog>
#include "depenses.h"
#include "revenues.h"

namespace Ui {
class Finance;
}

class Finance : public QDialog
{
    Q_OBJECT

public:
    void refrech();
    explicit Finance(QWidget *parent = nullptr);
    ~Finance();

private slots:
    void on_pushButton_Dp_clicked();

    void on_pushButton_Revenue_clicked();

    void on_pushButton_ajoutRevenue_clicked();

    void on_pushButton_supprimerRevenue_clicked();

    void on_pushButton_modifierRevenue_clicked();

    void on_cb_sort_r_currentTextChanged(const QString &arg1);

    void on_le_r_search_textChanged(const QString &arg1);

    void on_pushButton_ajoutDepense_clicked();

    void on_pushButton_editDepense_clicked();

    void on_pushButton_supprimerDepense_clicked();

    void on_recherche_depense_textChanged(const QString &arg1);

    void on_comboBox_tri_dp_currentTextChanged(const QString &arg1);

private:
    Ui::Finance *ui;
    Revenues __R;
    Depenses __D;

};

#endif // FINANCE_H
