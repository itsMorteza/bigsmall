#include "player.h"
#include "bullet.h"
#include "enemy.h"
#include "platform.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <typeinfo>


player::player(){
    setPixmap(QPixmap("G:/tel/Ant1.png"));
    speed_y=.01;
    speed_x=15;
    health=1000;
    acc=.0001;
    l=0;
    w=1;
    ammo=10;
    QTimer * masstime =new QTimer;
    connect(masstime,SIGNAL(timeout()),this,SLOT(gravity()));
    masstime->start(10);
    QTimer * jtime =new QTimer;
    connect(jtime,SIGNAL(timeout()),this,SLOT(add_enemy()));
    jtime->start(10000);

}
void player::move_right(){
        setPos(x()+speed_x,y());
        if (l%2==0){setPixmap(QPixmap(":/Image/Ant1.png"));}
        else{setPixmap(QPixmap(":/Image/Ant2r.png"));}
        if (w==0){w=1;}
}
void player::move_left(){
        setPos(x()-speed_x,y());
        if (l%2==0){
            setPixmap(QPixmap(":/Image/ant1r.PNG"));
        }
        else{setPixmap(QPixmap(":/Image/Ant2.png"));}
        if (w==1){


            w=0;
        }
}
void player::keyPressEvent(QKeyEvent * event){
    if (health<0||pos().y() > scene()->height()){
        scene()->removeItem(this);
        delete this;
        qDebug()<<"remove---";
        exit(0);
    }
    //QTimer * time =new QTimer;

    if (event->key()==Qt::Key_Left||event->key()==Qt::Key_4){
        /*connect(time,SIGNAL(timeout()),this,SLOT(move_left()));
        time->start(10);
        time->stop();*/
        move_left();

    }
    else if (event->key()==Qt::Key_Up||event->key()==Qt::Key_8)
        jump();
    else if (event->key()==Qt::Key_Right||event->key()==Qt::Key_6){
        /*connect(time,SIGNAL(timeout()),this,SLOT(move_right()));
        time->start(10);
        if (time->disconnect(time,SIGNAL())){
            time->stop();
        }*/
        move_right();
    }
    else if (event->key()==Qt::Key_Down||event->key()==Qt::Key_2)
        power();
    else if (event->key()==Qt::Key_Space)
        changesize();
}
void player::gravity(){
    if (health<0||pos().y() > scene()->height()||pos().x()>scene()->width()){
        scene()->removeItem(this);
        delete this;
        qDebug()<<"remove---";
        exit(0);
    }
    int k=0;
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size();++i) {
        if (typeid(*colliding_items[i]) == typeid(platform)/*||typeid(*colliding_items[i]) == typeid(player)*/) {
            if (l%2==0){//if (l%2==1){setPos(x(),y()-50);}
                if (colliding_items[i]->pos().y() < y()+50){
                k=1;
                speed_y=0;

                if (pos().x()>colliding_items[i]->pos().x())
                    setPos(x()+.1,y());
                if (pos().x()<colliding_items[i]->pos().x())
                    setPos(x()-.1,y());
                }
            }
            if (l%2==1){
                if (colliding_items[i]->pos().y() < y()+100){
                k=1;
                speed_y=0;
                //if (pos().y())
                if (pos().x()>colliding_items[i]->pos().x())
                    setPos(x()+.1,y());
                if (pos().x()<colliding_items[i]->pos().x())
                    setPos(x()-.1,y());
                }
            }

        }
    }
    if (k==0){
        speed_y+=acc;
        setPos(x(),y()+speed_y);
    }
    damage();
}
void player::jump(){
    int k=1;
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size();++i) {
        if (typeid(*colliding_items[i]) == typeid(platform)) {
            k=0;

            /*if (colliding_items[i]->pos().x()<pos().x()||colliding_items[i]->pos().y()>pos().y()){
                k=0;
            }*/
            qDebug()<<"hello";

        }
    }
    if (k==0)
        setPos(x(),y()-75);
}
void player::power(){
    bullet * b1=new bullet(w);
    b1->setPos(x(),y());
    scene()->addItem(b1);
}
void player::damage(){
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for (int i = 0; i < colliding_items.size();++i) {
                if (typeid(*colliding_items[i]) == typeid(enemy)) {
                    health-=100;
                }
    }
    if (health<0){scene()->removeItem(this);
        delete this;
        qDebug()<<"remove---";
        exit(0);
    }

}
void player::changesize(){
    //scene->removeItem(pl1);
    l++;
    if (l%2==0){setPixmap(QPixmap(":/Image/Ant1.png"));}
    if (l%2==1){setPixmap(QPixmap(":/Image/Ant2.png"));}


}
int player::length_teller(){return l;}
void player::move(){}
bool player::side_teller(){return w;}
void player::add_enemy(){
    qDebug()<<"u are dead";
    int r=rand()%800;
    enemy * ee=new enemy();
    ee->setPos(0,r);
    scene()->addItem(ee);



}

