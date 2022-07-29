#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		//Construct
		Zombie(void);
		//Destruct
		~Zombie(void);
		//Setter
		void		set_name(std::string name);
		//Getter
		std::string	get_name(void);
		//Method
		void 		announce(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);

#endif