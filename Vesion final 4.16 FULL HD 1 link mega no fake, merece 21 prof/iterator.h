#ifndef ITERATOR_H
#define ITERATOR_H

#include "Nodo.h"


template <class T>
class dlinkedlistiterator
{
    Nodo<T>*current;
public:
    dlinkedlistiterator();
    dlinkedlistiterator(Nodo<T>*ptr);
    T operator*();
    dlinkedlistiterator<T> operator++();
    bool operator==(const dlinkedlistiterator<T> &right)const;
    bool operator!=(const dlinkedlistiterator<T> &right)const;


};

#endif // ITERATOR_H
