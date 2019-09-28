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
/**
 * @brief Application es la clase principal que maneja la lógica
 */

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


    /**
     * El método Window genera la ventan principal donde aparecen las películas
     * @param parent
     */
    void Window(QWidget *parent = 0);
    /**
     * El método Read lee el csv y crea los objetos con la clase Movie
     * También realiza el cambio entre lista previa, actual y siguiente
     * @param n es el numero de página en el momento
     */
    void Read(int n);
    /**
     * El método Next_page es llamado al accionar el botón de "siguiente"
     * Carga las imagenes correspondientes, aumenta el número de página y llama a Read para
     * que realice el cambio entre lista previa, actual y siguiente y para que cargue la nueva
     * lista siguiente
     * @return
     */
    int Next_page();
    /**
     * El método Previous_page es llamado al accionar el botón de "anterior"
     * Carga las imagenes correspondientes, aumenta el número de página y llama a Read para
     * que realice el cambio entre lista previa, actual y siguiente y para que cargue la nueva
     * lista previa
     * @return
     */
    int Previous_page();
    /**
     * Descarga el html de la página de cada película
     * @param url_imdb es el url obtenido del csv
     * @param i es un contador para ponerle el nombre a la imagen
     */
    void gethtml(string url_imdb , int i);

    /**
     * getimage_url es un método que busca en el html el lik de la imagen
     * y luego pasa a download_image para que lo descargue
     * @param html es un string con el html de cada película
     * @param i es un contador para ponerle el nombre a la imagen
     * @return el link de la imagen
     */
    string getimage_url(string html, int i);
    /**
     * getvideo_url en un método que obtiene el link del trailer
     * @param html es un string con el html de cada película
     * @param i es un contador para ponerle el nombre a la imagen
     * @return
     */
    string getvideo_url(string html,int i);
    /**
     * download_image es un método que descarga el poster de la película
     * @param url_image es la url de la imagen
     * @param i es un contador para ponerle el nombre a la imagen
     */
    void download_image(string url_image, int i);
    /**
     * page_1 es el encargado de obtener la lista con los objetos películas
     * y decargar los html de las 9 películas en la página 1
     */
    void page_1();
    /**
     * page_1 es el encargado de obtener la lista con los objetos películas
     * y decargar los html de las 9 películas cuando se pasa de página hacia
     * adelante
     */
    void page();
    /**
     * page_1 es el encargado de obtener la lista con los objetos películas
     * y decargar los html de las 9 películas cuando se pasa de página hacia
     * atrás
     */
    void page_prev();
    /**
     * Se llama al presionar el botón 1 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie1();
    /**
     * Se llama al presionar el botón 2 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie2();
    /**
     * Se llama al presionar el botón 3 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie3();
    /**
     * Se llama al presionar el botón 4 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie4();
    /**
     * Se llama al presionar el botón 5 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie5();
    /**
     * Se llama al presionar el botón 6 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie6();
    /**
     * Se llama al presionar el botón 7 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie7();
    /**
     * Se llama al presionar el botón 8 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie8();
    /**
     * Se llama al presionar el botón 9 y crea la ventana con la información
     * de la película
     * @return
     */
    int info_movie9();





};


#endif //TECFLIX_APPLICATION_H
