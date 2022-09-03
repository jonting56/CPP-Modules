#include "Convert.hpp"

Convert::Convert(void)
{
	this->_str = '0';
	cout << "Default convert object made" << endl;
}

Convert::~Convert(void)
{
	cout << "Convert object destroyed" << endl;
}

Convert::Convert(string str): _str(str)
{
	cout << "Convert object made: " << str << endl;
}

