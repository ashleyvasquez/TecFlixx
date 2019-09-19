//
// Created by ashley on 17/9/19.
//

#include "Window.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QFont>


Window::Window(QWidget *parent) : QWidget(parent)
{
    QPushButton* movie1 = new QPushButton("Salir", this);
    movie1->setGeometry(20, 60, 160, 180);

    QPushButton* movie2 = new QPushButton("Salir", this);
    movie2->setGeometry(220, 60, 160, 180);

    QPushButton* movie3 = new QPushButton("Salir", this);
    movie3->setGeometry(420, 60, 160, 180);

    QPushButton* movie4 = new QPushButton("Salir", this);
    movie4->setGeometry(20, 260, 160, 180);

    QPushButton* movie5 = new QPushButton("Salir", this);
    movie5->setGeometry(220, 260, 160, 180);

    QPushButton* movie6 = new QPushButton("Salir", this);
    movie6->setGeometry(420, 260, 160, 180);

    QPushButton* movie7 = new QPushButton("Salir", this);
    movie7->setGeometry(20, 460, 160, 180);

    QPushButton* movie8 = new QPushButton("Salir", this);
    movie8->setGeometry(220, 460, 160, 180);

    QPushButton* movie9= new QPushButton("Salir", this);
    movie9->setGeometry(420, 460, 160, 180);

    movie1->setWindowIcon(QIcon(":/icon/designer.png"));


    //connect(btn, &QPushButton::clicked, this, &QWidget::close);

    QLabel* lbl = new QLabel(this);
    lbl->setGeometry(200, 10, 300, 30);
    lbl->setFont(QFont("Segoe UI", 12));
    lbl->setText("¡Escoge tu película favorita!");
}

