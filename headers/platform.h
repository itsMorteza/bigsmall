#ifndef PLATFORM_H
#define PLATFORM_H
#include <QObject>
#include "game.h"
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
class platform : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    platform();

signals:

public slots:
    void below();
};
#endif // PLATFORM_H
