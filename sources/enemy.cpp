#include "enemy.h"
#include <typeinfo>
#include <QDebug>
extern Game * game;
enemy::enemy(){
    a=0;
    speed=.5;
    setPixmap(QPixmap(":/Image/Abr.png"));
    setScale(.4);
    game->d++;
    QTimer * timer=new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));
    timer->start(10);
}
void enemy::move(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size();++i) {
        if (typeid(*colliding_items[i]) == typeid(bullet)) {
            scene()->removeItem(colliding_items[i]);
            game->so->increase();
            qDebug()<<"remove enemy";
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }

    setPos(x()+speed,y());
    if (pos().x()>800){
        //game->d--;
        qDebug()<<"remove enemy";
        scene()->removeItem(this);
        delete this;
    }

}
