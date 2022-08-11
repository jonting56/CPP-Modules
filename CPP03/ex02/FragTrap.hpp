#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

		string			_name;
		unsigned int	_hitpoints;
		unsigned int	_energy;
		unsigned int	_attackpoints;
	
	public:
		FragTrap(string name);
		~FragTrap(void);

		void highFiveGuys(void);
		string getName(void);
};

#endif