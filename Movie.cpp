//
// Created by ashley on 16/9/19.
//

#include "Movie.h"
using namespace std;

void Movie::set_movie_title(string a){
    movie_title = a;

}
void Movie::set_director_name(string a){
    director_name = a;


}
void Movie::set_actor_1_name(string a){
    actor_1_name= a;

}
void Movie::set_actor_2_name(string a){
    actor_2_name= a;

}
void Movie::set_genres(string a){
   genres= a;

}
void Movie::set_title_year(string a){
   title_year= a;

}
void Movie::set_language(string a){
    language= a;

}
void Movie::set_country(string a){
    country= a;

}
void Movie::set_movie_imdb_link(string a){
    movie_imdb_link = a;
}

string Movie::get_movie_title() {
    return movie_title;
}
string Movie::get_director_name(){
        return director_name;
    }
string Movie::get_actor_1_name(){
        return actor_1_name;
    }
string Movie::get_actor_2_name(){
        return actor_2_name;
    }
string Movie::get_genres(){
        return genres;
    }
string Movie::get_title_year(){
        return title_year;
    }
string Movie::get_language(){
        return language;
    }
string Movie::get_country(){
        return country;
    }
string Movie::get_movie_imdb_link(){
        return movie_imdb_link;
    }
