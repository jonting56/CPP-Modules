#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	wep = type;
	return;
}

Weapon::~Weapon(void)
{
	return;
}

int	Weapon::setType(std::string type)
{
	if (type == "")
	{
		std::cout << "Unable to have an empty string" << std::endl;
		return (0);
	}
	wep = type;
	return (1);
}

const std::string&  Weapon::getType(void) const
{
	return (this->wep);
}