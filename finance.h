#ifndef FINANCE_H
#define FINANCE_H

#include <QDialog>
#include "depenses.h"
#include "revenues.h"
#include "employe.h"
#include<QFileInfo>
#include<QFileDialog>
namespace Ui {
class finance;
}

class finance : public QDialog
{
    Q_OBJECT

public:
    explicit finance(QWidget *parent = nullptr);
    ~finance();

private slots:
    void on_revenues_clicked();

    void on_depenses_clicked();

    void on_pushButton_ajoutRevenue_clicked();

    void on_pushButton_editDepense_clicked();

    void on_supprimer_depense_clicked();

    void on_pushButton_ajoutDepense_clicked();

    void on_pushButton_supprimerRevenue_clicked();



    void on_le_r_search_textChanged(const QString &arg1);

    void on_recherche_depense_textChanged(const QString &arg1);

    void on_pdf_revenues_clicked();

    void on_cb_sort_r_currentTextChanged(const QString &arg1);


    void on_comboBox_tri_dp_currentTextChanged(const QString &arg1);

    void on_excel_clicked();

    void on_export_2_clicked();
   void on_update_revenue_clicked();

private:
    Ui::finance *ui;
    Revenues __R;
    Depenses __D;
    Employe tmpEmploye;
};

#endif // FINANCE_H
