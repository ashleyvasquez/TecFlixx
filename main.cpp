#include <iostream>
#include "Application.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include "List.h"
#include "List.cpp"



using namespace std;

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    Application *a = new Application();
    a->Read();
    a -> Window();
    return app.exec();









}