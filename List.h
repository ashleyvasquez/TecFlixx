//
// Created by ashley on 3/9/19.
//

#ifndef TECFLIX_LIST_H
#define TECFLIX_LIST_H
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Node.h"
#include "Movie.h"

using namespace std;

class List
{
public:
    List();
    ~List();

    void add_head(Movie);
    void del_all();
    void del();
    void edit_pos(int,Movie);
    void add_end(Movie);
    Movie obt_pos(int);
    void print();


private:
    Node *m_head;
    int m_num_nodes;
};


#endif //TECFLIX_LIST_H
