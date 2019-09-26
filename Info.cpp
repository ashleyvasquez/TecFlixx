//
// Created by ashley on 26/9/19.
//

#include "Info.h"

Info::Info(QWidget *parent) {

    this->resize(400,400);
    QLabel* lbl = new QLabel(this);
    lbl->setGeometry(150, 10, 300, 30);
    lbl->setFont(QFont("Segoe UI", 12));
    lbl->setText("¡Info de la película!");
    this->show();

}