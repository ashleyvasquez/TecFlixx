//
// Created by ashley on 29/8/19.
//

#ifndef TECFLIX_APPLICATION_H
#define TECFLIX_APPLICATION_H
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtWidgets/QGridLayout>
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


using namespace std;

class Application : public QWidget{

public:

    List *prev = new List;
    List *current = new List;
    List *next = new List;

    QPushButton *movie1;
    QPushButton *movie2;
    QPushButton *movie3;
    QPushButton *movie4;
    QPushButton *movie5;
    QPushButton *movie6;
    QPushButton *movie7;
    QPushButton *movie8;
    QPushButton *movie9;

    QPushButton *sgt;
    QPushButton *anterior;

    int *page_ptr = new int (1);
    int *counter = new int(10);
    int *counter2 = new int(1);
    void Window(QWidget *parent = 0);
    void Read(int n);
    int Next_page();
    int Previous_page();
    void gethtml(string url_imdb , int i);
    string getimage_url(string html, int i);
    void download_image(string url_image, int i);
    void page_1();
    void page();
    void page_prev();
    int info_movie1();
    int info_movie2();
    int info_movie3();
    int info_movie4();
    int info_movie5();
    int info_movie6();
    int info_movie7();
    int info_movie8();
    int info_movie9();





};


#endif //TECFLIX_APPLICATION_H
