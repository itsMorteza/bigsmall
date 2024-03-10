#ifndef PLAYER_H
#define PLAYER_H
#include <QtMultimedia/QMediaPlayer>
#include <QObject>
#include <QGraphicsRectItem>
#include <QTimer>
#include <QKeyEvent>
#include <QGraphicsPixmapItem>
#include <QPropertyAnimation>

class player : public QObject, public QGraphicsPixmapItem
{
    Q_OBJECT
    double speed_y,acc;
    int speed_x;
    int health,l;
    bool w;
    int ammo;
public:
    player();
    int js;
    void damage();
    void move_right();
    void move_left();
    void jump();
    void power();
    int length_teller();

    bool side_teller();
    //~player();


public slots:
    void add_enemy();
    void move();
    void gravity();
    void keyPressEvent(QKeyEvent * event);
    void changesize();

};

#endif // PLAYER_H
