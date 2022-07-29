#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private: 

		std::string wep;

	public:

		Weapon(std::string type);
		~Weapon(void);

		int					setType(std::string type);
		const std::string& 	getType(void) const;

};

#endif