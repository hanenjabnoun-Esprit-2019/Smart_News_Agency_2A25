#-------------------------------------------------
#
# Project created by QtCreator 2021-03-03T21:11:44
#
#-------------------------------------------------

QT       += core gui sql network printsupport widgets multimedia

QT += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets

TARGET = BestNews
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

DEFINES += SMTP_BUILD

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    sponsor.cpp \
    marketing.cpp \
    publicite.cpp \
    src/emailaddress.cpp \
    src/mimeattachment.cpp \
    src/mimecontentformatter.cpp \
    src/mimefile.cpp \
    src/mimehtml.cpp \
    src/mimeinlinefile.cpp \
    src/mimemessage.cpp \
    src/mimemultipart.cpp \
    src/mimepart.cpp \
    src/mimetext.cpp \
    src/quotedprintable.cpp \
    src/smtpclient.cpp \
    arduino.cpp \
    logistic.cpp \
    studio.cpp \
    programme.cpp \
    maintenance1.cpp \
    equipement.cpp \
    maintenance.cpp \
    notif.cpp \
    depenses.cpp \
    revenues.cpp \
    finance.cpp \
    employe.cpp

HEADERS += \
        mainwindow.h \
    connection.h \
    sponsor.h \
    marketing.h \
    publicite.h \
    src/emailaddress.h \
    src/mimeattachment.h \
    src/mimecontentformatter.h \
    src/mimefile.h \
    src/mimehtml.h \
    src/mimeinlinefile.h \
    src/mimemessage.h \
    src/mimemultipart.h \
    src/mimepart.h \
    src/mimetext.h \
    src/quotedprintable.h \
    src/smtpclient.h \
    src/smtpexports.h \
    src/SmtpMime \
    arduino.h \
    logistic.h \
    studio.h \
    programme.h \
    maintenance1.h \
    equipement.h \
    maintenance.h \
    notif.h \
    depenses.h \
    revenues.h \
    finance.h \
    employe.h

FORMS += \
        mainwindow.ui \
    marketing.ui \
    logistic.ui \
    maintenance.ui \
    finance.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    translator.qrc \
    qml.qrc
