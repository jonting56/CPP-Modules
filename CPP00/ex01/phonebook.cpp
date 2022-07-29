#include "phonebook.hpp"

void add (int index, PhoneBook **Contact)
{
	std::string	first, last, nick, phone, secret;

	std::cout << "Please enter a first name" << std::endl;
	while (first.empty())
		getline(std::cin, first);
	(*Contact)[index].setFirstName(first);
	std::cout << "Please enter a last name" << std::endl;
	while (last.empty())
		getline(std::cin, last);
	(*Contact)[index].setLastName(last);
	std::cout << "Please enter a nickname" << std::endl;
	while (nick.empty())
		getline(std::cin, nick);
	(*Contact)[index].setNickName(nick);
	std::cout << "Please enter a phone number" << std::endl;
	while (phone.empty())
		getline(std::cin, phone);
	(*Contact)[index].setPhone(phone);
	std::cout << "Please enter your darkest secret" << std::endl;
	while (secret.empty())
		getline(std::cin, secret);
	(*Contact)[index].setSecret(secret);	
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
	int	i = 1;
	if (index == 0)
	{
		std::cout << "No contacts, please add some contacts" << std::endl;
		return ;
	}
	std::cout << "Index |First Name| Last Name|  Nickname " << std::endl;
	while (i <= 8)
	{
		std::cout << i  << "     |" << std::setw(10) << shorten(Contact[i - 1].getFirstName());
		std::cout << "|" << std::setw(10) << shorten(Contact[i - 1].getLastName());
		std::cout << "|" << std::setw(10) << shorten(Contact[i - 1].getNickName()) << std::endl;
		i++;
	}
	return ;
}

void	show_contact(PhoneBook *Contact, int index)
{	
	std::cout << "First name : " << Contact[index - 1].getFirstName() << std::endl; 
	std::cout << "Last name : " << Contact[index - 1].getLastName() << std::endl;
	std::cout << "Nickname : " << Contact[index - 1].getNickName() << std::endl;
	std::cout << "Phone number : " << Contact[index - 1].getPhone() << std::endl;
	std::cout << "Darkest secret : " << Contact[index - 1].getSecret() << std::endl;
}

unsigned long	digit_check(std::string num)
{
	unsigned long	i = 0;

	while (num[i] && isdigit(num[i]))
		i++;
	if (num.length() == i)
		return (i);
	return (0);
}

int main(void)
{
	PhoneBook	*Contact;
	int 		index;
	std::string	cmd;
	std::string	num;

	Contact = new PhoneBook[8];
	index = 0;
	std::cout << "This is a bad phonebook and can only hold up to 8 contacts" << std::endl;
	while (1)
	{	
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
		getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			add(index % 8, &Contact);
			index++;
		}
		else if (cmd == "SEARCH")
		{
			show_all(Contact, index);
			if (index > 0)
			{
				getline(std::cin, num);
				while (!digit_check(num))
					getline(std::cin, num);
				int check = stoi(num);
				while (check < 1 || check > 8)
				{
					std::cout << "Enter valid number between 1 and 8" << std::endl;
					getline(std::cin, num);
					check = stoi(num);
				}
				show_contact(Contact, stoi(num));
			}
		}
		else if (cmd == "EXIT")
			break;
	}
	return (0);
}