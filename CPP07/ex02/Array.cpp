#include "Array.hpp"

template <typename T>
Array::Array()
{
   m_array = new T[1];
   m_n = 0; 
}
template <typename T>
Array::Array(unsigned int n): m_n(n)
{
    m_array = new T[n];
}
template <typename T>
Array::Array(const Array& src)
{

}
template <typename T>
Array::~Array()
{
    delete [] m_array;
}

template <typename T>
T Array::getArray()
{
    return m_array;
}
template <typename T>
Array& Array::operator=(const Array& src)
{
    m_array = src.m_array;
    m_n = src.m_n;
    return *this;
}
template <typename T>
T& Array::operator[](int i)
{
    if (i < 0)
        throw (std::exception());
    else   
        return (*(m_array + i));
}
template <typename T>
int Array::getSize()
{
    int i = 0;
    while ( i < m_array.length())
        i++;
    return i;
}