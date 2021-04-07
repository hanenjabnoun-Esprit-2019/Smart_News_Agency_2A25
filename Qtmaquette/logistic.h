#ifndef LOGISTIC_H
#define LOGISTIC_H

#include <QDialog>
#include "programme.h"
#include "studio.h"

namespace Ui {
class logistic;
}

class logistic : public QDialog
{
    Q_OBJECT

public:
    explicit logistic(QWidget *parent = nullptr);
    ~logistic();

private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_ajouterprog_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_ajouterprog_2_clicked();

    void on_pushButton_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_comboBox_triStudio_currentTextChanged(const QString &arg1);

    void on_pushButton_11_clicked();

private:
    Ui::logistic *ui;
    PROGRAMME tmpPromgrame;
    STUDIO tmpSTUDIO;
};

#endif // LOGISTIC_H
