//
// Created by ashley on 17/9/19.
//

#include "Window.h"
#include<QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGraphicsScene>

void Window::CrearVentana() {
    scene = new QGraphicsScene();
    view = new QGraphicsView(scene);
    view->show();
    view->setFixedSize(1050,700);
}

