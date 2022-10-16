#include "iter.hpp"


template <typename T>
void iter(T address, int length, void f(T const &src))
{
    for (int i=0;i < length; i++)
    {
        f(address[i]);
    }
}

int main()
{
    std::string str = "Hello world";

    int arr[5] = {1,2,3,4,5};

    iter(arr, 5, print);
    std::cout << str << "after applying add function" << std::endl;
    iter(str, str.length(), add);
    std:: cout << str;
}
