
#include "Application.h"
#include <QApplication>
#include <QtWidgets/QGridLayout>
#include "Window.h"

using namespace std;


int main(int argc, char *argv[]) {

    QApplication w(argc, argv);
    Window window;
    window.resize(600, 650);
    window.setWindowTitle("TecFlix");
    window.show();
    Application a = Application();
    a.Read(3);
    return w.exec();





    }


