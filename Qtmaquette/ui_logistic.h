/********************************************************************************
** Form generated from reading UI file 'logistic.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGISTIC_H
#define UI_LOGISTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_logistic
{
public:
    QStackedWidget *stackedWidget;
    QWidget *Programme;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QLabel *label_3;
    QLineEdit *lineEdit_idprog;
    QLabel *label_4;
    QLineEdit *lineEdit_typeprog;
    QLabel *label_5;
    QLineEdit *lineEdit_nomprog;
    QLabel *label_6;
    QLineEdit *lineEdit_dateprog;
    QPushButton *pushButton_ajouterprog;
    QLabel *label_12;
    QLineEdit *lineEdit_studio;
    QComboBox *comboBox;
    QWidget *tab_4;
    QTableView *tableView_prog;
    QPushButton *pushButton_6;
    QLabel *label_14;
    QPushButton *pushButton_11;
    QWidget *tab_7;
    QLineEdit *lineEdit_9;
    QLabel *label_11;
    QPushButton *pushButton_7;
    QGroupBox *groupBox;
    QLabel *label_13;
    QWidget *tab_8;
    QLineEdit *lineEdit_studio_2;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *lineEdit_dateprog_2;
    QLabel *label_23;
    QLineEdit *lineEdit_typeprog_2;
    QLineEdit *lineEdit_nomprog_2;
    QPushButton *pushButton_ajouterprog_2;
    QLineEdit *lineEdit_idprog_2;
    QLabel *label_24;
    QLabel *label_25;
    QComboBox *comboBox_2;
    QLabel *label;
    QWidget *Studio;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_7;
    QLineEdit *lineEdit_IDS;
    QLabel *label_8;
    QLineEdit *lineEdit_nomst;
    QLabel *label_9;
    QLineEdit *lineEdit_ST_numerost;
    QLabel *label_10;
    QLineEdit *lineEdit_descriptionst;
    QPushButton *pushButton_8;
    QWidget *tab_5;
    QTableView *tableView;
    QPushButton *pushButton_9;
    QLabel *label_27;
    QComboBox *comboBox_triStudio;
    QLabel *label_16;
    QWidget *tab_6;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QLabel *label_15;
    QPushButton *pushButton_5;
    QLabel *label_26;
    QWidget *tab_2;
    QLineEdit *lineEdit_descriptionst_2;
    QLabel *label_20;
    QLabel *label_17;
    QPushButton *pushButton_10;
    QLineEdit *lineEdit_nomst_2;
    QLineEdit *lineEdit_ST_numerost_2;
    QLabel *label_18;
    QLineEdit *lineEdit_IDS_2;
    QLabel *label_19;
    QLabel *label_2;

    void setupUi(QDialog *logistic)
    {
        if (logistic->objectName().isEmpty())
            logistic->setObjectName(QStringLiteral("logistic"));
        logistic->resize(787, 358);
        stackedWidget = new QStackedWidget(logistic);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 771, 341));
        Programme = new QWidget();
        Programme->setObjectName(QStringLiteral("Programme"));
        pushButton = new QPushButton(Programme);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(14, 302, 131, 31));
        pushButton_2 = new QPushButton(Programme);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 302, 131, 31));
        tabWidget_2 = new QTabWidget(Programme);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 20, 731, 281));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 81, 20));
        lineEdit_idprog = new QLineEdit(tab_3);
        lineEdit_idprog->setObjectName(QStringLiteral("lineEdit_idprog"));
        lineEdit_idprog->setGeometry(QRect(100, 20, 113, 20));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 61, 16));
        lineEdit_typeprog = new QLineEdit(tab_3);
        lineEdit_typeprog->setObjectName(QStringLiteral("lineEdit_typeprog"));
        lineEdit_typeprog->setGeometry(QRect(100, 80, 113, 20));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 150, 47, 13));
        lineEdit_nomprog = new QLineEdit(tab_3);
        lineEdit_nomprog->setObjectName(QStringLiteral("lineEdit_nomprog"));
        lineEdit_nomprog->setGeometry(QRect(100, 140, 111, 20));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 210, 47, 13));
        lineEdit_dateprog = new QLineEdit(tab_3);
        lineEdit_dateprog->setObjectName(QStringLiteral("lineEdit_dateprog"));
        lineEdit_dateprog->setGeometry(QRect(100, 200, 113, 20));
        pushButton_ajouterprog = new QPushButton(tab_3);
        pushButton_ajouterprog->setObjectName(QStringLiteral("pushButton_ajouterprog"));
        pushButton_ajouterprog->setGeometry(QRect(600, 30, 81, 31));
        label_12 = new QLabel(tab_3);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(316, 30, 61, 20));
        lineEdit_studio = new QLineEdit(tab_3);
        lineEdit_studio->setObjectName(QStringLiteral("lineEdit_studio"));
        lineEdit_studio->setGeometry(QRect(400, 30, 113, 20));
        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(400, 30, 121, 21));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView_prog = new QTableView(tab_4);
        tableView_prog->setObjectName(QStringLiteral("tableView_prog"));
        tableView_prog->setGeometry(QRect(20, 21, 551, 161));
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 200, 131, 31));
        label_14 = new QLabel(tab_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(610, 60, 81, 91));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/Load.png")));
        pushButton_11 = new QPushButton(tab_4);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(70, 200, 131, 31));
        tabWidget_2->addTab(tab_4, QString());
        label_14->raise();
        tableView_prog->raise();
        pushButton_6->raise();
        pushButton_11->raise();
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        lineEdit_9 = new QLineEdit(tab_7);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(200, 90, 201, 41));
        label_11 = new QLabel(tab_7);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(50, 100, 131, 31));
        pushButton_7 = new QPushButton(tab_7);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(250, 160, 91, 31));
        groupBox = new QGroupBox(tab_7);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 50, 621, 181));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(500, 50, 81, 91));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/delete1.png")));
        tabWidget_2->addTab(tab_7, QString());
        groupBox->raise();
        lineEdit_9->raise();
        label_11->raise();
        pushButton_7->raise();
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        lineEdit_studio_2 = new QLineEdit(tab_8);
        lineEdit_studio_2->setObjectName(QStringLiteral("lineEdit_studio_2"));
        lineEdit_studio_2->setGeometry(QRect(414, 40, 113, 20));
        label_21 = new QLabel(tab_8);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(24, 30, 81, 20));
        label_22 = new QLabel(tab_8);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(34, 160, 47, 13));
        lineEdit_dateprog_2 = new QLineEdit(tab_8);
        lineEdit_dateprog_2->setObjectName(QStringLiteral("lineEdit_dateprog_2"));
        lineEdit_dateprog_2->setGeometry(QRect(114, 210, 113, 20));
        label_23 = new QLabel(tab_8);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(34, 90, 61, 16));
        lineEdit_typeprog_2 = new QLineEdit(tab_8);
        lineEdit_typeprog_2->setObjectName(QStringLiteral("lineEdit_typeprog_2"));
        lineEdit_typeprog_2->setGeometry(QRect(114, 90, 113, 20));
        lineEdit_nomprog_2 = new QLineEdit(tab_8);
        lineEdit_nomprog_2->setObjectName(QStringLiteral("lineEdit_nomprog_2"));
        lineEdit_nomprog_2->setGeometry(QRect(114, 150, 111, 20));
        pushButton_ajouterprog_2 = new QPushButton(tab_8);
        pushButton_ajouterprog_2->setObjectName(QStringLiteral("pushButton_ajouterprog_2"));
        pushButton_ajouterprog_2->setGeometry(QRect(614, 40, 81, 31));
        lineEdit_idprog_2 = new QLineEdit(tab_8);
        lineEdit_idprog_2->setObjectName(QStringLiteral("lineEdit_idprog_2"));
        lineEdit_idprog_2->setGeometry(QRect(114, 30, 113, 20));
        label_24 = new QLabel(tab_8);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(34, 220, 47, 13));
        label_25 = new QLabel(tab_8);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(330, 40, 61, 20));
        comboBox_2 = new QComboBox(tab_8);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(410, 40, 121, 21));
        tabWidget_2->addTab(tab_8, QString());
        label = new QLabel(Programme);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(620, 300, 111, 20));
        stackedWidget->addWidget(Programme);
        Studio = new QWidget();
        Studio->setObjectName(QStringLiteral("Studio"));
        pushButton_3 = new QPushButton(Studio);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 302, 131, 31));
        pushButton_4 = new QPushButton(Studio);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(134, 302, 131, 31));
        tabWidget = new QTabWidget(Studio);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 751, 281));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 30, 61, 16));
        lineEdit_IDS = new QLineEdit(tab);
        lineEdit_IDS->setObjectName(QStringLiteral("lineEdit_IDS"));
        lineEdit_IDS->setGeometry(QRect(110, 30, 113, 20));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 80, 51, 16));
        lineEdit_nomst = new QLineEdit(tab);
        lineEdit_nomst->setObjectName(QStringLiteral("lineEdit_nomst"));
        lineEdit_nomst->setGeometry(QRect(110, 80, 113, 20));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 140, 47, 13));
        lineEdit_ST_numerost = new QLineEdit(tab);
        lineEdit_ST_numerost->setObjectName(QStringLiteral("lineEdit_ST_numerost"));
        lineEdit_ST_numerost->setGeometry(QRect(110, 130, 113, 20));
        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 190, 71, 16));
        lineEdit_descriptionst = new QLineEdit(tab);
        lineEdit_descriptionst->setObjectName(QStringLiteral("lineEdit_descriptionst"));
        lineEdit_descriptionst->setGeometry(QRect(110, 190, 113, 20));
        pushButton_8 = new QPushButton(tab);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(530, 32, 111, 31));
        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableView = new QTableView(tab_5);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 40, 531, 181));
        pushButton_9 = new QPushButton(tab_5);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(230, 230, 75, 23));
        label_27 = new QLabel(tab_5);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(590, 70, 81, 111));
        label_27->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/Load.png")));
        comboBox_triStudio = new QComboBox(tab_5);
        comboBox_triStudio->setObjectName(QStringLiteral("comboBox_triStudio"));
        comboBox_triStudio->setGeometry(QRect(370, 10, 151, 22));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(316, 12, 41, 21));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        groupBox_2 = new QGroupBox(tab_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 30, 601, 201));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 50, 131, 31));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(70, 40, 71, 51));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(200, 130, 101, 31));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(440, 50, 81, 101));
        label_26->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/delete1.png")));
        tabWidget->addTab(tab_6, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        lineEdit_descriptionst_2 = new QLineEdit(tab_2);
        lineEdit_descriptionst_2->setObjectName(QStringLiteral("lineEdit_descriptionst_2"));
        lineEdit_descriptionst_2->setGeometry(QRect(140, 190, 113, 20));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(60, 30, 61, 16));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(60, 140, 47, 13));
        pushButton_10 = new QPushButton(tab_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(560, 32, 111, 31));
        lineEdit_nomst_2 = new QLineEdit(tab_2);
        lineEdit_nomst_2->setObjectName(QStringLiteral("lineEdit_nomst_2"));
        lineEdit_nomst_2->setGeometry(QRect(140, 80, 113, 20));
        lineEdit_ST_numerost_2 = new QLineEdit(tab_2);
        lineEdit_ST_numerost_2->setObjectName(QStringLiteral("lineEdit_ST_numerost_2"));
        lineEdit_ST_numerost_2->setGeometry(QRect(140, 130, 113, 20));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(60, 80, 51, 16));
        lineEdit_IDS_2 = new QLineEdit(tab_2);
        lineEdit_IDS_2->setObjectName(QStringLiteral("lineEdit_IDS_2"));
        lineEdit_IDS_2->setGeometry(QRect(140, 30, 113, 20));
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 190, 71, 16));
        tabWidget->addTab(tab_2, QString());
        label_2 = new QLabel(Studio);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(660, 310, 81, 20));
        stackedWidget->addWidget(Studio);
        tabWidget->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        label_2->raise();

        retranslateUi(logistic);

        stackedWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(logistic);
    } // setupUi

    void retranslateUi(QDialog *logistic)
    {
        logistic->setWindowTitle(QApplication::translate("logistic", "PROGRAMME", nullptr));
        pushButton->setText(QApplication::translate("logistic", "Programme", nullptr));
        pushButton_2->setText(QApplication::translate("logistic", "Studio", nullptr));
        label_3->setText(QApplication::translate("logistic", "ID_PROGRAMME", nullptr));
        label_4->setText(QApplication::translate("logistic", "TYPE", nullptr));
        label_5->setText(QApplication::translate("logistic", "NOM", nullptr));
        label_6->setText(QApplication::translate("logistic", "DATE", nullptr));
        pushButton_ajouterprog->setText(QApplication::translate("logistic", "Ajouter", nullptr));
        label_12->setText(QApplication::translate("logistic", "ID_STUDIO", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("logistic", "ajouter", nullptr));
        pushButton_6->setText(QApplication::translate("logistic", "afficher", nullptr));
        label_14->setText(QString());
        pushButton_11->setText(QApplication::translate("logistic", "pdf", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("logistic", "afficher", nullptr));
        label_11->setText(QApplication::translate("logistic", "ID_PROGRAMME", nullptr));
        pushButton_7->setText(QApplication::translate("logistic", "supprimer", nullptr));
        groupBox->setTitle(QString());
        label_13->setText(QString());
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("logistic", "supprimer", nullptr));
        label_21->setText(QApplication::translate("logistic", "ID_PROGRAMME", nullptr));
        label_22->setText(QApplication::translate("logistic", "NOM", nullptr));
        label_23->setText(QApplication::translate("logistic", "TYPE", nullptr));
        pushButton_ajouterprog_2->setText(QApplication::translate("logistic", "MODIFIER", nullptr));
        label_24->setText(QApplication::translate("logistic", "DATE", nullptr));
        label_25->setText(QApplication::translate("logistic", "ID_STUDIO", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("logistic", "modifier", nullptr));
        label->setText(QApplication::translate("logistic", "Programme", nullptr));
        pushButton_3->setText(QApplication::translate("logistic", "Programme", nullptr));
        pushButton_4->setText(QApplication::translate("logistic", "Studio", nullptr));
        label_7->setText(QApplication::translate("logistic", "ID_STUDIO", nullptr));
        label_8->setText(QApplication::translate("logistic", "NOM", nullptr));
        label_9->setText(QApplication::translate("logistic", "NUMERO", nullptr));
        label_10->setText(QApplication::translate("logistic", "DESCRIPTION", nullptr));
        pushButton_8->setText(QApplication::translate("logistic", "AJOUTER", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("logistic", "ajouter", nullptr));
        pushButton_9->setText(QApplication::translate("logistic", "AFFICHER", nullptr));
        label_27->setText(QString());
        label_16->setText(QApplication::translate("logistic", "Trier par", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("logistic", "afficher", nullptr));
        groupBox_2->setTitle(QString());
        label_15->setText(QApplication::translate("logistic", "ID_STUDIO", nullptr));
        pushButton_5->setText(QApplication::translate("logistic", "supprimer", nullptr));
        label_26->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("logistic", "supprimer", nullptr));
        label_20->setText(QApplication::translate("logistic", "ID_STUDIO", nullptr));
        label_17->setText(QApplication::translate("logistic", "NUMERO", nullptr));
        pushButton_10->setText(QApplication::translate("logistic", "MODIFIER", nullptr));
        label_18->setText(QApplication::translate("logistic", "NOM", nullptr));
        label_19->setText(QApplication::translate("logistic", "DESCRIPTION", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("logistic", "modifier", nullptr));
        label_2->setText(QApplication::translate("logistic", "Studio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logistic: public Ui_logistic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGISTIC_H
