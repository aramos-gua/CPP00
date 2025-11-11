/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <alejandro.ramos.gua@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:29:14 by aramos            #+#    #+#             */
/*   Updated: 2025/11/08 16:29:41 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

/******************************************************************************/
/*                                 CONSTRUCTOR                                */
/******************************************************************************/
Contact::Contact(void) :
	_firstName(""),
	_lastName(""),
	_nickname(""),
	_number(""),
	_secret("")
{
	return ;
}
/******************************************************************************/
/*                                 DESTRUCTOR                                 */
/******************************************************************************/
Contact::~Contact(void)
{
	return ;
}
/******************************************************************************/
/*                                    GETS                                    */
/******************************************************************************/
std::string const	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string const	Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string const	Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string const	Contact::getNumber(void) const
{
	return (this->_number);
}

std::string const	Contact::getSecret(void) const
{
	return (this->_secret);
}
/******************************************************************************/
/*                                    SETS                                    */
/******************************************************************************/
bool	Contact::setFirstName(std::string str)
{
	if (str.empty())
		return (false);
	else if (!_allIsAlpha(str))
	{
		std::cout << "Error: Names can only contain letters, spaces or '-'" << std::endl;
		return (false);
	}
	str[0] = std::toupper(str[0]);
	this->_firstName = str;
	return (true);
}
bool	Contact:setLastName(std::string str)
{
	if (str.empty())
		return (false);
	else if (!_allIsAlpha(str))
	{
		std::cout << "Error: Names can only contain letters, spaces or '-'" << std::endl;
		return (false);
	}
	for (std::string::iterator i = str.begin(); i != str.end(); i++)
		*i = std::toupper(*i);
	this->_lastName = str;
	return (true);
}
bool	Contact::setNickname(std::string str)
{
	if (str.empty())
		return (false);
	else if (!_allIsAlpha(str))
	{
		std::cout << "Error: Names can only contain letters, spaces or '-'" << std::endl;
		return (false);
	}
	str[0] = std::toupper(str[0]);
	this->_nickname = str;
	return (true);
}
bool	Contact::setNumber(str::string str)
{
	if (str.empty())
		return (false);
	else if (!_allIsDigit(str))
	{
		std::cout << "Error: Numbers can only contain digits, spaces or '-'" << std::endl;
		return (false);
	}
	this->_number = str;
	return (true);
}
bool	Contact::setSecret(str::string const str)
{
	if (str.empty())
		return (false);
	this->_secret = str;
	return (true);
}
/******************************************************************************/
/*                                 PRIVATE                                    */
/******************************************************************************/
bool	Contact::_allIsAlpha(std::string const s)
{
	for (std::string::const_iterator it = s.begin(); it != s.end(); it++)
		if (!std::isalpha(*it) && *it != ' ' && *it != '-')
			return (false);
}
bool	Contact::_allIsDigit(std::string const s)
{
	for (std::string::const_iterator it = s.begin(); it != s.end(); it++)
		if (!std::isdigit(*it) && *it != ' ' && *it != '-')
			return (false);
	return (true);
}
/******************************************************************************/
/*                                 PUBLIC                                     */
/******************************************************************************/
bool	Contact:isEmpty(void) const
{
	if (this->_firstName.empty() || 
		this->_lastName.empty() || 
		this->_nickname.empty() || 
		this->_number.empty() || 
		this->_secret.empty())
		return (true);
}
bool	Contact:displayInfo(void) const
{
	if (this->isEmpty())
		return (false);
	std::cout << "First Name\t: " << this->_getFirstName() << std::endl
			 << "Last Name\t: " << this->_getLastName() << std::endl
			 << "Nickname\t: " << this->_getNickname() << std::endl
			 << "Phone Number\t: " << this->_getNumber() << std::endl
			 << "Darkest Secret\t: " << this->_getSecret() << std::endl;
	return (true);
}
