#-------------------------------------------------
#
# Project created by QtCreator 2019-03-15T11:04:51
#
#-------------------------------------------------

QT       += core gui
QT       += sql
win32:RC_ICONS += img\icn_testprio.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestPrio
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    file.cpp \
    filedao.cpp \
    filewindow.cpp \
    repo.cpp \
    repodao.cpp \
    reportwindow.cpp \
    repowindow.cpp \
    searchchangeswindow.cpp \
    preferences.cpp \
    feature.cpp \
    search.cpp \
    relationmanager.cpp \
    dbhandler.cpp \
    featuredao.cpp \
    featurewindow.cpp \
    user.cpp \
    userdao.cpp \
    userwindow.cpp

HEADERS += \
        mainwindow.h \
    file.h \
    filedao.h \
    filewindow.h \
    repo.h \
    repodao.h \
    reportwindow.h \
    repowindow.h \
    searchchangeswindow.h \
    preferences.h \
    feature.h \
    relationmanager.h \
    dbhandler.h \
    featuredao.h \
    featurewindow.h \
    user.h \
    userdao.h \
    userwindow.h

FORMS += \
        mainwindow.ui \
    filewindow.ui \
    reportwindow.ui \
    repowindow.ui \
    userlogin.ui \
    searchchanges.ui \
    preferences.ui \
    relationmanager.ui \
    featurewindow.ui \
    userwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    db.qrc \
    images.qrc
