//
// Created by ashley on 16/9/19.
//

#ifndef TECFLIX_MOVIE_H
#define TECFLIX_MOVIE_H
#include "string"

using namespace std;

class Movie {
    string movie_title;
    string director_name;
    string actor_1_name;
    string actor_2_name;
    string genres;
    string title_year;
    string language;
    string country;
    string movie_imdb_link;

public:
    void set_movie_title(string a);
    void set_director_name(string a);
    void set_actor_1_name(string a);
    void set_actor_2_name(string a);
    void set_genres(string a);
    void set_title_year(string a);
    void set_language(string a);
    void set_country(string a);
    void set_movie_imdb_link(string a);


    string get_movie_title();
    string get_director_name();
    string get_actor_1_name();
    string get_actor_2_name();
    string get_genres();
    string get_title_year();
    string get_language();
    string get_country();
    string get_movie_imdb_link();


};


#endif //TECFLIX_MOVIE_H
