//
// Created by ashley on 26/9/19.
//

#ifndef TECFLIX_INFO_H
#define TECFLIX_INFO_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <iostream>
#include <fstream>
#include <QObject>
#include <QWidget>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QFont>
#include <QtWidgets/QGridLayout>
#include "Movie.h"

class Info: public QWidget {

public:
    QLabel *title;
    QLabel *director;
    QLabel *actor_1;
    QLabel *actor_2;
    QLabel *genres;
    QLabel *year;
    QLabel *language;
    QLabel *country;

    Info(QWidget *parent = 0);
    void info_object(Movie peli);
};


#endif //TECFLIX_INFO_H
