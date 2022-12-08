#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
    : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& src)
    : std::stack<T>()
{
    this->c = src.c;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& src)
{
    this->c = src.c;
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
const typename MutantStack<T>::iterator MutantStack<T>::cbegin()
{
    return this->c.cbegin();
}

template <typename T>
const typename MutantStack<T>::iterator MutantStack<T>::cend()
{
    return this->c.cend();
}
