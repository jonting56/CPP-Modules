#include "Data.hpp"

Data::Data()
{
	m_value = "value";
}

Data::~Data()
{
}

Data::Data(std::string str): m_value(str)
{
}

Data::Data(const Data& src)
{
	m_value = src.m_value;
}

Data& Data::operator=(const Data& src)
{
	m_value = src.getValue();
	return *this;
}

std::string Data::getValue() const
{
	return m_value;
}

