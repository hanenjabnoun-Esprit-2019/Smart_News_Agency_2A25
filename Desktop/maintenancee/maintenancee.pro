QT       += core gui sql printsupport widgets multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    connection.cpp \
    equipement.cpp \
    main.cpp \
    maintenance.cpp \
    maintenance1.cpp \
    mainwindow.cpp

HEADERS += \
    connection.h \
    equipement.h \
    maintenance.h \
    maintenance1.h \
    mainwindow.h

FORMS += \
    maintenance.ui \
    mainwindow.ui \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Ressource.qrc
