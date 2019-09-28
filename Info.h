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
#include <QtGui/QDesktopServices>
#include "QUrl"
#include "Movie.h"

/**
 * @brief la clase Info crea las ventanas con la informacion de la pelicula
 * @param parent
 */
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

    /**
     * Es el contructor de la clase, crea todos los labels
     * @param parent
     */
    Info(QWidget *parent = 0);
    /**
     * obtiene la información de las películas
     * @param peli
     */
    void info_object(Movie peli);
};


#endif //TECFLIX_INFO_H
