#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
	private:
		int point;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();

		Fixed& operator=(const Fixed& copy);
		Fixed(const Fixed& copy);
		void	setRawBits(int const raw);
		int		getRawBits(void) const;

};

#endif