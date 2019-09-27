//
// Created by ashley on 29/8/19.
//

#include "Application.h"
#include "Info.h"


using namespace std;


size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
    size_t written;
    written = fwrite(ptr, size, nmemb, stream);
    return written;
}

void Application::Window(QWidget *parent) {

    movie1 = new QPushButton("", this);
    movie1->setGeometry(40, 50, 120, 190);
    connect(movie1, &QPushButton::clicked, this, &Application::info_movie1);

    movie2 = new QPushButton("", this);
    movie2->setGeometry(210, 50, 120, 190);
    connect(movie2, &QPushButton::clicked, this, &Application::info_movie2);

    movie3 = new QPushButton("", this);
    movie3->setGeometry(380, 50, 120, 190);
    connect(movie3, &QPushButton::clicked, this, &Application::info_movie3);


    movie4 = new QPushButton("", this);
    movie4->setGeometry(40, 250, 120, 190);
    connect(movie4, &QPushButton::clicked, this, &Application::info_movie4);

    movie5 = new QPushButton("", this);
    movie5->setGeometry(210, 250, 120, 190);
    connect(movie5, &QPushButton::clicked, this, &Application::info_movie5);

    movie6 = new QPushButton("", this);
    movie6->setGeometry(380, 250, 120, 190);
    connect(movie6, &QPushButton::clicked, this, &Application::info_movie6);

    movie7 = new QPushButton("", this);
    movie7->setGeometry(40, 450, 120, 190);
    connect(movie7, &QPushButton::clicked, this, &Application::info_movie7);

    movie8 = new QPushButton("", this);
    movie8->setGeometry(210, 450, 120, 190);
    connect(movie8, &QPushButton::clicked, this, &Application::info_movie8);

    movie9= new QPushButton("", this);
    movie9->setGeometry(380, 450, 120, 190);
    connect(movie9, &QPushButton::clicked, this, &Application::info_movie9);

    sgt = new QPushButton("Siguiente", this);
    sgt->setGeometry(435, 0, 100, 45);
    connect(sgt, &QPushButton::clicked, this, &Application::Next_page);

    anterior = new QPushButton("Anterior", this);
    anterior->setGeometry(5, 0, 100, 45);
    connect(anterior, &QPushButton::clicked, this, &Application::Previous_page);

    for (int i= 0; i<=9 ; i++) {

        string cont = to_string(i);
        string path = "/home/ashley/CLionProjects/TecFlix/poster" + cont + ".jpg";
        //cout << path << endl;
        QPixmap pixi(path.c_str());
        QPixmap pix = pixi.scaled(120, 190, Qt::IgnoreAspectRatio);
        QIcon ButtonIcon(pix);


        switch (i){
            case 1:
                movie1->setIcon(ButtonIcon);
                movie1->setIconSize(movie1->rect().size());
                break;

            case 2:
                movie2->setIcon(ButtonIcon);
                movie2->setIconSize(movie1->rect().size());
                break;

            case 3:
                movie3->setIcon(ButtonIcon);
                movie3->setIconSize(movie1->rect().size());
                break;
            case 4:
                movie4->setIcon(ButtonIcon);
                movie4->setIconSize(movie1->rect().size());
                break;

            case 5:
                movie5->setIcon(ButtonIcon);
                movie5->setIconSize(movie1->rect().size());
                break;

            case 6:
                movie6->setIcon(ButtonIcon);
                movie6->setIconSize(movie1->rect().size());
                break;
            case 7:
                movie7->setIcon(ButtonIcon);
                movie7->setIconSize(movie1->rect().size());
                break;

            case 8:
                movie8->setIcon(ButtonIcon);
                movie8->setIconSize(movie1->rect().size());
                break;

            case 9:
                movie9->setIcon(ButtonIcon);
                movie9->setIconSize(movie1->rect().size());
                break;
        }
    }




    QLabel* lbl = new QLabel(this);
    lbl->setGeometry(150, 10, 300, 30);
    lbl->setFont(QFont("Segoe UI", 12));
    lbl->setText("¡Escoge tu película favorita!");
}


int Application::Next_page(){
   cout << "Pasando de página ->" << endl;
    for (int i = 1; i <= 9 ; i++) {

        string cont = to_string(*counter);
        string path = "/home/ashley/CLionProjects/TecFlix/poster" + cont + ".jpg";
        //cout << path << endl;
        QPixmap pixi(path.c_str());
        QPixmap pix = pixi.scaled(120, 190, Qt::IgnoreAspectRatio);
        QIcon ButtonIcon(pix);


        string c = to_string(*counter - 18);
        string path2 = "/home/ashley/CLionProjects/TecFlix/poster" + c + ".jpg";
        int n = path2.length();
        char ruta[n + 1];
        strcpy(ruta, path2.c_str());
        remove(ruta);
        *counter += 1;

        switch (i){
            case 1:
                movie1->setIcon(ButtonIcon);
                movie1->setIconSize(movie1->rect().size());
                break;

            case 2:
                movie2->setIcon(ButtonIcon);
                movie2->setIconSize(movie1->rect().size());
                break;

            case 3:
                movie3->setIcon(ButtonIcon);
                movie3->setIconSize(movie1->rect().size());
                break;
            case 4:
                movie4->setIcon(ButtonIcon);
                movie4->setIconSize(movie1->rect().size());
                break;

            case 5:
                movie5->setIcon(ButtonIcon);
                movie5->setIconSize(movie1->rect().size());
                break;

            case 6:
                movie6->setIcon(ButtonIcon);
                movie6->setIconSize(movie1->rect().size());
                break;
            case 7:
                movie7->setIcon(ButtonIcon);
                movie7->setIconSize(movie1->rect().size());
                break;

            case 8:
                movie8->setIcon(ButtonIcon);
                movie8->setIconSize(movie1->rect().size());
                break;

            case 9:
                movie9->setIcon(ButtonIcon);
                movie9->setIconSize(movie1->rect().size());
                break;
        }

    }
    *page_ptr += 1;
    //cout << *counter << endl;
    //cout << *page_ptr << endl;
    Read(*page_ptr);
    return 0;
}



int Application::Previous_page(){
    if (*page_ptr == 1){
        cout <<"Ya está en la primera página" << endl;

    }else {
        cout << "Pasando de página <-" << endl;
        *counter -= 18;
        for (int i = 1; i <= 9; i++) {

            string cont = to_string(*counter);
            string path = "/home/ashley/CLionProjects/TecFlix/poster" + cont + ".jpg";
            //cout << path << endl;
            QPixmap pixi(path.c_str());
            QPixmap pix = pixi.scaled(120, 190, Qt::IgnoreAspectRatio);
            QIcon ButtonIcon(pix);

            string c = to_string(*counter + 18);
            string path2 = "/home/ashley/CLionProjects/TecFlix/poster" + c + ".jpg";
            int n = path2.length();
            char ruta[n + 1];
            strcpy(ruta, path2.c_str());
            remove(ruta);
            *counter += 1;

            switch (i) {
                case 1:
                    movie1->setIcon(ButtonIcon);
                    movie1->setIconSize(movie1->rect().size());
                    break;

                case 2:
                    movie2->setIcon(ButtonIcon);
                    movie2->setIconSize(movie1->rect().size());
                    break;

                case 3:
                    movie3->setIcon(ButtonIcon);
                    movie3->setIconSize(movie1->rect().size());
                    break;
                case 4:
                    movie4->setIcon(ButtonIcon);
                    movie4->setIconSize(movie1->rect().size());
                    break;

                case 5:
                    movie5->setIcon(ButtonIcon);
                    movie5->setIconSize(movie1->rect().size());
                    break;

                case 6:
                    movie6->setIcon(ButtonIcon);
                    movie6->setIconSize(movie1->rect().size());
                    break;
                case 7:
                    movie7->setIcon(ButtonIcon);
                    movie7->setIconSize(movie1->rect().size());
                    break;

                case 8:
                    movie8->setIcon(ButtonIcon);
                    movie8->setIconSize(movie1->rect().size());
                    break;

                case 9:
                    movie9->setIcon(ButtonIcon);
                    movie9->setIconSize(movie1->rect().size());
                    break;
            }

        }
        *page_ptr -= 1;
        cout << *counter << endl;
        cout << *page_ptr << endl;
        Read(-*page_ptr);

    }
    return 0;
}


void Application::gethtml(string url_imdb , int i) {
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
        getimage_url(buffer, i );
        delete [] buffer;

    }

}

string Application::getimage_url(string html, int i) {

    string urltemp;
    string url;
    urltemp = html.substr(html.find("<link rel='image_src' href=", 0)+28);
    url= urltemp.substr(0, urltemp.find(".jpg",0)+4);
    //cout << "url de la imagen " << url << endl;
    download_image(url, i);
    return url;

}

void Application::download_image(string url_image, int i){
    CURL* curl;
    FILE* fs;
    CURLcode res;

    string cont = to_string(i);
    string path = "/home/ashley/CLionProjects/TecFlix/poster" + cont + ".jpg";

    curl = curl_easy_init();
    int n = url_image.length();
    char url[n + 1];
    strcpy(url, url_image.c_str());

    if (curl)
    {
        fs = fopen(path.c_str(), "wb");
        curl_easy_setopt(curl, CURLOPT_URL, url);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, fs);
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);
        fclose(fs);
    }
}


void Application::page_1(){

    for (int i= 1; i <= 18; i++) {
        if (i<=9){
            gethtml(current->obt_pos(i).get_movie_imdb_link(), i);
        }else{
            gethtml(next->obt_pos(i-9).get_movie_imdb_link(), i);
        }

    }
}

void Application::page(){
    int c = *counter;
    for (int i = 1; i <= 9; i++) {
        gethtml(next->obt_pos(i).get_movie_imdb_link(), c);
        //cout << c << endl;
        c++;
    }

}

void Application::page_prev(){

    if (*page_ptr == 1){
        cout << "No se carga página previa" << endl;


    }else {
        int c = *page_ptr*9-17;
        for (int i = 1; i <= 9; i++) {
            gethtml(prev->obt_pos(i).get_movie_imdb_link(), c);
            c++;
        }
    }
}


void Application::Read(int n) {

    ifstream ip;
    ip.open("data2.csv");

    if (!ip.is_open()) std::cout << "ERROR: File Open" << "\n";

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

    if (n == 1) {

        for (int i = 0; i <= 18; i++) {

            if (i == 0) {

                getline(ip, line, '\n');

            } else {

                if (i < 9 * n - 9) {
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

                    Movie peli = Movie();
                    peli.set_movie_title(movie_title);
                    peli.set_director_name(director_name);
                    peli.set_actor_1_name(actor_1_name);
                    peli.set_actor_2_name(actor_2_name);
                    peli.set_genres(genres);
                    peli.set_title_year(title_year);
                    peli.set_language(language);
                    peli.set_country(country);
                    peli.set_movie_imdb_link(movie_imdb_link);

                    prev->add_end(peli);

                } else {
                    if (i <= 9) {

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

                        Movie peli = Movie();
                        peli.set_movie_title(movie_title);
                        peli.set_director_name(director_name);
                        peli.set_actor_1_name(actor_1_name);
                        peli.set_actor_2_name(actor_2_name);
                        peli.set_genres(genres);
                        peli.set_title_year(title_year);
                        peli.set_language(language);
                        peli.set_country(country);
                        peli.set_movie_imdb_link(movie_imdb_link);

                        current->add_end(peli);

                    } else {
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

                        Movie peli = Movie();
                        peli.set_movie_title(movie_title);
                        peli.set_director_name(director_name);
                        peli.set_actor_1_name(actor_1_name);
                        peli.set_actor_2_name(actor_2_name);
                        peli.set_genres(genres);
                        peli.set_title_year(title_year);
                        peli.set_language(language);
                        peli.set_country(country);
                        peli.set_movie_imdb_link(movie_imdb_link);

                        next->add_end(peli);


                    }
                }
            }

        }
        page_1();
        ip.close();
        //prev->print();
        //current->print();
        //next->print();

    }

    if (n > 1){

        for (int i = 1; i<=9; i++){
            prev->add_end(current->obt_pos(i)) ;
        }
        current->del_all();
        for (int i = 1; i<=9; i++){
            current->add_end(next->obt_pos(i)) ;
        }
        next->del_all();

            for (int i = 0; i < 9 * n + 9; i++) {

                if (i < 9 * n ) {
                    getline(ip, line, '\n');

                }  else {
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

                            Movie peli = Movie();
                            peli.set_movie_title(movie_title);
                            peli.set_director_name(director_name);
                            peli.set_actor_1_name(actor_1_name);
                            peli.set_actor_2_name(actor_2_name);
                            peli.set_genres(genres);
                            peli.set_title_year(title_year);
                            peli.set_language(language);
                            peli.set_country(country);
                            peli.set_movie_imdb_link(movie_imdb_link);

                            next->add_end(peli);
                        }
                    }
        //cout << "Llamando a page" << endl;
        page();
                }
    if ( n < 1){

        next->del_all();
        for (int i = 1; i<=9; i++){
            next->add_end(current->obt_pos(i)) ;
        }
        current->del_all();
        for (int i = 1; i<=9; i++){
            current->add_end(prev->obt_pos(i)) ;
        }
        prev->del_all();


        for (int i = 0; i < 9 * abs(n) - 9; i++) {

            if (abs(n) == 2) {
                if (i == 0) {

                    getline(ip, line, '\n');
                }
            }

            if (i < 9 * abs(n) - 18 ) {
                getline(ip, line, '\n');


            }  else {
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

                Movie peli = Movie();
                peli.set_movie_title(movie_title);
                peli.set_director_name(director_name);
                peli.set_actor_1_name(actor_1_name);
                peli.set_actor_2_name(actor_2_name);
                peli.set_genres(genres);
                peli.set_title_year(title_year);
                peli.set_language(language);
                peli.set_country(country);
                peli.set_movie_imdb_link(movie_imdb_link);

                prev->add_end(peli);
            }
        }
        //cout << "Llamando a página previa" << endl;
        page_prev();
    }

}

int Application::info_movie1() {
    Info *info = new Info();
    info->info_object(current->obt_pos(1));
    return 0;
}

int Application::info_movie2() {
    Info *info = new Info();
    info->info_object(current->obt_pos(2));
    return 0;
}

int Application::info_movie3() {
    Info *info = new Info();
    info->info_object(current->obt_pos(3));
    return 0;
}
int Application::info_movie4() {
    Info *info = new Info();
    info->info_object(current->obt_pos(4));
    return 0;
}
int Application::info_movie5() {
    Info *info = new Info();
    info->info_object(current->obt_pos(5));
    return 0;
}
int Application::info_movie6() {
    Info *info = new Info();
    info->info_object(current->obt_pos(6));
    return 0;
}
int Application::info_movie7() {
    Info *info = new Info();
    info->info_object(current->obt_pos(7));
    return 0;
}
int Application::info_movie8() {
    Info *info = new Info();
    info->info_object(current->obt_pos(8));
    return 0;
}
int Application::info_movie9() {
    Info *info = new Info();
    info->info_object(current->obt_pos(9));
    return 0;
}







