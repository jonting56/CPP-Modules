#pragma once

#include <iostream>
#include <string>

template <typename T>
void iter(T address, int length, void f(T const &src));

template <typename T>
void add(T& address)
{
    address += 1;
}

template <typename T>
void print(T& address)
{
    std::cout << address;
}