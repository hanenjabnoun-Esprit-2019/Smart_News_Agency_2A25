/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_marketing;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(787, 358);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 40, 151, 31));
        pushButton->setStyleSheet(QStringLiteral("font: 11pt \"GOOD BRUSH\";"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 90, 151, 31));
        pushButton_2->setStyleSheet(QStringLiteral("font: 11pt \"GOOD BRUSH\";"));
        pushButton_marketing = new QPushButton(centralWidget);
        pushButton_marketing->setObjectName(QStringLiteral("pushButton_marketing"));
        pushButton_marketing->setGeometry(QRect(30, 140, 151, 31));
        pushButton_marketing->setStyleSheet(QStringLiteral("font: 11pt \"GOOD BRUSH\";"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 190, 151, 31));
        pushButton_4->setStyleSheet(QStringLiteral("font: 11pt \"GOOD BRUSH\";"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 240, 151, 31));
        pushButton_5->setStyleSheet(QStringLiteral("font: 11pt \"GOOD BRUSH\";"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(9, -1, 771, 301));
        groupBox->setStyleSheet(QLatin1String("font: 75 12pt \"Adobe Gothic Std B\";\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 481, 241));
        label->setPixmap(QPixmap(QString::fromUtf8("../news-agency111.png")));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(680, 230, 81, 61));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../bestnews.png")));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 240, 81, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../logosp.png")));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 30, 181, 261));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(579, 20, 181, 181));
        groupBox_3->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        groupBox_2->raise();
        MainWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_marketing->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 787, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Best News ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Ressource Humaine", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", " Logistic", Q_NULLPTR));
        pushButton_marketing->setText(QApplication::translate("MainWindow", " Marketing", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Maintenance", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Comptabilit\303\251", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Page d'acceuil", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
