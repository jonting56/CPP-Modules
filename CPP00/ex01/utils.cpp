/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jting <jting@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:56:46 by jting             #+#    #+#             */
/*   Updated: 2022/07/27 15:00:00 by jting            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void		PhoneBook::setFirstName(std::string str)
{
	_firstname = str;
}

void		PhoneBook::setLastName(std::string str)
{
	_lastname = str;
}

void		PhoneBook::setNickName(std::string str)
{
	_nickname = str;
}

void		PhoneBook::setPhone(std::string str)
{
	_phonenum = str;
}

void		PhoneBook::setSecret(std::string str)
{
	_darkestsecret = str;
}

std::string	PhoneBook::getFirstName(void)
{
	return (_firstname);
}

std::string	PhoneBook::getLastName(void)
{
	return (_lastname);
}

std::string	PhoneBook::getNickName(void)
{
	return (_nickname);
}

std::string	PhoneBook::getPhone(void)
{
	return (_phonenum);
}

std::string	PhoneBook::getSecret(void)
{
	return (_darkestsecret);
}