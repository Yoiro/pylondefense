#ifndef GAMEBOX_H
#define GAMEBOX_H

#include <QWidget>

class GameBox: public QWidget
{
public:
    //Constructors
    GameBox();
    //Attributes
    float x;
    float y;
    float width;
    float heigth;

    //Inherited Events
    void mousePressEvent(QMouseEvent *event);
};

#endif // GAMEBOX_H
