#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	Fixed d;
	
	d.setRawBits(20);
	c = b;

	cout << a.getRawBits() << endl;
	cout << b.getRawBits() << endl;
	cout << c.getRawBits() << endl;
	cout << d.getRawBits() << endl;
	return 0;
}
