//
// Created by ashley on 29/8/19.
//

#ifndef TECFLIX_APPLICATION_H
#define TECFLIX_APPLICATION_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>
#include <fstream>
#include <QObject>
#include <QWidget>

class Application{
public:
    void Window();
    QGraphicsView *view;
    QGraphicsScene *scene;
    void Read(int n);
};


#endif //TECFLIX_APPLICATION_H
