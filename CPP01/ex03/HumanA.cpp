#include "HumanA.hpp"

HumanA::HumanA(Weapon &wap, std::string str)
{
	weapon = wap;
	name = str;
	return;
}

HumanA::~HumanA(void)
{
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}