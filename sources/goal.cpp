#include "goal.h"
#include <typeinfo>

extern Game * game;
Goal::Goal(){
    //setRect(0,0,40,40);
    setPixmap(QPixmap("G:/tel/Flower.png"));
    QTimer * tim=new QTimer();
    connect(tim,SIGNAL(timeout()),this,SLOT(goal_cheaker()));
    tim->start(10);
}
void Goal::goal_cheaker(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size();++i) {
        if (typeid(*colliding_items[i]) == typeid(player)) {
            qDebug()<<"g";
            scene()->removeItem(this);
            delete this;
            game->so->increase();
            QMessageBox msgBox;
            msgBox.setText("you are Win.");
            msgBox.exec();
            qDebug()<<"b";
            exit(1);

        }
    }
}

