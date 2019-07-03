#ifndef DOUBLELINKEDLIST_H
#define DOUBLELINKEDLIST_H
#include "Nodo.h"
#include<iostream>

using namespace std;
template<class T>
class DoubleLinkedList
{

public:
    Nodo<T> *inicio;
    Nodo<T> *ultimo;
    void push_back(Imagen_ a);
    int size();
    void show();
    void deleteN(string x);
    void showAll();
    DoubleLinkedList();
};

#endif // DOUBLELINKEDLIST_H
