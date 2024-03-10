#ifndef GAME_H
#define GAME_H

#include <QMainWindow>

#include <QApplication>
#include "player.h"
#include "platform.h"
#include "enemy.h"
#include "goal.h"
#include "score.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QBrush>
#include <QImage>
#include <stdlib.h>

class Game :public QGraphicsView
{

public:
    Game();
    player * pl1;
    Score * so ;
    int b;
    int a;
    int d;
public slots:
    //void add_enemy();
    //void add_goal();



};

#endif // GAME_H
