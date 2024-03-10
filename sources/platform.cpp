#include "platform.h"
#include <QDebug>
#include <typeinfo>

extern Game * game;
platform::platform()
{
    setPixmap(QPixmap(":/Image/Block.png"));
    setScale(.4);
    QTimer * timel =new QTimer;
    connect(timel,SIGNAL(timeout()),this,SLOT(below()));
    timel->start(10);
}
void platform::below(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size();++i) {
        if (typeid(*colliding_items[i]) == typeid(player)) {
            if (game->pl1->length_teller()%2==1){
                setPos(x(),y()+.01);
            }

        }
    }


}


