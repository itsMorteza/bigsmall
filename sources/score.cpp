#include "score.h"
#include <QFont>
#include "game.h"
#include <QDebug>
Score::Score(QGraphicsItem * parent):QGraphicsTextItem(parent)
{
    score=0;
    ammo=10;
    setPlainText(QString("Score : ")+QString::number(score));
    setDefaultTextColor(Qt::PinchGesture);

    setFont(QFont("times",24));

}
int Score::getscore(){return score;}
int Score::getammo(){return ammo;}
void Score::ammoshot(){qDebug()<<"bye"; ammo--;setPlainText(QString("Score : ")+QString::number(score) +QString(" - Ammo : ") + QString::number(ammo));}
void Score::increase(){qDebug()<<"hi";score++;ammo++;setPlainText(QString("Score : ")+QString::number(score) +QString(" - Ammo : ") + QString::number(ammo));}

