#include "phonebook.hpp"

void add (int index, PhoneBook **Contact)
{
	std::string	str;

	std::cout << "Please enter a first name" << std::endl;
	getline(std::cin, str);
	(*Contact)[index].setFirstName(str);
	std::cout << "Please enter a last name" << std::endl;
	getline(std::cin, str);
	(*Contact)[index].setLastName(str);
	std::cout << "Please enter a nickname" << std::endl;
	getline(std::cin, str);
	(*Contact)[index].setNickName(str);
	std::cout << "Please enter a phone number" << std::endl;
	getline(std::cin, str);
	(*Contact)[index].setPhone(str);
	std::cout << "Please enter your darkest secret" << std::endl;
	getline(std::cin, str);
	(*Contact)[index].setSecret(str);	
}

std::string	shorten(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	else
		return (str);
}

void	show_all(PhoneBook *Contact, int index)
{
	int	i = 0;
	while (i <= index)
	{
		std::cout << i + 1 + "|" << std::setw(10) << shorten(Contact[i].getFirstName());
		std::cout << "|" << std::setw(10) << shorten(Contact[i].getLastName());
		std::cout << "|" << std::setw(10) << shorten(Contact[i].getNickName()) << std::endl;
		i++;
	}
}

void	show_contact(PhoneBook *Contact, int index)
{	
	std::cout << "First name	: " << Contact[index].getFirstName() <<std::endl; 
}
int main(void)
{
	PhoneBook	*Contact;
	int 		index;
	std::string	cmd;

	Contact = new PhoneBook[8];
	index = 0;
	while (1)
	{
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
		getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			add(index, &Contact);
			index++;
		}
		else if (cmd == "SEARCH")
		{
			show_all(Contact, index);
			getline(std::cin, cmd);
			show_contact(Contact, atoi(cmd));
		}
		else if (cmd == "EXIT")
			break;
	}
	//PhoneBook.add(Contacts);
	return (0);
}