#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string name)
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attackpoints = 20;
	cout << "ScavTrap: " << name << " has been born" << endl;
}

ScavTrap::~ScavTrap(void)
{
	cout << "ScavTrap: " << this->_name << " destroyed" << endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_energy < 1)
		cout << "No energy to do guard gate" << endl;
	else	
	{
		_energy--;
		cout << "ScavTrap " << this->getName() << " has entered guard keeper mode, cannot be damaged!" << endl;
	}
}

void	ScavTrap::attack(string const &target)
{
	if (this->_energy < 1 || this->_hitpoints < 1)
		cout << "Out of energy or dead" << endl;
	else
		cout << "ScavTrap, " << this->getName() << " attacks " << target << " takes " << this->getDamage() << " damage" << endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	this->_name = src.getName();
	this->_attackpoints = src.getDamage();
	this->_energy = src.getEnergy();
	this->_hitpoints = src.getHitPoints();
}

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	this->_name = src.getName();
	this->_attackpoints = src.getDamage();
	this->_energy = src.getEnergy();
	this->_hitpoints = src.getHitPoints();
	return (*this);
}