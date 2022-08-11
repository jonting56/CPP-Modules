#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clappington = ClapTrap("clappington");
	ScavTrap scavvy = ScavTrap("scavvy");

	clappington.attack("scavvy");
	scavvy.takeDamage(0);
	clappington.beRepaired(10);
	cout << "Clappington energy is " << clappington.getEnergy() << endl;
	clappington.takeDamage(5);
	scavvy.guardGate();
	scavvy.attack("clappington");
	clappington.takeDamage(20);
	clappington.attack("scavvy");
	return 0;
}