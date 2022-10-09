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
const string &Convert::getString(void) const
{
	return _str;
}

Convert::operator char()
{
	std::cout << "Char\n ---------" << std::endl;
	if (_str.length() == 1)
	{
		if (!printable_char(_str[0]))
		{
			std::cout << "Non printable char" << std::endl;
		}
		else
		{
			std::cout << _str[0] << std::endl;
			return _str[0];
		}
	}
	else if (_str.length() > 1)
	{
		std::cout << "Longer than a char, can't print soz" << std::endl;
	}
	std::cout << "\n";
	return 0;
}

Convert::operator float()
{
	std::cout << "Float\n ---------" << std::endl;
	float f = 0;
	if (_str == "-inff" || _str == "+inff" || _str == "nanf")
	{
		cout << "Impossible conversion"<< std::endl;
	}
	for (unsigned long i = 0; i < _str.length(); i++)
	{
		if (!printable_char(_str[i]))
		{
			std::cout << "Unable to convert unprintable character" << std::endl;
			return 0;
		}
	}
	try
	{
		f = std::stof(_str);
	}
	catch (const std::invalid_argument& invalid)
	{
		std:: cout << "Unable to print invalid argument" << std::endl;
		return 0;
	}
	if (f)
	std::cout << f <<  "f" << std::endl;
	std::cout << "\n";
	return f;
}

Convert::operator double()
{
	std::cout << "Double\n ---------" << std::endl;
	double d = 0;
	if (_str == "-inf" || _str == "+inf" || _str == "nan")
	{
		std::cout << "Unable to print invalid argument" << std::endl;
		return 0;
	}
	try 
	{
		d = stod(_str);
		cout << d << std::endl; 
	}
	catch (const std::invalid_argument& invalid)
	{			
		std:: cout << "Unable to print invalid argument" << std::endl;
		return 0;
	}
	std::cout << "\n";
	return d;
}


int printable_char(char c)
{
	if (c > 126 || c < 33)
	{
		return 0;	
	}
	return 1;
}