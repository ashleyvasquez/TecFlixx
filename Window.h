//
// Created by ashley on 17/9/19.
//

#ifndef TECFLIX_WINDOW_H
#define TECFLIX_WINDOW_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>
#include <fstream>
#include <QObject>
#include <QWidget>
#include "string"
#include <iostream>


class Window {
public:
    void CrearVentana();
    QGraphicsView *view;
    QGraphicsScene *scene;

};


#endif //TECFLIX_WINDOW_H
