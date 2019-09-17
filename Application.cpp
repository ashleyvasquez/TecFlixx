//
// Created by ashley on 29/8/19.
//

#include<QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGraphicsScene>
#include <iostream>
#include "Application.h"
#include "List.h"
#include "List.cpp"
#include "Movie.h"

using namespace std;


 void Application::Window() {
     scene = new QGraphicsScene();
     view = new QGraphicsView(scene);
     view->show();
     view->setFixedSize(1050,700);
}

void Application::Read(int n) {

    ifstream ip;
    ip.open("data2.csv");

    if(!ip.is_open()) std::cout << "ERROR: File Open" << "\n";

    List<Movie> list;









    List<string> list_next;


    string color;
    string director_name;
    string num_critic_for_reviews;
    string duration;
    string director_facebook_likes;
    string actor_3_facebook_likes;
    string actor_2_name;
    string actor_1_facebook_likes;
    string gross;
    string genres;
    string actor_1_name;
    string movie_title;
    string num_voted_users;
    string cast_total_facebook_likes;
    string actor_3_name;
    string facenumber_in_poster;
    string plot_keywords;
    string movie_imdb_link;
    string num_user_for_reviews;
    string language;
    string country;
    string content_rating;
    string budget;
    string title_year;
    string actor_2_facebook_likes;
    string imdb_score;
    string aspect_ratio;
    string movie_facebook_likes;

    string line;

    int i = 0;
    while(ip.good()) {


        if (i < 9*n-9){
            getline(ip, line, '\n');
            i++;
        }

        else{
            if ( i <= 9*n) {

                getline(ip, color, ',');
                getline(ip, director_name, ',');
                getline(ip, num_critic_for_reviews, ',');
                getline(ip, duration, ',');
                getline(ip, director_facebook_likes, ',');
                getline(ip, actor_3_facebook_likes, ',');
                getline(ip, actor_2_name, ',');
                getline(ip, actor_1_facebook_likes, ',');
                getline(ip, gross, ',');
                getline(ip, genres, ',');
                getline(ip, actor_1_name, ',');
                getline(ip, movie_title, ',');
                getline(ip, num_voted_users, ',');
                getline(ip, cast_total_facebook_likes, ',');
                getline(ip, actor_3_name, ',');
                getline(ip, facenumber_in_poster, ',');
                getline(ip, plot_keywords, ',');
                getline(ip, movie_imdb_link, ',');
                getline(ip, num_user_for_reviews, ',');
                getline(ip, language, ',');
                getline(ip, country, ',');
                getline(ip, content_rating, ',');
                getline(ip, budget, ',');
                getline(ip, title_year, ',');
                getline(ip, actor_2_facebook_likes, ',');
                getline(ip, imdb_score, ',');
                getline(ip, aspect_ratio, ',');
                getline(ip, movie_facebook_likes, '\n');

                i++;
                Movie *i = new Movie();
                i->set_movie_title(movie_title);
                i->set_director_name(director_name);
                i->set_actor_1_name(actor_1_name);
                i->set_actor_2_name(actor_2_name);
                i->set_genres(genres);
                i->set_title_year(title_year);
                i->set_language(language);
                i->set_country(country);
                i->set_movie_imdb_link(movie_imdb_link);
                list.add_end(*i);
                cout << i->get_director_name() << endl;

            }
            else{
                break;
            }

        }
        }
    ip.close();

}
