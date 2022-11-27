#pragma once

#include <iostream>
#include <algorithm>

template <typename T>

void easyfind(T arr, int num)
{
    typename T::iterator end = arr.end();

    typename T::iterator iter = std::find(arr.begin(), arr.end(), num);
    if (iter == end) {
        throw std::string("Unable to find number");
        return;
    }
    std::cout << "Found number: " << num << std::endl;
}