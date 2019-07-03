#include "doublelinkedlist.h"
using namespace std;
template<class T>
DoubleLinkedList<T>::DoubleLinkedList()
{
    inicio=nullptr;
    ultimo=nullptr;
}

template<class T>
void DoubleLinkedList<T>::push_back(Imagen_ a){
    Nodo<T>*nuevo=new  Nodo<T> (a);
    if(inicio==nullptr){
        inicio=nuevo;
        ultimo=nuevo;
        ultimo->sig=inicio;
        inicio -> ante=ultimo;
        //cout<<inicio->dato<<endl;
        return;
    }
    else{
        ultimo->sig=nuevo;
        nuevo ->ante=ultimo;
        ultimo=nuevo;
        inicio->ante=ultimo;
        ultimo->sig=inicio;

    }


}
template <class T>
int DoubleLinkedList<T>::size(){
    Nodo<T> *actual=inicio;
    int con=0;
    while(actual->dato.titulo!=ultimo->dato.titulo){
        con++;
        actual=actual->sig;
    }
    return con+1;
}
template<class T>
void DoubleLinkedList<T>::show(){
    Nodo<T> *actual;
    actual=inicio;
    cout<<"Los elementos son"<<endl;
    cout<<actual->dato.titulo<<" ";
    actual=actual->sig;
    while(actual!=inicio){
        cout<<actual->dato.titulo<<" ";
        actual=actual->sig;
    }
    cout<<endl;


}
template<class T>
void DoubleLinkedList<T>::deleteN(string x){
    Nodo<T> *actual;
    actual=inicio;
    if(x==inicio->dato.titulo){
         inicio=inicio->sig;
         inicio->ante=ultimo;
         ultimo->sig=inicio;
         delete actual;
         return;
    }
     if(x==ultimo->dato.titulo){
        Nodo<T>*temporal=ultimo;

         actual=ultimo->ante;
         actual->sig=inicio;
         inicio->ante=actual;
         ultimo=actual;
         delete temporal;
         return;
    }
    actual=actual->sig;
    while(actual->dato.titulo!=x && actual!=inicio){
        actual=actual->sig;
    }
    if(actual==inicio){
        cout<<"NO ESTA"<<endl;
        return ;
    }
    actual->sig->ante=actual->ante;
    actual->ante->sig=actual->sig;
    delete actual;


}
template <class T>
void DoubleLinkedList<T>::showAll(){
    Nodo<T>*actual;
    actual=inicio;
    for(int i=0;i<this->tam();i++){
        cout<<"Anterior: "<<actual->ante->dato.titulo<<" Actual: "<<actual->dato.titulo<<" Siguiente: "<<actual->sig->dato.titulo<<endl;
        actual= actual->sig;


    }

}





