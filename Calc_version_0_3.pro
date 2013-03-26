#-------------------------------------------------
#
# Project created by QtCreator 2013-03-23T16:07:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calc_version_0_3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp \
    rpncalc.cpp \
    complex_number.cpp \
    complex_number_visual.cpp

HEADERS  += mainwindow.h \
    about.h \
    rpncalc.h \
    complex_number.h \
    complex_number_visual.h

FORMS    += mainwindow.ui \
    about.ui \
    complex_number_visual.ui

RESOURCES += \
    Data.qrc \
    complex_number.qrc