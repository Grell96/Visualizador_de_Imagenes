
#ifndef LINKED_LIST
#define LINKED_LIST

#include <iostream>

using namespace std;

template <class T>
class linked_list;

template <class T>
class node
{
    private:
        T dato;
        node<T> * p_next;

    public:
        node(const T & d, node<T> * n = NULL);
        node();
        virtual ~node();
        void print();

    friend class linked_list<T>;
};

template <class T>
class linked_list
{
    private:
        node<T> * p_head;
        node<T> * p_last;
        node<T> * actual;
        int count;

    public:
        linked_list();
        virtual ~linked_list();
        void insert_front(const T & d);
        void insert_back(const T & d);
        bool find(const T & d);
        void remove_front();
        void remove_back();
        void reverse();
        T getFirstDato();
        T getLastDato();
        T Back(){
            if(!p_head )
        {
            throw std::out_of_range("Can't return value from empty list");
        }
        return p_last->dato;
        }




        int _size(node<T> *n){
            while (n != NULL) {
                ++count;
                n = n->p_next;
            }
        }
        int size(){
            _size(p_head);
            return count;
        }

        T Begin()
        {
            return p_head->dato;
        }

        T avanazar()
        {
            node<T> *aux;
            node<T> *tmp;
            aux=p_head->p_next;
            actual=p_head->p_next;
            tmp=p_head;

            return tmp->dato=aux->dato;
        }


        T retoceder(){
            node<T> *tmp= p_head;
            node<T> *tmp2;
            while(tmp->p_next!=actual){
                tmp2=tmp;
                tmp=tmp->p_next;
            }
            tmp2->p_next=NULL;
            delete tmp;
        }


        void print();

        class iterator
        {
            node<T> * n;

            public:
            iterator (node<T> * _n=nullptr): n(_n) {}

            iterator & operator ++()
            {
                n = n->p_next;
            }

            bool operator  != (const iterator & it)
            {
                return n != it.n;
            }

            const T & operator *()

            {
                return n->dato;
            }
        };
            const iterator begin()
            {
            return p_head;
            }

            const iterator end(){

            return NULL;
            }
};

template<class T>
 node<T>::node(const T & d, node<T> * n )
{
    dato = d;
    p_next =n;
}
template<class T>
node<T>::node()
{
    p_next = NULL;
}
template<class T>
node<T>::~node()
{
    if(p_next)
        delete p_next;
}
template<class T>
void node<T>::print()
{
    cout<<dato<<" -> ";
}


template<class T>
linked_list<T>::linked_list(){
    p_head=NULL;
    p_last=NULL;
}
template<class T>
linked_list<T>::~linked_list(){

}
template<class T>
void linked_list<T>::insert_front(const T & d){
    if(!p_head){
        p_head=new node<T>(d);
        p_last=p_head;
        return;
    }
    node<T> *tmp;
    tmp=new node<T>(d,p_head);
    p_head=tmp;
}
template<class T>
void linked_list<T>::insert_back(const T & d){
    node<T> *tmp;
    tmp=new node<T>(d);
    if(!p_head){
        p_head=tmp;
        p_last=tmp;
        return;
    }
    p_last->p_next=tmp;
    p_last=tmp;
}
template<class T>
bool linked_list<T>::find(const T & d){
    node<T> *p=p_head;
    while (p!=p_last){
        if(p->dato==d){
            return 1;
        }
    }
    return 0;

}
template<class T>
void linked_list<T>::remove_front(){
    if(p_head != NULL){
            if(p_head->p_next != NULL){
                node<T> *tmp = p_head;
                p_head = tmp->p_next;
                tmp->p_next=NULL;
                delete tmp;
            }
            else {
                p_head = NULL;
            }
    }
}
template<class T>
void linked_list<T>::remove_back(){
    node<T> *tmp= p_head;
    node<T> *tmp2;
    while(tmp->p_next){
        tmp2=tmp;
        tmp=tmp->p_next;
    }
    tmp2->p_next=NULL;
    delete tmp;
}
template<class T>
void linked_list<T>::reverse(){
    if(p_head == NULL) return;

    node<T> *back = NULL, *tmp = NULL, *forward = NULL;
    tmp = p_head;
    while(tmp){
        forward = tmp->p_next;
        tmp->p_next = back;
        back = tmp;
        tmp = forward;
    }
    p_head = back;
}
template<class T>
T linked_list<T>::getFirstDato(){
    return p_head->dato;
}
template<class T>
T linked_list<T>::linked_list::getLastDato(){
    return p_last->dato;
}
template<class T>
void linked_list<T>::print(){
    node<T> *tmp= p_head;
    while(tmp){
        cout<<tmp->dato<<"->";
        tmp=tmp->p_next;
    }
    cout<<endl;
}


#endif
