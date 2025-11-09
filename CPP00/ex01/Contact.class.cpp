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
