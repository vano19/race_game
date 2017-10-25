TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    menu.cpp \
    control.cpp \
    coord.cpp \
    matrix.cpp

HEADERS += \
    race.h \
    menu.h \
    control.h \
    coord.h \
    matrix.h
