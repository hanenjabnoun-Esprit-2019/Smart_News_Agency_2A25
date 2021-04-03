/********************************************************************************
** Form generated from reading UI file 'marketing.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARKETING_H
#define UI_MARKETING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Marketing
{
public:
    QStackedWidget *stackedWidget_2;
    QWidget *Publicite;
    QPushButton *pushButton_SP_2;
    QPushButton *pushButton_Pb_2;
    QTabWidget *tabWidget_3;
    QWidget *Ajout_2;
    QGroupBox *groupBox_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_idpub;
    QLineEdit *lineEdit_num_2;
    QLineEdit *lineEdit_description;
    QPushButton *pushButton_ajoutPub;
    QComboBox *comboBox_1;
    QRadioButton *radioButton_logo;
    QRadioButton *radioButton_video;
    QRadioButton *radioButton_sript;
    QLabel *label_30;
    QWidget *Consulter_2;
    QPushButton *pushButton_afficherPub;
    QTableView *tableView_2;
    QLabel *label_29;
    QLineEdit *recherche;
    QComboBox *comboBox_tri_pub;
    QLabel *label_35;
    QLabel *label_36;
    QWidget *Supprimer_2;
    QLabel *label_12;
    QPushButton *pushButton_supprimerPub;
    QGroupBox *groupBox_3;
    QLabel *label_26;
    QComboBox *comboBox_suppPUB;
    QWidget *Modifier_2;
    QGroupBox *groupBox_6;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLineEdit *lineEdit_idpub_Edit;
    QLineEdit *lineEdit_num2Edit;
    QLineEdit *lineEdit_descriptionEdit;
    QLineEdit *lineEdit_IDsp2_Edit;
    QLineEdit *lineEdit_typeEdit;
    QPushButton *pushButton_editPub;
    QRadioButton *radioButton_logoEdit;
    QRadioButton *radioButton_videoEdit;
    QRadioButton *radioButton_scriptEdit;
    QLabel *label_13;
    QLabel *label_32;
    QLabel *label_33;
    QWidget *Sponsor;
    QTabWidget *tabWidget_2;
    QWidget *Ajout;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_idsp;
    QLineEdit *lineEdit_num;
    QLineEdit *lineEdit_budget;
    QLineEdit *lineEdit_adresse;
    QLineEdit *lineEdit_nom;
    QPushButton *pushButton_ajoutSP;
    QLabel *label_27;
    QWidget *Consulter;
    QPushButton *pushButton_affichersp;
    QTableView *tableView;
    QLabel *label_28;
    QLabel *label_37;
    QLineEdit *recherche_sponsor;
    QWidget *Supprimer;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_supprimer;
    QLabel *label_6;
    QLabel *label_25;
    QComboBox *comboBox_suppSP;
    QWidget *Modifier;
    QGroupBox *groupBox_5;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLineEdit *lineEdit_idspEdit;
    QLineEdit *lineEdit_numEdit;
    QLineEdit *lineEdit_budgetEdit;
    QLineEdit *lineEdit_adresseEdit;
    QLineEdit *lineEdit_nomEdit;
    QPushButton *pushButton_modifierSP;
    QPushButton *pushButton_Pb;
    QPushButton *pushButton_SP;
    QLabel *label_14;
    QLabel *label_31;
    QLabel *label_34;

    void setupUi(QDialog *Marketing)
    {
        if (Marketing->objectName().isEmpty())
            Marketing->setObjectName(QStringLiteral("Marketing"));
        Marketing->resize(787, 358);
        Marketing->setStyleSheet(QStringLiteral(""));
        stackedWidget_2 = new QStackedWidget(Marketing);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(10, 10, 771, 341));
        stackedWidget_2->setStyleSheet(QStringLiteral(""));
        Publicite = new QWidget();
        Publicite->setObjectName(QStringLiteral("Publicite"));
        pushButton_SP_2 = new QPushButton(Publicite);
        pushButton_SP_2->setObjectName(QStringLiteral("pushButton_SP_2"));
        pushButton_SP_2->setGeometry(QRect(40, 300, 151, 31));
        pushButton_SP_2->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        pushButton_Pb_2 = new QPushButton(Publicite);
        pushButton_Pb_2->setObjectName(QStringLiteral("pushButton_Pb_2"));
        pushButton_Pb_2->setGeometry(QRect(190, 300, 151, 31));
        pushButton_Pb_2->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        tabWidget_3 = new QTabWidget(Publicite);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 781, 291));
        tabWidget_3->setStyleSheet(QStringLiteral("font: 10pt \"MV Boli\";"));
        Ajout_2 = new QWidget();
        Ajout_2->setObjectName(QStringLiteral("Ajout_2"));
        groupBox_2 = new QGroupBox(Ajout_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 10, 641, 241));
        groupBox_2->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 20, 81, 41));
        QFont font;
        font.setFamily(QStringLiteral("MV Boli"));
        font.setPointSize(13);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(320, 30, 81, 16));
        label_8->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(320, 70, 111, 41));
        label_9->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(50, 70, 81, 31));
        label_10->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 160, 61, 21));
        label_11->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        lineEdit_idpub = new QLineEdit(groupBox_2);
        lineEdit_idpub->setObjectName(QStringLiteral("lineEdit_idpub"));
        lineEdit_idpub->setGeometry(QRect(160, 30, 113, 20));
        lineEdit_num_2 = new QLineEdit(groupBox_2);
        lineEdit_num_2->setObjectName(QStringLiteral("lineEdit_num_2"));
        lineEdit_num_2->setGeometry(QRect(440, 30, 113, 20));
        lineEdit_description = new QLineEdit(groupBox_2);
        lineEdit_description->setObjectName(QStringLiteral("lineEdit_description"));
        lineEdit_description->setGeometry(QRect(440, 80, 113, 20));
        pushButton_ajoutPub = new QPushButton(groupBox_2);
        pushButton_ajoutPub->setObjectName(QStringLiteral("pushButton_ajoutPub"));
        pushButton_ajoutPub->setGeometry(QRect(440, 190, 131, 31));
        pushButton_ajoutPub->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        comboBox_1 = new QComboBox(groupBox_2);
        comboBox_1->setObjectName(QStringLiteral("comboBox_1"));
        comboBox_1->setGeometry(QRect(160, 80, 111, 22));
        comboBox_1->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        radioButton_logo = new QRadioButton(groupBox_2);
        radioButton_logo->setObjectName(QStringLiteral("radioButton_logo"));
        radioButton_logo->setGeometry(QRect(160, 140, 82, 17));
        radioButton_video = new QRadioButton(groupBox_2);
        radioButton_video->setObjectName(QStringLiteral("radioButton_video"));
        radioButton_video->setGeometry(QRect(160, 170, 82, 17));
        radioButton_sript = new QRadioButton(groupBox_2);
        radioButton_sript->setObjectName(QStringLiteral("radioButton_sript"));
        radioButton_sript->setGeometry(QRect(160, 200, 82, 17));
        label_30 = new QLabel(groupBox_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(320, 140, 91, 81));
        label_30->setPixmap(QPixmap(QString::fromUtf8("../pub1111.png")));
        tabWidget_3->addTab(Ajout_2, QString());
        Consulter_2 = new QWidget();
        Consulter_2->setObjectName(QStringLiteral("Consulter_2"));
        pushButton_afficherPub = new QPushButton(Consulter_2);
        pushButton_afficherPub->setObjectName(QStringLiteral("pushButton_afficherPub"));
        pushButton_afficherPub->setGeometry(QRect(550, 230, 221, 31));
        pushButton_afficherPub->setStyleSheet(QLatin1String("font: 15pt \"MV Boli\";\n"
""));
        tableView_2 = new QTableView(Consulter_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 60, 491, 191));
        label_29 = new QLabel(Consulter_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(640, 60, 71, 81));
        label_29->setPixmap(QPixmap(QString::fromUtf8("../Load.png")));
        recherche = new QLineEdit(Consulter_2);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(372, 40, 131, 20));
        comboBox_tri_pub = new QComboBox(Consulter_2);
        comboBox_tri_pub->setObjectName(QStringLiteral("comboBox_tri_pub"));
        comboBox_tri_pub->setGeometry(QRect(130, 30, 69, 22));
        label_35 = new QLabel(Consulter_2);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(60, 30, 61, 16));
        label_36 = new QLabel(Consulter_2);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(300, 40, 71, 20));
        tabWidget_3->addTab(Consulter_2, QString());
        Supprimer_2 = new QWidget();
        Supprimer_2->setObjectName(QStringLiteral("Supprimer_2"));
        label_12 = new QLabel(Supprimer_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(110, 90, 211, 51));
        label_12->setStyleSheet(QLatin1String("font: 16pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        pushButton_supprimerPub = new QPushButton(Supprimer_2);
        pushButton_supprimerPub->setObjectName(QStringLiteral("pushButton_supprimerPub"));
        pushButton_supprimerPub->setGeometry(QRect(350, 160, 131, 31));
        pushButton_supprimerPub->setStyleSheet(QLatin1String("font: 15pt \"MV Boli\";\n"
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
        comboBox_suppPUB = new QComboBox(groupBox_3);
        comboBox_suppPUB->setObjectName(QStringLiteral("comboBox_suppPUB"));
        comboBox_suppPUB->setGeometry(QRect(280, 90, 171, 31));
        tabWidget_3->addTab(Supprimer_2, QString());
        groupBox_3->raise();
        label_12->raise();
        pushButton_supprimerPub->raise();
        Modifier_2 = new QWidget();
        Modifier_2->setObjectName(QStringLiteral("Modifier_2"));
        groupBox_6 = new QGroupBox(Modifier_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(50, 10, 641, 241));
        groupBox_6->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(50, 20, 81, 41));
        label_20->setFont(font);
        label_20->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(320, 30, 81, 16));
        label_21->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(320, 70, 111, 41));
        label_22->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(50, 70, 81, 31));
        label_23->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(50, 170, 61, 21));
        label_24->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(185, 142, 42);"));
        lineEdit_idpub_Edit = new QLineEdit(groupBox_6);
        lineEdit_idpub_Edit->setObjectName(QStringLiteral("lineEdit_idpub_Edit"));
        lineEdit_idpub_Edit->setGeometry(QRect(160, 30, 113, 20));
        lineEdit_idpub_Edit->setReadOnly(true);
        lineEdit_num2Edit = new QLineEdit(groupBox_6);
        lineEdit_num2Edit->setObjectName(QStringLiteral("lineEdit_num2Edit"));
        lineEdit_num2Edit->setGeometry(QRect(440, 30, 113, 20));
        lineEdit_descriptionEdit = new QLineEdit(groupBox_6);
        lineEdit_descriptionEdit->setObjectName(QStringLiteral("lineEdit_descriptionEdit"));
        lineEdit_descriptionEdit->setGeometry(QRect(440, 80, 113, 20));
        lineEdit_IDsp2_Edit = new QLineEdit(groupBox_6);
        lineEdit_IDsp2_Edit->setObjectName(QStringLiteral("lineEdit_IDsp2_Edit"));
        lineEdit_IDsp2_Edit->setGeometry(QRect(160, 80, 113, 20));
        lineEdit_IDsp2_Edit->setReadOnly(true);
        lineEdit_typeEdit = new QLineEdit(groupBox_6);
        lineEdit_typeEdit->setObjectName(QStringLiteral("lineEdit_typeEdit"));
        lineEdit_typeEdit->setGeometry(QRect(160, 170, 113, 21));
        pushButton_editPub = new QPushButton(groupBox_6);
        pushButton_editPub->setObjectName(QStringLiteral("pushButton_editPub"));
        pushButton_editPub->setGeometry(QRect(430, 160, 161, 41));
        pushButton_editPub->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        radioButton_logoEdit = new QRadioButton(groupBox_6);
        radioButton_logoEdit->setObjectName(QStringLiteral("radioButton_logoEdit"));
        radioButton_logoEdit->setGeometry(QRect(290, 130, 82, 17));
        radioButton_videoEdit = new QRadioButton(groupBox_6);
        radioButton_videoEdit->setObjectName(QStringLiteral("radioButton_videoEdit"));
        radioButton_videoEdit->setGeometry(QRect(290, 170, 82, 17));
        radioButton_scriptEdit = new QRadioButton(groupBox_6);
        radioButton_scriptEdit->setObjectName(QStringLiteral("radioButton_scriptEdit"));
        radioButton_scriptEdit->setGeometry(QRect(290, 210, 82, 17));
        tabWidget_3->addTab(Modifier_2, QString());
        label_13 = new QLabel(Publicite);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(450, 310, 81, 16));
        label_13->setStyleSheet(QLatin1String("color: rgb(185, 142, 42);\n"
"font: 75 12pt \"Adobe Gothic Std B\";"));
        label_32 = new QLabel(Publicite);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(670, 0, 81, 51));
        label_32->setPixmap(QPixmap(QString::fromUtf8("../logosp.png")));
        label_33 = new QLabel(Publicite);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(580, -20, 81, 61));
        label_33->setPixmap(QPixmap(QString::fromUtf8("../bestnews.png")));
        stackedWidget_2->addWidget(Publicite);
        Sponsor = new QWidget();
        Sponsor->setObjectName(QStringLiteral("Sponsor"));
        tabWidget_2 = new QTabWidget(Sponsor);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 771, 291));
        tabWidget_2->setStyleSheet(QStringLiteral("font: 10pt \"MV Boli\";"));
        Ajout = new QWidget();
        Ajout->setObjectName(QStringLiteral("Ajout"));
        groupBox = new QGroupBox(Ajout);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 10, 641, 241));
        groupBox->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 71, 41));
        label->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 30, 81, 16));
        label_2->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(320, 70, 71, 41));
        label_3->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 70, 81, 31));
        label_4->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 160, 61, 21));
        label_5->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        lineEdit_idsp = new QLineEdit(groupBox);
        lineEdit_idsp->setObjectName(QStringLiteral("lineEdit_idsp"));
        lineEdit_idsp->setGeometry(QRect(160, 30, 113, 20));
        lineEdit_num = new QLineEdit(groupBox);
        lineEdit_num->setObjectName(QStringLiteral("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(420, 30, 113, 20));
        lineEdit_budget = new QLineEdit(groupBox);
        lineEdit_budget->setObjectName(QStringLiteral("lineEdit_budget"));
        lineEdit_budget->setGeometry(QRect(420, 80, 113, 20));
        lineEdit_adresse = new QLineEdit(groupBox);
        lineEdit_adresse->setObjectName(QStringLiteral("lineEdit_adresse"));
        lineEdit_adresse->setGeometry(QRect(160, 80, 113, 20));
        lineEdit_nom = new QLineEdit(groupBox);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(160, 160, 113, 21));
        pushButton_ajoutSP = new QPushButton(groupBox);
        pushButton_ajoutSP->setObjectName(QStringLiteral("pushButton_ajoutSP"));
        pushButton_ajoutSP->setGeometry(QRect(510, 200, 111, 31));
        pushButton_ajoutSP->setStyleSheet(QLatin1String("font: 14pt \"MV Boli\";\n"
""));
        label_27 = new QLabel(groupBox);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(350, 130, 91, 81));
        label_27->setPixmap(QPixmap(QString::fromUtf8("../sponsor.png")));
        tabWidget_2->addTab(Ajout, QString());
        Consulter = new QWidget();
        Consulter->setObjectName(QStringLiteral("Consulter"));
        pushButton_affichersp = new QPushButton(Consulter);
        pushButton_affichersp->setObjectName(QStringLiteral("pushButton_affichersp"));
        pushButton_affichersp->setGeometry(QRect(520, 220, 221, 31));
        pushButton_affichersp->setStyleSheet(QLatin1String("font: 15pt \"MV Boli\";\n"
""));
        tableView = new QTableView(Consulter);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 50, 491, 201));
        label_28 = new QLabel(Consulter);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(630, 60, 71, 81));
        label_28->setPixmap(QPixmap(QString::fromUtf8("../Load.png")));
        label_37 = new QLabel(Consulter);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(320, 30, 71, 16));
        recherche_sponsor = new QLineEdit(Consulter);
        recherche_sponsor->setObjectName(QStringLiteral("recherche_sponsor"));
        recherche_sponsor->setGeometry(QRect(390, 30, 113, 20));
        tabWidget_2->addTab(Consulter, QString());
        Supprimer = new QWidget();
        Supprimer->setObjectName(QStringLiteral("Supprimer"));
        groupBox_4 = new QGroupBox(Supprimer);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(60, 10, 621, 241));
        groupBox_4->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        pushButton_supprimer = new QPushButton(groupBox_4);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(250, 150, 131, 31));
        pushButton_supprimer->setStyleSheet(QLatin1String("font: 15pt \"MV Boli\";\n"
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
        comboBox_suppSP = new QComboBox(groupBox_4);
        comboBox_suppSP->setObjectName(QStringLiteral("comboBox_suppSP"));
        comboBox_suppSP->setGeometry(QRect(230, 90, 171, 31));
        tabWidget_2->addTab(Supprimer, QString());
        Modifier = new QWidget();
        Modifier->setObjectName(QStringLiteral("Modifier"));
        groupBox_5 = new QGroupBox(Modifier);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(50, 10, 641, 241));
        groupBox_5->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label_15 = new QLabel(groupBox_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(50, 20, 71, 41));
        label_15->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        label_16 = new QLabel(groupBox_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(320, 30, 81, 16));
        label_16->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        label_17 = new QLabel(groupBox_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(320, 70, 71, 41));
        label_17->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(50, 70, 81, 31));
        label_18->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        label_19 = new QLabel(groupBox_5);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 130, 61, 21));
        label_19->setStyleSheet(QLatin1String("font: 13pt \"MV Boli\";\n"
"color: rgb(212, 175, 55);"));
        lineEdit_idspEdit = new QLineEdit(groupBox_5);
        lineEdit_idspEdit->setObjectName(QStringLiteral("lineEdit_idspEdit"));
        lineEdit_idspEdit->setEnabled(false);
        lineEdit_idspEdit->setGeometry(QRect(160, 30, 113, 20));
        lineEdit_numEdit = new QLineEdit(groupBox_5);
        lineEdit_numEdit->setObjectName(QStringLiteral("lineEdit_numEdit"));
        lineEdit_numEdit->setGeometry(QRect(420, 30, 113, 20));
        lineEdit_budgetEdit = new QLineEdit(groupBox_5);
        lineEdit_budgetEdit->setObjectName(QStringLiteral("lineEdit_budgetEdit"));
        lineEdit_budgetEdit->setGeometry(QRect(420, 80, 113, 20));
        lineEdit_adresseEdit = new QLineEdit(groupBox_5);
        lineEdit_adresseEdit->setObjectName(QStringLiteral("lineEdit_adresseEdit"));
        lineEdit_adresseEdit->setEnabled(true);
        lineEdit_adresseEdit->setGeometry(QRect(160, 80, 113, 20));
        lineEdit_adresseEdit->setReadOnly(false);
        lineEdit_nomEdit = new QLineEdit(groupBox_5);
        lineEdit_nomEdit->setObjectName(QStringLiteral("lineEdit_nomEdit"));
        lineEdit_nomEdit->setGeometry(QRect(160, 130, 113, 21));
        pushButton_modifierSP = new QPushButton(groupBox_5);
        pushButton_modifierSP->setObjectName(QStringLiteral("pushButton_modifierSP"));
        pushButton_modifierSP->setGeometry(QRect(510, 200, 111, 31));
        pushButton_modifierSP->setStyleSheet(QLatin1String("font: 14pt \"MV Boli\";\n"
""));
        tabWidget_2->addTab(Modifier, QString());
        pushButton_Pb = new QPushButton(Sponsor);
        pushButton_Pb->setObjectName(QStringLiteral("pushButton_Pb"));
        pushButton_Pb->setGeometry(QRect(190, 300, 151, 31));
        pushButton_Pb->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        pushButton_SP = new QPushButton(Sponsor);
        pushButton_SP->setObjectName(QStringLiteral("pushButton_SP"));
        pushButton_SP->setGeometry(QRect(40, 300, 151, 31));
        pushButton_SP->setStyleSheet(QLatin1String("font: 12pt \"MV Boli\";\n"
""));
        label_14 = new QLabel(Sponsor);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(450, 300, 111, 41));
        label_14->setStyleSheet(QLatin1String("color: rgb(185, 142, 42);\n"
"font: 75 12pt \"Adobe Gothic Std B\";"));
        label_31 = new QLabel(Sponsor);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(670, 0, 81, 51));
        label_31->setPixmap(QPixmap(QString::fromUtf8("../logosp.png")));
        label_34 = new QLabel(Sponsor);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(580, -20, 81, 61));
        label_34->setPixmap(QPixmap(QString::fromUtf8("../bestnews.png")));
        stackedWidget_2->addWidget(Sponsor);

        retranslateUi(Marketing);

        stackedWidget_2->setCurrentIndex(1);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Marketing);
    } // setupUi

    void retranslateUi(QDialog *Marketing)
    {
        Marketing->setWindowTitle(QApplication::translate("Marketing", "Marketing", Q_NULLPTR));
        pushButton_SP_2->setText(QApplication::translate("Marketing", "Sponsor", Q_NULLPTR));
        pushButton_Pb_2->setText(QApplication::translate("Marketing", "Publicite", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Marketing", "Ajouter Publicit\303\251", Q_NULLPTR));
        label_7->setText(QApplication::translate("Marketing", "ID_PUB", Q_NULLPTR));
        label_8->setText(QApplication::translate("Marketing", "numero", Q_NULLPTR));
        label_9->setText(QApplication::translate("Marketing", "Description", Q_NULLPTR));
        label_10->setText(QApplication::translate("Marketing", "ID_SP", Q_NULLPTR));
        label_11->setText(QApplication::translate("Marketing", "TYPE", Q_NULLPTR));
        pushButton_ajoutPub->setText(QApplication::translate("Marketing", "Ajouter ", Q_NULLPTR));
        radioButton_logo->setText(QApplication::translate("Marketing", "logo", Q_NULLPTR));
        radioButton_video->setText(QApplication::translate("Marketing", "video", Q_NULLPTR));
        radioButton_sript->setText(QApplication::translate("Marketing", "script", Q_NULLPTR));
        label_30->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(Ajout_2), QApplication::translate("Marketing", "Ajout", Q_NULLPTR));
        pushButton_afficherPub->setText(QApplication::translate("Marketing", "Afficher Publicit\303\251", Q_NULLPTR));
        label_29->setText(QString());
        label_35->setText(QApplication::translate("Marketing", "Trier par", Q_NULLPTR));
        label_36->setText(QApplication::translate("Marketing", "Recherche", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(Consulter_2), QApplication::translate("Marketing", "Consulter", Q_NULLPTR));
        label_12->setText(QApplication::translate("Marketing", "Identifiant Publicit\303\251", Q_NULLPTR));
        pushButton_supprimerPub->setText(QApplication::translate("Marketing", "Supprimer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("Marketing", "Supprimer une Publicit\303\251", Q_NULLPTR));
        label_26->setText(QString());
        tabWidget_3->setTabText(tabWidget_3->indexOf(Supprimer_2), QApplication::translate("Marketing", "Supprimer", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("Marketing", "Modifier Publicit\303\251", Q_NULLPTR));
        label_20->setText(QApplication::translate("Marketing", "ID_PUB", Q_NULLPTR));
        label_21->setText(QApplication::translate("Marketing", "numero", Q_NULLPTR));
        label_22->setText(QApplication::translate("Marketing", "Description", Q_NULLPTR));
        label_23->setText(QApplication::translate("Marketing", "ID_SP", Q_NULLPTR));
        label_24->setText(QApplication::translate("Marketing", "TYPE", Q_NULLPTR));
        pushButton_editPub->setText(QApplication::translate("Marketing", "Update", Q_NULLPTR));
        radioButton_logoEdit->setText(QApplication::translate("Marketing", "logo", Q_NULLPTR));
        radioButton_videoEdit->setText(QApplication::translate("Marketing", "video", Q_NULLPTR));
        radioButton_scriptEdit->setText(QApplication::translate("Marketing", "script", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(Modifier_2), QApplication::translate("Marketing", "Modifier", Q_NULLPTR));
        label_13->setText(QApplication::translate("Marketing", "PUBLICITE", Q_NULLPTR));
        label_32->setText(QString());
        label_33->setText(QString());
        groupBox->setTitle(QApplication::translate("Marketing", "Ajouter Sponsor", Q_NULLPTR));
        label->setText(QApplication::translate("Marketing", "ID_SP", Q_NULLPTR));
        label_2->setText(QApplication::translate("Marketing", "numero", Q_NULLPTR));
        label_3->setText(QApplication::translate("Marketing", "Budget", Q_NULLPTR));
        label_4->setText(QApplication::translate("Marketing", "adresse", Q_NULLPTR));
        label_5->setText(QApplication::translate("Marketing", "Nom", Q_NULLPTR));
        pushButton_ajoutSP->setText(QApplication::translate("Marketing", "Ajouter ", Q_NULLPTR));
        label_27->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(Ajout), QApplication::translate("Marketing", "Ajout", Q_NULLPTR));
        pushButton_affichersp->setText(QApplication::translate("Marketing", "Afficher Sponsor", Q_NULLPTR));
        label_28->setText(QString());
        label_37->setText(QApplication::translate("Marketing", "Recherche", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Consulter), QApplication::translate("Marketing", "Consulter", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("Marketing", "Supprimer un Sponsor", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("Marketing", "Supprimer", Q_NULLPTR));
        label_6->setText(QApplication::translate("Marketing", "Identifiant Sponsor", Q_NULLPTR));
        label_25->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(Supprimer), QApplication::translate("Marketing", "Supprimer", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("Marketing", "Modifier Sponsor", Q_NULLPTR));
        label_15->setText(QApplication::translate("Marketing", "ID_SP", Q_NULLPTR));
        label_16->setText(QApplication::translate("Marketing", "numero", Q_NULLPTR));
        label_17->setText(QApplication::translate("Marketing", "Budget", Q_NULLPTR));
        label_18->setText(QApplication::translate("Marketing", "adresse", Q_NULLPTR));
        label_19->setText(QApplication::translate("Marketing", "Nom", Q_NULLPTR));
        pushButton_modifierSP->setText(QApplication::translate("Marketing", "UPDATE", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Modifier), QApplication::translate("Marketing", "Modifier", Q_NULLPTR));
        pushButton_Pb->setText(QApplication::translate("Marketing", "Publicit\303\251", Q_NULLPTR));
        pushButton_SP->setText(QApplication::translate("Marketing", "Sponsor", Q_NULLPTR));
        label_14->setText(QApplication::translate("Marketing", "SPONSOR", Q_NULLPTR));
        label_31->setText(QString());
        label_34->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Marketing: public Ui_Marketing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARKETING_H
