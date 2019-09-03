//
// Created by ashley on 29/8/19.
//
#include<QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGraphicsScene>
#include <iostream>
#include <fstream>
#include "Application.h"

using namespace std;


 void Application::Window() {
     scene = new QGraphicsScene();
     view = new QGraphicsView(scene);
     view->show();
     view->setFixedSize(1050,700);

}

void Application::Read() {

    ifstream ip;
    ip.open("data.csv");

    if(!ip.is_open()) std::cout << "ERROR: File Open" << "\n";

    string nombre;
    string apellido;
    string edad;
    string peso;

    while(ip.good()){

        getline(ip, nombre,',');
        getline(ip,apellido,',');
        getline(ip,edad,',');
        getline(ip, peso,'\n');

        std::cout << "Name: "<<nombre<< " "<<apellido<< '\n';
        std::cout << "Age: "<<edad << '\n';
        std::cout << "Weight: "<<peso<< '\n';
        std::cout << "-------------------" << '\n';


    }
    ip.close();




}
