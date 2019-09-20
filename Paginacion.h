//
// Created by ashley on 19/9/19.
//

#ifndef TECFLIX_PAGINACION_H
#define TECFLIX_PAGINACION_H


#include "List.h"
#include "Movie.h"
#include "List.h"

class Paginacion {
public:
    void PaginaAnterior();
    void PaginaActual(List list);
    void PaginaSiguiente();

};


#endif //TECFLIX_PAGINACION_H
