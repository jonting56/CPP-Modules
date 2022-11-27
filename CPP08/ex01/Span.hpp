#pragma once

#include <vector>
#include <algorithm>
#include <limits>
#include <iostream>

class Span
{
    public:
        Span(unsigned int len);
        Span(const Span& src);
        ~Span();

        const Span& operator=(Span const& src);

        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
        void fillSpan(unsigned int start, unsigned int end);

    private:
        std::vector<int> m_vec;
        unsigned int m_max;
};