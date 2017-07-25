#ifndef MENUSCENE_H
#define MENUSCENE_H

#include "scene.h"
#include "gamebox.h"
#include <QList>
#include <QWidget>
#include <QPushButton>

class MenuView : public Scene
{
private:
    //Attributes
    QPushButton* btnQuit;
    QPushButton* btnLoad;
    QPushButton* btnSelectMap;
public:
    //Constructors
    MenuView();
    //Attributes
    QList<GameBox*> boxes;
};

#endif // MENUSCENE_H
