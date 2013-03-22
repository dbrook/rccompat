#-------------------------------------------------
#
# Project created by QtCreator 2012-12-23T16:04:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RCcompat3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    configurator.cpp \
    helpabout.cpp \
    operationguide.cpp \
    redcellantigens.cpp

HEADERS  += mainwindow.h \
    configurator.h \
    helpabout.h \
    operationguide.h \
    redcellantigens.h

FORMS    += mainwindow.ui \
    configurator.ui \
    helpabout.ui \
    operationguide.ui

RESOURCES += \
    main.qrc

RC_FILE += rccompat3.rc
