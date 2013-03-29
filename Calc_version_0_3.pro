#-------------------------------------------------
#
# Project created by QtCreator 2013-03-23T16:07:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Calc_version_0_3
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++0x
SOURCES += main.cpp\
        mainwindow.cpp \
    about.cpp \
    rpncalc.cpp \
    complex_number.cpp \
    complex_number_visual.cpp \
    matrix.cpp

HEADERS  += mainwindow.h \
    about.h \
    rpncalc.h \
    complex_number.h \
    complex_number_visual.h \
    matrix.h

FORMS    += mainwindow.ui \
    about.ui \
    complex_number_visual.ui \
    matrix.ui

RESOURCES += \
    Data.qrc \
    complex_number.qrc
