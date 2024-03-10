#ifndef GOAL_H
#define GOAL_H
#include "game.h"
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QMessageBox>

class Goal : public QObject,public QGraphicsPixmapItem
{
    Q_OBJECT
public:
    Goal();
signals:

public slots:
    void goal_cheaker();


};

#endif // GOAL_H
