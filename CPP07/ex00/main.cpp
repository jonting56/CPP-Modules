#include "whatever.hpp"

int main ()
{
    int a = 10;
    int b = 20;

    std::cout << "Value of a is " << a << ", value of b is " << b << std::endl;
    swap(a, b); 
    std::cout << "swap is called\n";
    std::cout << "Value of a is " << a << ", value of b is " << b << std::endl;

    float af = 5.5;
    float bf = 2.5;

    std::cout << "Value of af is " << af << ", value of bf is " << bf << std::endl;
    swap(af, bf); 
    std::cout << "swap is called\n";
    std::cout << "Value of af is " << af << ", value of bf is " << bf << std::endl;


    std::cout << "Value of a is " << a << ", value of b is " << b << std::endl;
    std::cout << "The smallest value between a and b is" << min(a, b);

    std::cout << "Value of af is " << af << ", value of bf is " << bf << std::endl;
    std::cout << "The smallest value between af and bf is" << min(af, bf);

    std::cout << "Value of a is " << a << ", value of b is " << b << std::endl;
    std::cout << "The largest value between a and b is" << max(a, b);

    std::cout << "Value of af is " << af << ", value of bf is " << bf << std::endl;
    std::cout << "The largest value between af and bf is" << max(af, bf);
}   