#include "Fixed.hpp"

Fixed::Fixed(void)
{
	//cout << "Default constructor called" << endl;
	point = 0;
}

Fixed::~Fixed(void)
{
	//cout << "Destructor called" << endl;
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
	//cout << "Copy constructor called" << endl;
	this->point = copy.getRawBits();
}


Fixed &Fixed::operator=(Fixed const &copy)
{
	//cout << "Copy assignment constructor called" << endl;
	this->point = copy.getRawBits();

	return (*this);
}

Fixed::Fixed(const int i)
{
	//cout << "Int constructor called" << endl;
	setRawBits(i << this->bits);
}

Fixed::Fixed(const float f)
{
	//cout << "Float constructor called" << endl;
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

// EX02
//Overloads

int Fixed::operator>(Fixed const &a) const
{
	if (this->getRawBits() > a.getRawBits())
		return (1);
	return (0); 
}

int Fixed::operator<(Fixed const &a) const
{
	if (this->getRawBits() < a.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator<=(Fixed const &a) const
{
	if (this->getRawBits() <= a.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator>=(Fixed const &a) const
{
	if (this->getRawBits() <= a.getRawBits())
		return(1);
	return (0);
}

int Fixed::operator==(Fixed const &a) const
{
	if (this->getRawBits() == a.getRawBits())
		return (1);
	return (0);
}

int Fixed::operator!=(Fixed const &a) const
{
	if (this->getRawBits() != a.getRawBits())
		return (1);
	return (0);
}

Fixed Fixed::operator*(Fixed const &a) const
{
	Fixed x(this->toFloat() * a.toFloat());
	return (x); 
}

Fixed Fixed::operator+(Fixed const &a) const
{
	Fixed x(this->toFloat() + a.toFloat());
	return (x);
}

Fixed Fixed::operator-(Fixed const &a) const
{
	Fixed x(this->toFloat() - a.toFloat());
	return (x);
}

Fixed Fixed::operator/(Fixed const &a) const 
{
	Fixed x(this->toFloat() / a.toFloat());
	return (x);
}

//Incrementors
//Pre++
Fixed &Fixed::operator++(void)
{
	this->point += 1;
	return (*this);
}
//Pre--
Fixed &Fixed::operator--(void)
{
	this->point -= 1;
	return (*this);
}

//Post++
Fixed Fixed::operator++(int)
{
	Fixed x = *this;
	this->point += 1;
	return x;
}

//Post--
Fixed Fixed::operator--(int)
{
	Fixed x = *this;
	this->point -= 1;
	return x;
}

//Member functions
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
	
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}
	
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}