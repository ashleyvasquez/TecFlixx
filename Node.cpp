//
// Created by ashley on 3/9/19.
//

#include "Node.h"

// Constructor por defecto


Node::Node()
{
    data = Movie();
    next = nullptr;
}

// Constructor por parámetro

Node::Node(Movie data_)
{
    data = data_;
    next = NULL;
}

// Eliminar todos los Nodos

void Node::delete_all()
{
    if (next)
        next->delete_all();
    delete this;
}

// Imprimir un Nodo

void Node::print(Movie movie)
{
    movie.Print(movie);
}


Node::~Node() {}
