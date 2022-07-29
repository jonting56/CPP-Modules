#include "Weapon.hpp"

class HumanB
{
	private:

		std::string name;
		std::string weapon;
	
	public:

		HumanB::HumanB(std::string name);
		HumanB::~HumanB(void);

		void	attack(void);

}