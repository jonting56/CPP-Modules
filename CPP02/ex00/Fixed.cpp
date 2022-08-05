#include "Fixed.hpp"

Fixed::Fixed(void)
{
	cout << "Default constructor called" << endl;
	point = 0;
}

Fixed::~Fixed(void)
{
	cout << "Destructor called" << endl;
}

void	Fixed::setRawBits(int const raw)
{
	point = raw;
}

int Fixed::getRawBits(void) const
{
	cout << "getRawBits function called" << endl;
	return (point);
}

Fixed::Fixed(const Fixed& copy)
{
	cout << "Copy constructor called" << endl;
	this->point = copy.getRawBits();
}


Fixed &Fixed::operator=(Fixed const &copy)
{
	cout << "Copy assignment constructor called" << endl;
	this->point = copy.getRawBits();

	return (*this);
}
