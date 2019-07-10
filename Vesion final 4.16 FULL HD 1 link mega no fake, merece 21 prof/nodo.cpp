#include "Nodo.h"
template <class T>
Nodo<T>::Nodo(Imagen_ x){
    dato=x;
    sig=nullptr;
    ante=nullptr;
}
