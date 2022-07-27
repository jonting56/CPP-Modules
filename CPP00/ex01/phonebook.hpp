#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string.h>
#include <iomanip>

class PhoneBook
{
	private:
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
		std::string	_phonenum;
		std::string	_darkestsecret;

	public:
		void		setFirstName(std::string str);
		void		setLastName(std::string str);
		void		setNickName(std::string str);
		void		setPhone(std::string str);
		void		setSecret(std::string str);

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhone(void);
		std::string	getSecret(void);
};

#endif