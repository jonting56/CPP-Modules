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
		string _name;
		int		_hitpoints;
		int		_energy;
		int		_atkdam;

	public:
		ClapTrap(string name);
		~ClapTrap(void);

		//getter
		string getName(void);

		//Member functs
		void	attack(const string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif