#ifndef BULLET_H
#define BULLET_H
#include <QTimer>
#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include "player.h"

class bullet : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
    int side;
public:
    bullet(bool);

signals:

public slots:

    void move();
};

#endif // BULLET_H
