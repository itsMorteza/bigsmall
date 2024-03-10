#ifndef ENEMY_H
#define ENEMY_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>

#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

#include "game.h"
#include "player.h"
#include "bullet.h"
class enemy : public QObject,public QGraphicsPixmapItem
{
    float speed;
    Q_OBJECT
    int a;
public:
    enemy();
signals:

public slots:
    void move();
};

#endif // ENEMY_H
