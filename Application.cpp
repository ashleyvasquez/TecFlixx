//
// Created by ashley on 29/8/19.
//
#include <iostream>
#include <curl/curl.h>
#include <cstdio>
#include <cstring>
#include "Application.h"
#include "List.h"
#include "List.cpp"
#include "Movie.h"


using namespace std;

size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written;
    written = fwrite(ptr, size, nmemb, stream);
    return written;
}

void Application::gethtml(string url_imdb) {
    std::string tempname = "temp";
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    url_imdb.insert(4,"s");
    int n = url_imdb.length();
    char url[n + 1];
    strcpy(url, url_imdb.c_str());


    if(curl) {
        FILE *fp = fopen(tempname.c_str(),"wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fp);
        fp = fopen(tempname.c_str(),"rb");
        fseek (fp , 0 , SEEK_END);
        long lSize = ftell (fp);
        rewind(fp);
        char *buffer = new char[lSize+1];
        fread (buffer, 1, lSize, fp);
        buffer[lSize] = 0;
        fclose(fp);
        std::string content(buffer);
        getimage_url(buffer);
        delete [] buffer;

    }

}

string Application::getimage_url(string html) {

    string urltemp;
    string url;
    urltemp = html.substr(html.find("<link rel='image_src' href=", 0)+28);
    url= urltemp.substr(0, urltemp.find(".jpg",0)+4);
    cout << url << endl;
    download_image(url);
    return url;

}


void Application::download_image(string url_image){
    CURL* curl;
    FILE* fs;
    CURLcode res;

    char outfilename[FILENAME_MAX] = "C:\\poster.jpg";
    curl = curl_easy_init();
    int n = url_image.length();
    char url[n + 1];
    strcpy(url, url_image.c_str());
    if (curl)
    {
        fs = fopen(outfilename, "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fs);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fs);
    }
}





void Application::Read(int n) {

        ifstream ip;
        ip.open("data2.csv");

        if (!ip.is_open()) std::cout << "ERROR: File Open" << "\n";

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
        while (ip.good()) {


            if (i < 9 * n - 9) {
                getline(ip, line, '\n');
                i++;
            } else {
                if (i <= 9 * n) {

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
                    gethtml(i->get_movie_imdb_link());

                } else {

                    break;
                }

            }
        }
        ip.close();
    }

