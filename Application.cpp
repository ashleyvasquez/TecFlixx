//
// Created by ashley on 29/8/19.
//
#include<QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGraphicsScene>
#include <iostream>
#include <fstream>
#include "Application.h"
#include "List.h"
#include "List.cpp"

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

    List<string> list;
    List<string> list_next;

    int ele;
    int dim;
    int pos;

    string line;


    if(ip.good()) {

        for (int i = 0;i < 18; i++) {
            while (i < 9) {
                getline(ip, line, '\n');
                list.add_end(line);
                i++;
            }
            getline(ip, line, '\n');
            list_next.add_end(line);


        }
        list.print();
        list_next.print();



    }
    ip.close();

}
