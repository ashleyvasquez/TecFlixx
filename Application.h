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
#include <string>
#include <iostream>
#include <curl/curl.h>
#include <cstdio>
#include <cstring>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QFont>
#include "List.h"
#include "Movie.h"
#include "Paginacion.h"

using namespace std;

class Application : public QWidget{

public:


    int *pagina = new int (1);
    void Window(QWidget *parent = 0);
    void Read(int n);
    void gethtml(string url_imdb , int i);
    string getimage_url(string html, int i);
    void download_image(string url_image, int i);
    void paginacion(List anterior, List actual , List siguiente);

};


#endif //TECFLIX_APPLICATION_H
