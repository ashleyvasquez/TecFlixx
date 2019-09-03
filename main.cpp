#include <iostream>
#include "Application.h"
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    Application *a = new Application();
    a -> Window();
    return app.exec();

}