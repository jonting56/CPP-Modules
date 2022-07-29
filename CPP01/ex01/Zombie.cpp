#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " died." << std::endl;
	delete this;
	return;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiinnnnzzzzZ" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	_name = name;
}

std::string	Zombie::get_name(void)
{
	return (_name);
}

Zombie *newZombie(std::string name)
{
	Zombie *new_zom = new Zombie;

	new_zom->set_name(name);
	return (new_zom);
}