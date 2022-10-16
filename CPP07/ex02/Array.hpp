#pragma once

#include <iostream>

template <typename T>
class Array {
    public:
        Array();
        Array (unsigned int n);
        Array(const Array& src)
        ~Array();

        Array& operator=(const Array &src);
        T& operater[](const Array& src);
        
        T getArray();
        int getSize();


    private:
        T* m_array;
        unsigned int m_n;

};