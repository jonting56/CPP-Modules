#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap clappington = ClapTrap("clappington");
	ClapTrap slappy = ClapTrap("slappy");

	clappington.attack("slappy");
	slappy.takeDamage(0);
	clappington.beRepaired(10);
	cout << "Clappington energy is " << clappington.getEnergy() << endl;
	clappington.takeDamage(5);
	return 0;
}