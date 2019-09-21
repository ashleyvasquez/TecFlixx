
#include "Application.h"
#include <QApplication>
#include <QtWidgets/QGridLayout>


using namespace std;


int main(int argc, char *argv[]) {

    QApplication w(argc, argv);
    Application a = Application();
    a.Window();
    a.resize(540, 650);
    a.setWindowTitle("TecFlix");
    a.show();
    a.Read(1);
    return w.exec();

    }


