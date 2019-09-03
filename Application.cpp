//
// Created by ashley on 29/8/19.
//
#include <QBrush>
#include <QImage>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGraphicsScene>

#include "Application.h"


 void Application::Window() {
     scene = new QGraphicsScene();
     view = new QGraphicsView(scene);
     view->show();
     view->setFixedSize(1050,700);

}