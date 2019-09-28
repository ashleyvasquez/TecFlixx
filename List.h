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
    /**
     * agrega el nodo al inicio de la lista
     */
    void add_head(Movie);
    /**
     * elimina toda la lista
     */
    void del_all();
    /**
     * elimina el primer elemento de la lista
     */
    void del();
    /**
     * edita un elemento de la lista por posición
     */
    void edit_pos(int,Movie);
    /**
     * agrega el nodo al final de la lista
     */
    void add_end(Movie);
    /**
     * obtiene un nodo por posicion
     * @return
     */
    Movie obt_pos(int);
    void print();


private:
    Node *m_head;
    int m_num_nodes;
};


#endif //TECFLIX_LIST_H
