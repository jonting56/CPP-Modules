#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	cout << "Claptrap, CrapTrap has been born" << endl;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_attackpoints = 0;
}

ClapTrap::ClapTrap(string name): _name(name)
{
	cout << "ClapTrap: " << name << " has been born" << endl;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_attackpoints = 0;
}

ClapTrap::~ClapTrap(void)
{
	cout << "ClapTrap: I've been clapped " << this->_name << endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	this->_name = src.getName();
	this->_hitpoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	this->_attackpoints = src.getDamage();
	cout << "Copy of ClapTrap created" << endl;
}
//Setter

void	ClapTrap::setName(string name)
{
	if (name == "")
		this->_name = "ClapTrap";
	else
		this->_name = name;
}
//Getters
string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getDamage(void) const
{
	return (this->_attackpoints);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitpoints);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}
void	ClapTrap::attack(const string& target)
{
	if (this->_energy < 1 || this->_hitpoints < 1)
		cout << "Not enough energy or hitpoints are zero" << endl;
	else 
	{
		_energy--;
		cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getDamage() << " points of damage!" << endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy < 1 || this->_hitpoints < 1)
		cout << "Not enough energy or hitpoints are zero" << endl;
	else
	{
		_hitpoints += amount;
		_energy--;
		cout << "ClapTrap " << this->getName() << " heals " << amount << " HP, current HP is " << this->getHitPoints() << endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > _hitpoints)
		_hitpoints = 0;
	else	
		_hitpoints -= amount;
	cout << "ClapTrap " << this->getName() << " takes " << amount << " damage, " << this->getHitPoints() << " HP left" << endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	this->setName(src.getName());
	this->_attackpoints = src.getDamage();
	this->_hitpoints = src.getHitPoints();
	this->_energy = src.getEnergy();
	return (*this);
}