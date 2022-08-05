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

Fixed::Fixed(const int i)
{
	cout << "Int constructor called" << endl;
	setRawBits(i << this->bits);
}

Fixed::Fixed(const float f)
{
	cout << "Float constructor called" << endl;
	this->setRawBits((int)roundf(f * (1 << this->bits)));
}

float Fixed::toFloat(void) const
{
	float f;

	f = (float)this->getRawBits() / (1 << this->bits);
	return (f);
}

int Fixed::toInt(void) const
{
	return(this->getRawBits() >> this->bits);
}

std::ostream& operator<<(std::ostream &os, Fixed const &num)
{
	os << num.toFloat();
	return (os);
}