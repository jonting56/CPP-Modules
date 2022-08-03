#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
}

HumanB::~HumanB(void)
{
}

void HumanB::setWeapon(Weapon &wep)
{
	this->weapon = &wep;
}

void HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl; 
}