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

		//Ex02
		//Overloaders
		int operator>(Fixed const &a) const;
		int operator<(Fixed const &a) const;
		int operator<=(Fixed const &a) const;
		int operator>=(Fixed const &a) const;
		int operator==(Fixed const &a) const;
		int operator!=(Fixed const &a) const;

		Fixed operator*(Fixed const &a) const;
		Fixed operator+(Fixed const &a) const;
		Fixed operator-(Fixed const &a) const;
		Fixed operator/(Fixed const &a) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		
		//Member functions
		const static Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &min(Fixed &a, Fixed &b);
		
		static Fixed &max(Fixed &a, Fixed &b);
		const static Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream &os, Fixed const &num);

#endif