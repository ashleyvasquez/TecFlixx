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
#include "string"
#include <iostream>

using namespace std;

class Application{
public:
    void Read(int n);
    void gethtml(string url_imdb);
    string getimage_url(string html);
    void download_image(string url_image);

};


#endif //TECFLIX_APPLICATION_H
