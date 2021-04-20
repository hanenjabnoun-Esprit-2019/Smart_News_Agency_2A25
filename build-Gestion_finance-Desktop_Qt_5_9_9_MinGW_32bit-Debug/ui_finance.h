/********************************************************************************
** Form generated from reading UI file 'finance.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCE_H
#define UI_FINANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Finance
{
public:
    QStackedWidget *stackedWidget_Finance;
    QWidget *depense;
    QPushButton *pushButton_Revenue;
    QPushButton *pushButton_Depense;
    QTabWidget *tabWidget_Depense;
    QWidget *Ajout_2;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_ajoutDepense;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *cb_r_emp_ajout_3;
    QLabel *label_17;
    QLineEdit *le_id_r_ajout_2;
    QLabel *label_18;
    QLineEdit *le_montant_r_ajout_3;
    QLabel *label_19;
    QLineEdit *le_libelle_r_ajout_3;
    QDateEdit *de_date_r_ajout_3;
    QWidget *Consulter_2;
    QTableView *tableView_depense;
    QLabel *label_29;
    QLineEdit *recherche_depense;
    QComboBox *comboBox_tri_dp;
    QLabel *label_35;
    QLabel *label_36;
    QWidget *Supprimer_2;
    QLabel *label_12;
    QPushButton *pushButton_supprimerDepense;
    QGroupBox *groupBox_3;
    QLabel *label_26;
    QComboBox *cb_d_supp;
    QWidget *Modifier_2;
    QGroupBox *groupBox_6;
    QPushButton *pushButton_editDepense;
    QLabel *label_20;
    QComboBox *cb_r_emp_ajout_4;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLineEdit *le_montant_r_ajout_4;
    QLineEdit *le_libelle_r_ajout_4;
    QLabel *label_24;
    QComboBox *cb_r_id_modif_2;
    QDateEdit *de_date_r_ajout_4;
    QLabel *label_13;
    QLabel *label_32;
    QLabel *label_33;
    QWidget *revenue;
    QTabWidget *tabWidget_Revenue;
    QWidget *Ajout;
    QGroupBox *groupBox;
    QPushButton *pushButton_ajoutRevenue;
    QLineEdit *le_id_r_ajout;
    QLineEdit *le_libelle_r_ajout;
    QLineEdit *le_montant_r_ajout;
    QComboBox *cb_r_emp_ajout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *de_date_r_ajout;
    QWidget *Consulter;
    QTableView *tableView_Revenue;
    QLabel *label_28;
    QLabel *label_37;
    QLineEdit *le_r_search;
    QComboBox *cb_sort_r;
    QLabel *label_38;
    QWidget *Supprimer;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_supprimerRevenue;
    QLabel *label_6;
    QLabel *label_25;
    QComboBox *cb_supp_r;
    QWidget *Modifier;
    QGroupBox *groupBox_5;
    QPushButton *pushButton_modifierRevenue;
    QDateEdit *de_date_r_ajout_2;
    QLabel *label_11;
    QComboBox *cb_r_emp_ajout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QLineEdit *le_montant_r_ajout_2;
    QLineEdit *le_libelle_r_ajout_2;
    QLabel *label_9;
    QComboBox *cb_r_id_modif;
    QPushButton *pushButton_Dp;
    QPushButton *pushButton_RV;
    QLabel *label_14;
    QLabel *label_31;
    QLabel *label_34;

    void setupUi(QDialog *Finance)
    {
        if (Finance->objectName().isEmpty())
            Finance->setObjectName(QStringLiteral("Finance"));
        Finance->resize(779, 361);
        stackedWidget_Finance = new QStackedWidget(Finance);
        stackedWidget_Finance->setObjectName(QStringLiteral("stackedWidget_Finance"));
        stackedWidget_Finance->setGeometry(QRect(0, 10, 761, 341));
        stackedWidget_Finance->setStyleSheet(QStringLiteral(""));
        depense = new QWidget();
        depense->setObjectName(QStringLiteral("depense"));
        pushButton_Revenue = new QPushButton(depense);
        pushButton_Revenue->setObjectName(QStringLiteral("pushButton_Revenue"));
        pushButton_Revenue->setGeometry(QRect(40, 300, 151, 31));
        pushButton_Revenue->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        pushButton_Depense = new QPushButton(depense);
        pushButton_Depense->setObjectName(QStringLiteral("pushButton_Depense"));
        pushButton_Depense->setGeometry(QRect(190, 300, 151, 31));
        pushButton_Depense->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        tabWidget_Depense = new QTabWidget(depense);
        tabWidget_Depense->setObjectName(QStringLiteral("tabWidget_Depense"));
        tabWidget_Depense->setGeometry(QRect(0, 10, 781, 291));
        tabWidget_Depense->setStyleSheet(QStringLiteral("font: 10pt \"MV Boli\";"));
        Ajout_2 = new QWidget();
        Ajout_2->setObjectName(QStringLiteral("Ajout_2"));
        groupBox_2 = new QGroupBox(Ajout_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 10, 641, 241));
        groupBox_2->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_ajoutDepense = new QPushButton(groupBox_2);
        pushButton_ajoutDepense->setObjectName(QStringLiteral("pushButton_ajoutDepense"));
        pushButton_ajoutDepense->setGeometry(QRect(440, 190, 131, 31));
        pushButton_ajoutDepense->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(90, 140, 55, 16));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(320, 50, 55, 16));
        cb_r_emp_ajout_3 = new QComboBox(groupBox_2);
        cb_r_emp_ajout_3->setObjectName(QStringLiteral("cb_r_emp_ajout_3"));
        cb_r_emp_ajout_3->setGeometry(QRect(390, 90, 111, 22));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(320, 90, 55, 16));
        le_id_r_ajout_2 = new QLineEdit(groupBox_2);
        le_id_r_ajout_2->setObjectName(QStringLiteral("le_id_r_ajout_2"));
        le_id_r_ajout_2->setEnabled(false);
        le_id_r_ajout_2->setGeometry(QRect(170, 50, 113, 22));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(90, 90, 55, 16));
        le_montant_r_ajout_3 = new QLineEdit(groupBox_2);
        le_montant_r_ajout_3->setObjectName(QStringLiteral("le_montant_r_ajout_3"));
        le_montant_r_ajout_3->setGeometry(QRect(390, 50, 113, 22));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(90, 50, 55, 16));
        le_libelle_r_ajout_3 = new QLineEdit(groupBox_2);
        le_libelle_r_ajout_3->setObjectName(QStringLiteral("le_libelle_r_ajout_3"));
        le_libelle_r_ajout_3->setGeometry(QRect(170, 140, 113, 22));
        de_date_r_ajout_3 = new QDateEdit(groupBox_2);
        de_date_r_ajout_3->setObjectName(QStringLiteral("de_date_r_ajout_3"));
        de_date_r_ajout_3->setGeometry(QRect(170, 90, 110, 22));
        tabWidget_Depense->addTab(Ajout_2, QString());
        Consulter_2 = new QWidget();
        Consulter_2->setObjectName(QStringLiteral("Consulter_2"));
        tableView_depense = new QTableView(Consulter_2);
        tableView_depense->setObjectName(QStringLiteral("tableView_depense"));
        tableView_depense->setGeometry(QRect(20, 60, 721, 191));
        label_29 = new QLabel(Consulter_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(610, 100, 71, 81));
        label_29->setPixmap(QPixmap(QString::fromUtf8("../Load.png")));
        recherche_depense = new QLineEdit(Consulter_2);
        recherche_depense->setObjectName(QStringLiteral("recherche_depense"));
        recherche_depense->setGeometry(QRect(372, 30, 261, 20));
        comboBox_tri_dp = new QComboBox(Consulter_2);
        comboBox_tri_dp->setObjectName(QStringLiteral("comboBox_tri_dp"));
        comboBox_tri_dp->setGeometry(QRect(130, 30, 101, 22));
        label_35 = new QLabel(Consulter_2);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(60, 30, 61, 16));
        label_36 = new QLabel(Consulter_2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(300, 30, 71, 20));
        tabWidget_Depense->addTab(Consulter_2, QString());
        Supprimer_2 = new QWidget();
        Supprimer_2->setObjectName(QStringLiteral("Supprimer_2"));
        label_12 = new QLabel(Supprimer_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(110, 90, 211, 51));
        label_12->setStyleSheet(QLatin1String("font: 16pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        pushButton_supprimerDepense = new QPushButton(Supprimer_2);
        pushButton_supprimerDepense->setObjectName(QStringLiteral("pushButton_supprimerDepense"));
        pushButton_supprimerDepense->setGeometry(QRect(350, 160, 131, 31));
        pushButton_supprimerDepense->setStyleSheet(QLatin1String("font: 15pt \"MV Boli\";\n"
""));
        groupBox_3 = new QGroupBox(Supprimer_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 10, 621, 241));
        groupBox_3->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(480, 60, 101, 91));
        label_26->setPixmap(QPixmap(QString::fromUtf8("../delete1.png")));
        cb_d_supp = new QComboBox(groupBox_3);
        cb_d_supp->setObjectName(QStringLiteral("cb_d_supp"));
        cb_d_supp->setGeometry(QRect(280, 90, 171, 31));
        tabWidget_Depense->addTab(Supprimer_2, QString());
        groupBox_3->raise();
        label_12->raise();
        pushButton_supprimerDepense->raise();
        Modifier_2 = new QWidget();
        Modifier_2->setObjectName(QStringLiteral("Modifier_2"));
        groupBox_6 = new QGroupBox(Modifier_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(50, 10, 641, 241));
        groupBox_6->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_editDepense = new QPushButton(groupBox_6);
        pushButton_editDepense->setObjectName(QStringLiteral("pushButton_editDepense"));
        pushButton_editDepense->setGeometry(QRect(430, 160, 161, 41));
        pushButton_editDepense->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(90, 50, 55, 16));
        cb_r_emp_ajout_4 = new QComboBox(groupBox_6);
        cb_r_emp_ajout_4->setObjectName(QStringLiteral("cb_r_emp_ajout_4"));
        cb_r_emp_ajout_4->setGeometry(QRect(390, 90, 111, 22));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(90, 140, 55, 16));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(320, 50, 55, 16));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(90, 90, 55, 16));
        le_montant_r_ajout_4 = new QLineEdit(groupBox_6);
        le_montant_r_ajout_4->setObjectName(QStringLiteral("le_montant_r_ajout_4"));
        le_montant_r_ajout_4->setGeometry(QRect(390, 50, 113, 22));
        le_libelle_r_ajout_4 = new QLineEdit(groupBox_6);
        le_libelle_r_ajout_4->setObjectName(QStringLiteral("le_libelle_r_ajout_4"));
        le_libelle_r_ajout_4->setGeometry(QRect(170, 140, 113, 22));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(320, 90, 55, 16));
        cb_r_id_modif_2 = new QComboBox(groupBox_6);
        cb_r_id_modif_2->setObjectName(QStringLiteral("cb_r_id_modif_2"));
        cb_r_id_modif_2->setGeometry(QRect(170, 50, 111, 22));
        de_date_r_ajout_4 = new QDateEdit(groupBox_6);
        de_date_r_ajout_4->setObjectName(QStringLiteral("de_date_r_ajout_4"));
        de_date_r_ajout_4->setGeometry(QRect(170, 90, 110, 22));
        tabWidget_Depense->addTab(Modifier_2, QString());
        label_13 = new QLabel(depense);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(450, 310, 81, 16));
        label_13->setStyleSheet(QLatin1String("color: rgb(185, 142, 42);\n"
"font: 75 12pt \"Adobe Gothic Std B\";"));
        label_32 = new QLabel(depense);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(670, 0, 81, 51));
        label_32->setPixmap(QPixmap(QString::fromUtf8("../logosp.png")));
        label_33 = new QLabel(depense);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(580, -20, 81, 61));
        label_33->setPixmap(QPixmap(QString::fromUtf8("../bestnews.png")));
        stackedWidget_Finance->addWidget(depense);
        revenue = new QWidget();
        revenue->setObjectName(QStringLiteral("revenue"));
        tabWidget_Revenue = new QTabWidget(revenue);
        tabWidget_Revenue->setObjectName(QStringLiteral("tabWidget_Revenue"));
        tabWidget_Revenue->setGeometry(QRect(0, 0, 771, 291));
        tabWidget_Revenue->setStyleSheet(QStringLiteral("font: 10pt \"MV Boli\";"));
        Ajout = new QWidget();
        Ajout->setObjectName(QStringLiteral("Ajout"));
        groupBox = new QGroupBox(Ajout);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 10, 641, 241));
        groupBox->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_ajoutRevenue = new QPushButton(groupBox);
        pushButton_ajoutRevenue->setObjectName(QStringLiteral("pushButton_ajoutRevenue"));
        pushButton_ajoutRevenue->setGeometry(QRect(510, 200, 111, 31));
        pushButton_ajoutRevenue->setStyleSheet(QLatin1String("font: 14pt \"MV Boli\";\n"
""));
        le_id_r_ajout = new QLineEdit(groupBox);
        le_id_r_ajout->setObjectName(QStringLiteral("le_id_r_ajout"));
        le_id_r_ajout->setEnabled(false);
        le_id_r_ajout->setGeometry(QRect(110, 40, 113, 22));
        le_libelle_r_ajout = new QLineEdit(groupBox);
        le_libelle_r_ajout->setObjectName(QStringLiteral("le_libelle_r_ajout"));
        le_libelle_r_ajout->setGeometry(QRect(110, 130, 113, 22));
        le_montant_r_ajout = new QLineEdit(groupBox);
        le_montant_r_ajout->setObjectName(QStringLiteral("le_montant_r_ajout"));
        le_montant_r_ajout->setGeometry(QRect(330, 40, 113, 22));
        cb_r_emp_ajout = new QComboBox(groupBox);
        cb_r_emp_ajout->setObjectName(QStringLiteral("cb_r_emp_ajout"));
        cb_r_emp_ajout->setGeometry(QRect(330, 80, 111, 22));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 40, 55, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 80, 55, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 130, 55, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 40, 55, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 80, 55, 16));
        de_date_r_ajout = new QDateEdit(groupBox);
        de_date_r_ajout->setObjectName(QStringLiteral("de_date_r_ajout"));
        de_date_r_ajout->setGeometry(QRect(110, 80, 110, 22));
        tabWidget_Revenue->addTab(Ajout, QString());
        Consulter = new QWidget();
        Consulter->setObjectName(QStringLiteral("Consulter"));
        tableView_Revenue = new QTableView(Consulter);
        tableView_Revenue->setObjectName(QStringLiteral("tableView_Revenue"));
        tableView_Revenue->setGeometry(QRect(20, 50, 691, 201));
        label_28 = new QLabel(Consulter);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(630, 60, 71, 81));
        label_28->setPixmap(QPixmap(QString::fromUtf8("../Load.png")));
        label_37 = new QLabel(Consulter);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(320, 20, 71, 16));
        le_r_search = new QLineEdit(Consulter);
        le_r_search->setObjectName(QStringLiteral("le_r_search"));
        le_r_search->setGeometry(QRect(390, 20, 191, 20));
        cb_sort_r = new QComboBox(Consulter);
        cb_sort_r->setObjectName(QStringLiteral("cb_sort_r"));
        cb_sort_r->setGeometry(QRect(110, 20, 91, 22));
        label_38 = new QLabel(Consulter);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(40, 20, 61, 16));
        tabWidget_Revenue->addTab(Consulter, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QStringLiteral("Supprimer"));
        groupBox_4 = new QGroupBox(Supprimer);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(60, 10, 621, 241));
        groupBox_4->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_supprimerRevenue = new QPushButton(groupBox_4);
        pushButton_supprimerRevenue->setObjectName(QStringLiteral("pushButton_supprimerRevenue"));
        pushButton_supprimerRevenue->setGeometry(QRect(250, 150, 131, 31));
        pushButton_supprimerRevenue->setStyleSheet(QLatin1String("font: 15pt \"MV Boli\";\n"
""));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 80, 201, 51));
        label_6->setStyleSheet(QLatin1String("font: 16pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(450, 50, 101, 91));
        label_25->setPixmap(QPixmap(QString::fromUtf8("../delete1.png")));
        cb_supp_r = new QComboBox(groupBox_4);
        cb_supp_r->setObjectName(QStringLiteral("cb_supp_r"));
        cb_supp_r->setGeometry(QRect(230, 90, 171, 31));
        tabWidget_Revenue->addTab(Supprimer, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QStringLiteral("Modifier"));
        groupBox_5 = new QGroupBox(Modifier);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(50, 10, 641, 241));
        groupBox_5->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_modifierRevenue = new QPushButton(groupBox_5);
        pushButton_modifierRevenue->setObjectName(QStringLiteral("pushButton_modifierRevenue"));
        pushButton_modifierRevenue->setGeometry(QRect(510, 200, 111, 31));
        pushButton_modifierRevenue->setStyleSheet(QLatin1String("font: 14pt \"MV Boli\";\n"
""));
        de_date_r_ajout_2 = new QDateEdit(groupBox_5);
        de_date_r_ajout_2->setObjectName(QStringLiteral("de_date_r_ajout_2"));
        de_date_r_ajout_2->setGeometry(QRect(160, 80, 110, 22));
        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(80, 40, 55, 16));
        cb_r_emp_ajout_2 = new QComboBox(groupBox_5);
        cb_r_emp_ajout_2->setObjectName(QStringLiteral("cb_r_emp_ajout_2"));
        cb_r_emp_ajout_2->setGeometry(QRect(380, 80, 111, 22));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 130, 55, 16));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(310, 40, 55, 16));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 80, 55, 16));
        le_montant_r_ajout_2 = new QLineEdit(groupBox_5);
        le_montant_r_ajout_2->setObjectName(QStringLiteral("le_montant_r_ajout_2"));
        le_montant_r_ajout_2->setGeometry(QRect(380, 40, 113, 22));
        le_libelle_r_ajout_2 = new QLineEdit(groupBox_5);
        le_libelle_r_ajout_2->setObjectName(QStringLiteral("le_libelle_r_ajout_2"));
        le_libelle_r_ajout_2->setGeometry(QRect(160, 130, 113, 22));
        label_9 = new QLabel(groupBox_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(310, 80, 55, 16));
        cb_r_id_modif = new QComboBox(groupBox_5);
        cb_r_id_modif->setObjectName(QStringLiteral("cb_r_id_modif"));
        cb_r_id_modif->setGeometry(QRect(160, 40, 111, 22));
        tabWidget_Revenue->addTab(Modifier, QString());
        pushButton_Dp = new QPushButton(revenue);
        pushButton_Dp->setObjectName(QStringLiteral("pushButton_Dp"));
        pushButton_Dp->setGeometry(QRect(190, 300, 151, 31));
        pushButton_Dp->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        pushButton_RV = new QPushButton(revenue);
        pushButton_RV->setObjectName(QStringLiteral("pushButton_RV"));
        pushButton_RV->setGeometry(QRect(40, 300, 151, 31));
        pushButton_RV->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        label_14 = new QLabel(revenue);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(450, 300, 111, 41));
        label_14->setStyleSheet(QLatin1String("color: rgb(185, 142, 42);\n"
"font: 75 12pt \"Adobe Gothic Std B\";"));
        label_31 = new QLabel(revenue);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(670, 0, 81, 51));
        label_31->setPixmap(QPixmap(QString::fromUtf8("../logosp.png")));
        label_34 = new QLabel(revenue);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(580, -20, 81, 61));
        label_34->setPixmap(QPixmap(QString::fromUtf8("../bestnews.png")));
        stackedWidget_Finance->addWidget(revenue);

        retranslateUi(Finance);

        stackedWidget_Finance->setCurrentIndex(1);
        tabWidget_Depense->setCurrentIndex(1);
        tabWidget_Revenue->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Finance);
    } // setupUi

    void retranslateUi(QDialog *Finance)
    {
        Finance->setWindowTitle(QApplication::translate("Finance", "Dialog", Q_NULLPTR));
        pushButton_Revenue->setText(QApplication::translate("Finance", "Revenues", Q_NULLPTR));
        pushButton_Depense->setText(QApplication::translate("Finance", "D\303\251penses", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Finance", "Ajouter D\303\251pense", Q_NULLPTR));
        pushButton_ajoutDepense->setText(QApplication::translate("Finance", "Ajouter ", Q_NULLPTR));
        label_15->setText(QApplication::translate("Finance", "libelle", Q_NULLPTR));
        label_16->setText(QApplication::translate("Finance", "montant", Q_NULLPTR));
        label_17->setText(QApplication::translate("Finance", "id employe", Q_NULLPTR));
        label_18->setText(QApplication::translate("Finance", "date", Q_NULLPTR));
        label_19->setText(QApplication::translate("Finance", "id", Q_NULLPTR));
        tabWidget_Depense->setTabText(tabWidget_Depense->indexOf(Ajout_2), QApplication::translate("Finance", "Ajout", Q_NULLPTR));
        label_29->setText(QString());
        label_35->setText(QApplication::translate("Finance", "Trier par", Q_NULLPTR));
        label_36->setText(QApplication::translate("Finance", "Recherche", Q_NULLPTR));
        tabWidget_Depense->setTabText(tabWidget_Depense->indexOf(Consulter_2), QApplication::translate("Finance", "Consulter", Q_NULLPTR));
        label_12->setText(QApplication::translate("Finance", "Identifiant D\303\251pense", Q_NULLPTR));
        pushButton_supprimerDepense->setText(QApplication::translate("Finance", "Supprimer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Finance", "Supprimer une D\303\251pense", Q_NULLPTR));
        label_26->setText(QString());
        tabWidget_Depense->setTabText(tabWidget_Depense->indexOf(Supprimer_2), QApplication::translate("Finance", "Supprimer", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Finance", "Modifier d\303\251pense", Q_NULLPTR));
        pushButton_editDepense->setText(QApplication::translate("Finance", "Update", Q_NULLPTR));
        label_20->setText(QApplication::translate("Finance", "id", Q_NULLPTR));
        label_21->setText(QApplication::translate("Finance", "libelle", Q_NULLPTR));
        label_22->setText(QApplication::translate("Finance", "montant", Q_NULLPTR));
        label_23->setText(QApplication::translate("Finance", "date", Q_NULLPTR));
        label_24->setText(QApplication::translate("Finance", "id employe", Q_NULLPTR));
        tabWidget_Depense->setTabText(tabWidget_Depense->indexOf(Modifier_2), QApplication::translate("Finance", "Modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("Finance", "D\303\251penses", Q_NULLPTR));
        label_32->setText(QString());
        label_33->setText(QString());
        groupBox->setTitle(QApplication::translate("Finance", "Ajouter Sponsor", Q_NULLPTR));
        pushButton_ajoutRevenue->setText(QApplication::translate("Finance", "Ajouter ", Q_NULLPTR));
        label->setText(QApplication::translate("Finance", "id", Q_NULLPTR));
        label_2->setText(QApplication::translate("Finance", "date", Q_NULLPTR));
        label_3->setText(QApplication::translate("Finance", "libelle", Q_NULLPTR));
        label_4->setText(QApplication::translate("Finance", "montant", Q_NULLPTR));
        label_5->setText(QApplication::translate("Finance", "id employe", Q_NULLPTR));
        tabWidget_Revenue->setTabText(tabWidget_Revenue->indexOf(Ajout), QApplication::translate("Finance", "Ajout", Q_NULLPTR));
        label_28->setText(QString());
        label_37->setText(QApplication::translate("Finance", "Recherche", Q_NULLPTR));
        label_38->setText(QApplication::translate("Finance", "Trier par", Q_NULLPTR));
        tabWidget_Revenue->setTabText(tabWidget_Revenue->indexOf(Consulter), QApplication::translate("Finance", "Consulter", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Finance", "Supprimer  Revenue", Q_NULLPTR));
        pushButton_supprimerRevenue->setText(QApplication::translate("Finance", "Supprimer", Q_NULLPTR));
        label_6->setText(QApplication::translate("Finance", "Identifiant Revenue", Q_NULLPTR));
        label_25->setText(QString());
        tabWidget_Revenue->setTabText(tabWidget_Revenue->indexOf(Supprimer), QApplication::translate("Finance", "Supprimer", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Finance", "Modifier Revenue", Q_NULLPTR));
        pushButton_modifierRevenue->setText(QApplication::translate("Finance", "UPDATE", Q_NULLPTR));
        label_11->setText(QApplication::translate("Finance", "id", Q_NULLPTR));
        label_7->setText(QApplication::translate("Finance", "libelle", Q_NULLPTR));
        label_8->setText(QApplication::translate("Finance", "montant", Q_NULLPTR));
        label_10->setText(QApplication::translate("Finance", "date", Q_NULLPTR));
        label_9->setText(QApplication::translate("Finance", "id employe", Q_NULLPTR));
        tabWidget_Revenue->setTabText(tabWidget_Revenue->indexOf(Modifier), QApplication::translate("Finance", "Modifier", Q_NULLPTR));
        pushButton_Dp->setText(QApplication::translate("Finance", "D\303\251penses", Q_NULLPTR));
        pushButton_RV->setText(QApplication::translate("Finance", "Revenues", Q_NULLPTR));
        label_14->setText(QApplication::translate("Finance", "Revenues", Q_NULLPTR));
        label_31->setText(QString());
        label_34->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Finance: public Ui_Finance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCE_H
