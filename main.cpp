
#include "Application.h"
#include <QApplication>
#include <QtWidgets/QGridLayout>


using namespace std;


int main(int argc, char *argv[]) {

    QApplication w(argc, argv);
    Application a = Application();
    //Info info;
    a.Read(1);
    a.Window();
    a.resize(540, 650);
    a.setWindowTitle("TecFlix");
    a.show();

    return w.exec();

    }


