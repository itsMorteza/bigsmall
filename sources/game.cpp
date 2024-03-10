#include "game.h"
#include "QDebug"
#include <typeinfo>

#include <QTimer>
Game::Game(){
    a=0;
    QGraphicsScene * scene= new QGraphicsScene;
    scene->setSceneRect(0,0,800,800);
    scene->setBackgroundBrush(QBrush(QImage(":/Image/air-020.bmp")));

    pl1=new player;
    /*QMediaPlayer * music=new QMediaPlayer;
    music->setMedia(QUrl(":/sounds/bamdad.mp3"));
    music->play();*/

    pl1->setPos(50,50);
    so = new Score;
    scene->addItem(so);
    QGraphicsView * view= new QGraphicsView(scene);

    pl1->setFlag(QGraphicsItem::ItemIsFocusable);
    pl1->setFocus();
    scene->addItem(pl1);
    platform * pk1=new platform();
    pk1->setPos(40,540);
    scene->addItem(pk1);
    platform* pk2=new platform;
    pk2->setPos(500,70);
    scene->addItem(pk2);
    platform* pk3=new platform;
    pk3->setPos(300,200);
    scene->addItem(pk3);

    platform* pk4=new platform;
    pk4->setPos(400,400);
    scene->addItem(pk4);
    platform* pk5=new platform;
    pk5->setPos(360,500);
    scene->addItem(pk2);
    platform* pk6=new platform;
    pk6->setPos(600,200);
    pk6->setScale(.3);
    scene->addItem(pk6);
    platform* pk7=new platform;
    pk7->setPos(500,500);
    scene->addItem(pk7);
    Goal * go=new Goal;
    go->setPos(190,290);
    scene->addItem(go);
    //g=1;
    platform * pk8=new platform;
    pk8->setPos(30,190);
    scene->addItem(pk8);
    /*QTimer * time_e=new QTimer;
    qDebug()<<"eeeeeeeeeeeeeeeeeeee";
    connect(time_e,SIGNAL(timeout()),this,SLOT(add_enemy()));
    time_e->start(10);
    qDebug()<<"eeeeeeeeeeeeeeeeeeee";*/


    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800,800);
    scene->setSceneRect(0,0,800,800);
    view->show();


}
/*void Game::add_goal(){

    if (b<=0){
        Goal * go1=new Goal;
        int c=rand()%6;
        switch (c) {
        case 1:

            go1->setPos(90,90);
            scene()->addItem(go1);

            break;
        case 2:
            go1->setPos(90,90);
            scene()->addItem(go1);
            break;
        case 3:
            go1->setPos(90,90);
            scene()->addItem(go1);
            break;
        case 4:
            go1->setPos(90,90);
            scene()->addItem(go1);
            break;
        case 5:
            go1->setPos(90,90);
            scene()->addItem(go1);
            break;
        case 6:
            go1->setPos(90,90);
            scene()->addItem(go1);
            break;
        }
    }

}*/


