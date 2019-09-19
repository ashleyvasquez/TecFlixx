#include <iostream>
#include "Application.h"
#include <QApplication>
#include <QWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include "List.cpp"
#include "Window.h"

using namespace std;


int main(int argc, char *argv[]) {

    QApplication w(argc, argv);
    Window window;
    window.resize(600, 650);
    window.setWindowTitle("TecFlix");
    window.show();
    Application *a = new Application();
    //a->Read(2);
    return w.exec();
    }


