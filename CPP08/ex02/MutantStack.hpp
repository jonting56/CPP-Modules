#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <deque>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack& src);

    MutantStack& operator=(const MutantStack& src);

    typedef typename std::deque<T>::iterator iterator;

    iterator begin();
    iterator end();

    const iterator cbegin();
    const iterator cend();
};

#include "MutantStack.tpp"

#endif