//
// Created by ashley on 3/9/19.
//

#ifndef TECFLIX_NODE_H
#define TECFLIX_NODE_H
#include <iostream>

using namespace std;

template <class T>

class Node
{
public:
    Node();
    Node(T);
    ~Node();

    Node *next;
    T data;

    void delete_all();
    void print();
};

#endif //TECFLIX_NODE_H
