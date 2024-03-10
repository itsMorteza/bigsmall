#-------------------------------------------------
#
# Project created by QtCreator 2016-06-24T15:40:28
#
#-------------------------------------------------

QT       += core gui
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bigsmall
TEMPLATE = app


SOURCES += main.cpp\
    enemy.cpp \
    game.cpp \
    player.cpp \
    goal.cpp \
    platform.cpp \
    bullet.cpp \
    score.cpp 

HEADERS  += game.h \
    platform.h \
    player.h \
    enemy.h \
    goal.h \
    platform.h \
    bullet.h \
    score.h 

FORMS    +=

RESOURCES += \
    res.qrc \
    res.qrc

DISTFILES += \
    Abr.png \
    Ant1.png \
    Ant2.png \
    Ant2r.png \
    Block.png \
    Bullet.png \
    Bullet1.png \
    Flower.png \
    Ston-block.png \
    air-020.bmp \
    air-020.png \
    ant1r.PNG  
