//
// Created by ashley on 3/9/19.
//

#ifndef TECFLIX_NODE_H
#define TECFLIX_NODE_H
#include <iostream>
#include "Movie.h"

using namespace std;

class Node
{
public:
    Node();
    Node(Movie m);
    ~Node();

    Node *next;
    Movie data;

    void delete_all();
    void print(Movie m);
};

#endif //TECFLIX_NODE_H
