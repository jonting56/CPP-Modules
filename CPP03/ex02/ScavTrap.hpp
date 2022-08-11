#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		string _name;
		unsigned int _hitpoints;
		unsigned int _energy;
		unsigned int _attackpoints;
		
	public:
		ScavTrap(void);
		ScavTrap(string name);
		~ScavTrap(void);

		ScavTrap(ScavTrap const &src);
		ScavTrap &operator=(ScavTrap const &src);

		//Methods
		void guardGate(void);
		void attack(string const &target);
};

#endif

