#ifndef SCORE_H
#define SCORE_H
#include <QgraphicsItem>
#include <QObject>

class Score:public QGraphicsTextItem
{
public:
    Score(QGraphicsItem * parent=0);
    void increase();
    void ammoshot();
    int getscore();
    int getammo();
private:
    int score;
    int ammo;
};

#endif // SCORE_H
