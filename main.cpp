#include <iostream>
#include "Application.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include "List.cpp"
#include "Window.h"

using namespace std;


int main(int argc, char *argv[]) {


    Application *a = new Application();
    a->Read(2);
    //a->gethtml();
    QApplication app(argc, argv);
    Window *w = new Window();
    w -> CrearVentana();
    return app.exec();









}