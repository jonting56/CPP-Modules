#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name): _name(name)
{
}

ClapTrap::~ClapTrap(void)
{
}

string	ClapTrap::getName(void)
{
	return (this->_name);
}

void	ClapTrap::ClapTrap(const string& target)
{
	cout << "ClapTrap" << this->getName() << attacks << target << ", causing" << this->getDamage() << " points of damage!" << endl
}