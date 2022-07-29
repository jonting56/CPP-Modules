#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:

		std::string name;
		Weapon		&weapon;
	
	public:
	
		HumanA(Weapon &wap, std::string str);
		~HumanA(void);

		void	attack(void);
};

#endif