//
// Created by ashley on 26/9/19.
//


#include "Info.h"


Info::Info(QWidget *parent) {
    this->resize(600,500);


    QLabel* lbl2 = new QLabel(this);
    lbl2->setGeometry(50, 105, 300, 30);
    lbl2->setFont(QFont("Segoe UI", 12));
    lbl2->setText("Director:");

    QLabel* lbl3 = new QLabel(this);
    lbl3->setGeometry(50, 160, 300, 30);
    lbl3->setFont(QFont("Segoe UI", 12));
    lbl3->setText("Actor Principal:");

    QLabel* lbl4 = new QLabel(this);
    lbl4->setGeometry(50, 215, 300, 30);
    lbl4->setFont(QFont("Segoe UI", 12));
    lbl4->setText("Actor Secundario:");

    QLabel* lbl5 = new QLabel(this);
    lbl5->setGeometry(50, 270, 300, 30);
    lbl5->setFont(QFont("Segoe UI", 12));
    lbl5->setText("Géneros:");

    QLabel* lbl6 = new QLabel(this);
    lbl6->setGeometry(50, 380, 300, 30);
    lbl6->setFont(QFont("Segoe UI", 12));
    lbl6->setText("Año:");

    QLabel* lbl7 = new QLabel(this);
    lbl7->setGeometry(50, 325, 300, 30);
    lbl7->setFont(QFont("Segoe UI", 12));
    lbl7->setText("Lenguaje:");

    QLabel* lbl8 = new QLabel(this);
    lbl8->setGeometry(50, 435, 300, 30);
    lbl8->setFont(QFont("Segoe UI", 12));
    lbl8->setText("País:");

    title = new QLabel(this);
    title->setGeometry(40, 10, 590, 30);
    title->setFont(QFont("Segoe UI", 18));

    director = new QLabel(this);
    director->setGeometry(200, 105, 300, 30);
    director->setFont(QFont("Segoe UI", 12));

    actor_1 = new QLabel(this);
    actor_1->setGeometry(200, 160, 300, 30);
    actor_1->setFont(QFont("Segoe UI", 12));

    actor_2 = new QLabel(this);
    actor_2->setGeometry(200, 215, 300, 30);
    actor_2->setFont(QFont("Segoe UI", 12));

    genres = new QLabel(this);
    genres->setGeometry(200, 270, 300, 30);
    genres->setFont(QFont("Segoe UI", 12));

    year = new QLabel(this);
    year->setGeometry(200, 380, 300, 30);
    year->setFont(QFont("Segoe UI", 12));

    language = new QLabel(this);
    language->setGeometry(200, 325, 300, 30);
    language->setFont(QFont("Segoe UI", 12));

    country = new QLabel(this);
    country->setGeometry(200, 435, 300, 30);
    country->setFont(QFont("Segoe UI", 12));
    this->show();

}


void Info::info_object(Movie peli) {

    string title_temp= peli.get_movie_title();
    int a = title_temp.length();
    char title2[a + 1];
    strcpy(title2, title_temp.c_str());
    title->setText(title2);

    string director_temp= peli.get_director_name();
    int b = director_temp.length();
    char director2[b + 1];
    strcpy(director2, director_temp.c_str());
    director->setText(director2);

    string actor_1_temp= peli.get_actor_1_name();
    int c = actor_1_temp.length();
    char actor_12[c + 1];
    strcpy(actor_12, actor_1_temp.c_str());
    actor_1->setText(actor_12);

    string actor_2_temp= peli.get_actor_2_name();
    int d = actor_2_temp.length();
    char actor_22[d + 1];
    strcpy(actor_22, actor_2_temp.c_str());
    actor_2->setText(actor_22);

    string genres_temp= peli.get_genres();
    int e = genres_temp.length();
    char genres2[e + 1];
    strcpy(genres2, genres_temp.c_str());
    genres->setText(genres2);

    string year_temp= peli.get_title_year();
    int f = year_temp.length();
    char year2[f + 1];
    strcpy(year2, year_temp.c_str());
    year->setText(year2);

    string language_temp= peli.get_language();
    int h = language_temp.length();
    char language2[h + 1];
    strcpy(language2, language_temp.c_str());
    language->setText(language2);

    string country_temp= peli.get_country();
    int i = country_temp.length();
    char country2[i + 1];
    strcpy(country2, country_temp.c_str());
    country->setText(country2);


}
