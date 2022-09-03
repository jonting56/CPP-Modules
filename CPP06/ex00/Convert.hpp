#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

using std::string;
using std::endl;
using std::cout;

class Convert
{
	private:
		string _str;

	public:
		//Constructor & Destructor
		Convert(void);
		~Convert(void);

		Convert(string str);
		Convert(Convert &src);
		Convert &operator=(Convert &src);

		//Methods

};

#endif