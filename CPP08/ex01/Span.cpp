#include "Span.hpp"

Span::Span(unsigned int len)
    : m_max(len)
{
}

void Span::addNumber(int num)
{
    if (m_vec.size() >= m_max) {
        throw("Span has hit max capacity");
        return;
    }
    m_vec.push_back(num);
}

void Span::fillSpan(unsigned int start, unsigned int end)
{
    if (end < start) {
        std::cout << "Invalid span" << std::endl;
        return;
    }
    while (start != end) {
        m_vec.push_back(start++);
    }
}

int Span::shortestSpan()
{
    if (m_vec.size() < 2) {
        throw "Span is either empty or only contains one value";
    }
    std::sort(m_vec.begin(), m_vec.end());
    std::vector<int>::iterator max = std::max_element(m_vec.begin(), m_vec.end());
    int min = *max;
    for (unsigned int i = 1; i < m_vec.size(); i++) {
        if (m_vec[i] - m_vec[i - 1] < min) {
            min = m_vec[i] - m_vec[i - 1];
        }
    }
    return min;
}

int Span::longestSpan()
{
    if (m_vec.size() < 2) {
        throw "Span is either empty or only contains one value";
    }
    std::vector<int>::iterator min = std::min_element(m_vec.begin(), m_vec.end());
    std::vector<int>::iterator max = std::max_element(m_vec.begin(), m_vec.end());
    return (*max - *min);
}

Span::~Span()
{
}

const Span& Span::operator=(Span const& src)
{
    m_vec = src.m_vec;
    m_max = src.m_max;
    return *this;
}

Span::Span(const Span& src)
    : m_vec(src.m_vec)
    , m_max(src.m_max)
{
}
