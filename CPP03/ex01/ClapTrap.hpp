#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ClapTrap
{
	private:
		string 					_name;
		unsigned int		_hitpoints;
		unsigned int		_energy;
		unsigned int		_attackpoints;

	public:
		ClapTrap(void);
		ClapTrap(string name);
		~ClapTrap(void);

		//Copy
		ClapTrap(const ClapTrap &src);

		//setter
		void	setName(string name);

		//getter
		string getName(void) const;
		unsigned int getDamage(void) const;
		unsigned int getHitPoints(void) const;
		unsigned int getEnergy(void) const;

		//Member functs
		void	attack(const string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		//Overload
		ClapTrap &operator=(const ClapTrap &src);
};

#endif