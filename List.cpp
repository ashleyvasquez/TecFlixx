//
// Created by ashley on 3/9/19.
//

#include "List.h"

using namespace std;

// Constructor por defecto
template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}

// Insertar al inicio
template<typename T>
void List<T>::add_head(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;

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
template<typename T>
void List<T>::del_all()
{
    m_head->delete_all();
    m_head = 0;
}

// Eliminar al inicio
template<typename T>
void List<T>::del()
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;

    m_head = temp->next;

}

//Edita por posición
template<typename T>
void List<T>::edit_pos(int pos, T data_) {

    Node<T> *aux;
    Node<T> *new_node = new Node<T> (data_);
    int i=1;
    aux = m_head;
    while(i!=pos){
        aux=aux->next;
        i++;
    }
    aux->data = new_node->data;


}

// Obtener por posición del nodo
template<typename T>
int List<T>::obt_pos(int pos)
{
    Node<T> *aux;
    int i = 1;
    aux = m_head;
    while(i!=pos){
        aux = aux->next;
        i++;
    }
    cout << "El puntero en esa posición de la lista es " << aux->print() << endl;
    return aux->data;

}

// Insertar al final
template<typename T>
void List<T>::add_end(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;

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


// Llenar la Lista por teclado
template<typename T>
void List<T>::fill_by_user(int dim)
{
    T ele;
    for (int i = 0; i < dim; i++) {
        cout << "Ingresa el elemento " << i + 1 << endl;
        cin >> ele;
        add_end(ele);
    }

}


// Imprimir la Lista
template<typename T>
void List<T>::print()
{
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
            temp = temp->next;
        }
    }
    cout << endl << endl;
}

template<typename T>
List<T>::~List() {}