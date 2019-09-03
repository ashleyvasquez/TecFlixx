//
// Created by ashley on 29/8/19.
//

#ifndef TECFLIX_APPLICATION_H
#define TECFLIX_APPLICATION_H
#include <QGraphicsScene>
#include <QGraphicsView>

#include <QObject>
#include <QWidget>

class Application{
public:
    void Window();
    QGraphicsView *view;
    QGraphicsScene *scene;

};


#endif //TECFLIX_APPLICATION_H
