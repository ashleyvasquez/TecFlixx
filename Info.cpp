//
// Created by ashley on 26/9/19.
//

#include "Info.h"

Info::Info(QWidget *parent) {
    this->resize(500,500);

    QLabel* lbl = new QLabel(this);
    lbl->setGeometry(50, 50, 300, 30);
    lbl->setFont(QFont("Segoe UI", 12));
    lbl->setText("Título");

    QLabel* lbl2 = new QLabel(this);
    lbl2->setGeometry(50, 105, 300, 30);
    lbl2->setFont(QFont("Segoe UI", 12));
    lbl2->setText("Director");

    QLabel* lbl3 = new QLabel(this);
    lbl3->setGeometry(50, 160, 300, 30);
    lbl3->setFont(QFont("Segoe UI", 12));
    lbl3->setText("Actor Principal");

    QLabel* lbl4 = new QLabel(this);
    lbl4->setGeometry(50, 215, 300, 30);
    lbl4->setFont(QFont("Segoe UI", 12));
    lbl4->setText("Actor Secuandario");

    QLabel* lbl5 = new QLabel(this);
    lbl5->setGeometry(50, 270, 300, 30);
    lbl5->setFont(QFont("Segoe UI", 12));
    lbl5->setText("Géneros");

    QLabel* lbl6 = new QLabel(this);
    lbl6->setGeometry(50, 325, 300, 30);
    lbl6->setFont(QFont("Segoe UI", 12));
    lbl6->setText("Año");

    QLabel* lbl7 = new QLabel(this);
    lbl7->setGeometry(50, 380, 300, 30);
    lbl7->setFont(QFont("Segoe UI", 12));
    lbl7->setText("Lenguaje");

    QLabel* lbl8 = new QLabel(this);
    lbl8->setGeometry(50, 435, 300, 30);
    lbl8->setFont(QFont("Segoe UI", 12));
    lbl8->setText("Pais");

    this->show();

}