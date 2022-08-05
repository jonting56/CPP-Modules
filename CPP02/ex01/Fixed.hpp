#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

		Fixed(const int i);
		Fixed(const float f);

		Fixed& operator=(const Fixed& copy);
		Fixed(const Fixed& copy);

		float toFloat(void) const;
		int toInt(void) const;

		void	setRawBits(int const raw);
		int		getRawBits(void) const;

};

std::ostream& operator<<(std::ostream &os, Fixed const &num);

#endif