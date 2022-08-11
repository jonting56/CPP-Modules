#include "FragTrap.hpp"

FragTrap::FragTrap(string name): _name(name)
{
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attackpoints = 30;
	cout << "FragTrap: " << name << " has been born!" << endl;
}

FragTrap::~FragTrap(void)
{
	cout << "FragTrap: " << this->getName() << " has been fragged, see ya later space cowboy..." << endl;
}

string FragTrap::getName(void)
{
	return (this->_name);
}

void FragTrap::highFiveGuys(void)
{
	cout << endl;
	cout << "Okay guys, lets all talk about this" << endl;
	cout << "*Raises hand for a high five*" << endl;
	cout << "Guys.....?" << endl;
	cout << "FragTrap: " << this->getName() << " gets depression" << endl;
	cout << endl;
}

