//
// Created by ashley on 16/9/19.
//

#ifndef TECFLIX_MOVIE_H
#define TECFLIX_MOVIE_H
#include "string"
#include <iostream>

using namespace std;

/**
 * @brief la Clase Movie crea objetos con cada película
 */
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
    string url_trailer;

public:
    /**
     * set_movie_title ingresa el título de la película
     * @param a es el título
     */
    void set_movie_title(string a);
    /**
     * set_director_name ingresa el director de la película
     * @param a es el director
     */
    void set_director_name(string a);
    /**
     * set_actor_1_name ingresa el nombre del actor principal de la película
     * @param a es el actor principal
     */
    void set_actor_1_name(string a);
    /**
     * set_actor_2_name ingresa el nombre del actor secundario de la película
     * @param a es el actor secundario
     */
    void set_actor_2_name(string a);
    /**
     * set_genres ingresa el género de la película
     * @param a es el genero
     */
    void set_genres(string a);
    /**
     * set_title_year ingresa el año de la película
     * @param a es el año
     */
    void set_title_year(string a);
    /**
     * set_language ingresa el lenguaje de la película
     * @param a es el lenguaje
     */
    void set_language(string a);
    /**
     * set_country ingresa el país de la película
     * @param a es el país
     */
    void set_country(string a);
    /**
     * set_movie_imdb_link ingresa el link de la película
     * @param a es el link
     */
    void set_movie_imdb_link(string a);
    /**
     * set_movie_imdb_link ingresa el link del trailer
     * @param a es el link
     */
    void set_url_trailer(string a);
    /**
     * Print imprime el objeto
     * @param movie
     */
    void Print(Movie movie);
    Movie();
    /**
     * retirna el link del trailer
     * @return
     */
    string get_url_trailer();
    /**
     * retorna el título de la película
     * @return
     */
    string get_movie_title();
    /**
     * retorna el nombre del director de la película
     * @return
     */
    string get_director_name();
    /**
     * retorna el nombre del actor principal
     * @return
     */
    string get_actor_1_name();
    /**
     * retorna el nombre del actor secundario
     * @return
     */
    string get_actor_2_name();
    /**
     * retorna los generos de la película
     * @return
     */
    string get_genres();
    /**
     * retorna el año de la película
     * @return
     */
    string get_title_year();
    /**
     * retorna el lenguaje de la pelicula
     * @return
     */
    string get_language();
    /**
     * retorna el país de la pelicula
     * @return
     */
    string get_country();
    /**
     * retorna el link de la página
     * @return
     */
    string get_movie_imdb_link();


};


#endif //TECFLIX_MOVIE_H
