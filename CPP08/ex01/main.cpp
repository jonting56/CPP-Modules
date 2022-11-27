#include "Span.hpp"
#include <iostream>
int main()
{
    std::cout << "Creating Span class with length 10,000" << std::endl;

    Span test(10000);
    test.fillSpan(10, 10010);

    std::cout << test.shortestSpan() << std::endl;

    std::cout << test.longestSpan() << std::endl;
}