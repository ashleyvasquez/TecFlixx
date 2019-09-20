//
// Created by ashley on 3/9/19.
//

#include "List.h"


using namespace std;

// Constructor por defecto

List::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Insertar al inicio

void List::add_head(Movie data_)
{
    Node *new_node = new Node (data_);
    Node *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        new_node->next = m_head;
        m_head = new_node;

        while (temp) {
            temp = temp->next;
        }
    }
    m_num_nodes++;
}

// Eliminar todos los nodos

void List::del_all()
{
    m_head->delete_all();
    m_head = 0;
}

// Eliminar al inicio

void List::del()
{
    Node *temp = m_head;
    Node *temp1 = temp->next;

    m_head = temp->next;

}

//Edita por posición

void List::edit_pos(int pos, Movie data_) {

    Node *aux;
    Node *new_node = new Node (data_);
    int i=1;
    aux = m_head;
    while(i!=pos){
        aux=aux->next;
        i++;
    }
    aux->data = new_node->data;


}

// Obtener por posición del nodo

Movie List::obt_pos(int pos)
{
    Node *aux;
    int i = 1;
    aux = m_head;
    while(i!=pos){
        aux = aux->next;
        i++;
    }
    return aux->data;

}

// Insertar al final
void List::add_end(Movie data_)
{
    Node *new_node = new Node (data_);
    Node *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}



// Imprimir la Lista

void List::print()
{
    Node *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print(temp->data);
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
}

List::~List() {}