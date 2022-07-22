#include "phonebook.hpp"


void	add(int ac, char **av, PhoneBook p)
{
	std::cout << "Please enter a first name" << std::endl;
	std::cin >> p.FirstName;
	std::cout << "Please enter a last name" << std::endl;
	std::cin >> p.LastName;
	std::cout << "Please enter a nickname" << std::endl;
	std::cin >> p.Nickname;
	std::cout << "Please enter a phone number" << std::endl;
	std::cin >> p.PhoneNum;
	std::cout << "Please enter your darkest secret" << std::endl;
	std::cin >> p.darkestSecret;
}



int main(int ac, char **av)
{
	PhoneBook	instance;
	std::cout << "Please enter ADD, SEARCH or EXIT" <<std::endl;
	std::cin <<
	
}