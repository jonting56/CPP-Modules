#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <stdint.h>


class Data{
	public:
		Data();
		~Data();

		Data(std::string str);
		Data(const Data& src);
		Data& operator=(const Data& src);

		std::string getValue() const;
		

	private:
		std::string m_value;
};

#endif