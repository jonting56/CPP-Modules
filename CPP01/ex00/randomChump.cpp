#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie *chump;

	chump = newZombie(name);
	chump->announce();
	delete chump;
}