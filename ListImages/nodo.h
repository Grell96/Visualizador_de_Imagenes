#ifndef NODO_H
#define NODO_H
#include "Imagen_.h"
template <class T>
class Nodo {
public:
    Imagen_ dato;
    Nodo *sig;
    Nodo *ante;
    Nodo(Imagen_ x);
};
#endif // NODO_H
