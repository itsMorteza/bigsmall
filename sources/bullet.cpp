#include "Bullet.h"
#include "player.h"
#include "enemy.h"
#include "game.h"
#include <QTimer>
#include <QGraphicsScene>
#include <Qdebug>
#include <typeinfo>

extern Game *game;

bullet::bullet(bool a)
{

    int ammonum = game->so->getammo();
    if (ammonum > 0){
        game->so->ammoshot();
        //setRect(0,0,10,50);
        if (a==1){
           side =1;
           setPixmap(QPixmap(":/Image/Bullet1.png"));
           setScale(.2);
        }
        if (a==0){
            side =-1;
            setPixmap(QPixmap(":/Image/Bullet.png"));
            setScale(.2);
        }

        QTimer * timer=new QTimer();
        connect(timer,SIGNAL(timeout()),this,SLOT(move()));
        timer->start(10);
    }
}

void bullet::move()
{
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size();++i) {
                if (typeid(*colliding_items[i]) == typeid(enemy)) {
                    scene()->removeItem(colliding_items[i]);
                    scene()->removeItem(this);
                    qDebug()<<"errrrr";
                    game->so->increase();
                    delete colliding_items[i];
                    delete this;
                    return;
                }
    }

    setPos(x()+(2*side),y());
    if(pos().x() > scene()->width())
    {
        scene()->removeItem(this);
        delete this;
        qDebug()<<"remove";
    }
}

