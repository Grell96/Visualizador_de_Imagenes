#include "iterator.h"

template<class X>
dlinkedlistiterator<X>::dlinkedlistiterator()
{
    current=nullptr;
}
template<class R>
dlinkedlistiterator<R>::dlinkedlistiterator(Nodo<R>*ptr)
{
    current=ptr;
}
template <class A>
A dlinkedlistiterator<A>::operator *()
{
    return current->getdato();
}
template <class B>
dlinkedlistiterator<B> dlinkedlistiterator<B>::operator++()
{
    current=current->getsiguiente();
    return *this;
}
template <class C>
bool dlinkedlistiterator<C>::operator ==
                            (const dlinkedlistiterator<C>& right)const
{
    return(current==right.current);
}
template <class D>
bool dlinkedlistiterator<D>::operator!=(const dlinkedlistiterator<D>& right)const
{
    return(current!=right.current);
}
