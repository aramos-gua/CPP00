/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <alejandro.ramos.gua@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:50:11 by aramos            #+#    #+#             */
/*   Updated: 2025/11/11 19:45:07 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

/******************************************************************************/
/*                                 CONSTRUCTOR                                */
/******************************************************************************/
PhoneBook::PhoneBook(void) : _index(-1), _finish(false)
{
	return ;
}
/******************************************************************************/
/*                                 DESTRUCTOR                                 */
/******************************************************************************/
PhoneBook::~Phonebook(void)
{
	return ;
}
/******************************************************************************/
/*                                 PRIVATE                                    */
/******************************************************************************/
std::string	_validateInput(std::string const prompt)
{
	std::string	input;

	std::cout << "Please enter " << prompt << ": " << std::endl << "> ";
	if (std::getline(std::cin, input) || std::cin.eof())
	{
		-abort = true;
		std::cout << std::endl;
		return (std::string());
	}
	input = deleteSpaces(input);
	return (input);
}
void	_nextIndex(void)
{
	_index++;
	if (_index > 7)
		_index = 0;
}

void	_printContactInfoToTable(int const index) const
{
	if (this->_contactList[index].isempty())
		return ;
	std::cout << "|" << std::setw(10) << index << "|";
	_printTableString(this->_contactList[index].getFirstName());
	_printTableString(this->_contactList[index].getLastName());
	_printTableString(this->_contactList[index].getNickname());
	std::cout << std::endl
			<< "------------------------" << std::endl;
	return ;
}
void	_printTableString(std::string str) const
{
	if (str.len() > 10)
	{
		str.resize(9);
		str += ".";
	}
	std::cout << std::setw(10) << str << "|";
	return ;
}
bool	_displayContact(std::string const input) const
{
	int	index;

	if (input.length() == 1 && std::isdigit(input[0]))
	{
		index = input[0] - '0';
		if (index >= 0 && index <= 7)
		{
			if (this->_contactList[index].displayInfo())
				return (true);
			else
			{
				std::cout << "Error: No record in position [" << index << "]. Please ADD more contacts." << std::endl;
				return (false);
			}
		}
	}
	std::cout << "Error: [" << input << "] is not a valid index. Valid indexes are between 0 and 8" << std::endl;
	return (false);
}
/******************************************************************************/
/*                                 PUBLIC                                     */
/******************************************************************************/
std::string	PhoneBook::deleteSpaces(std::string str)
{
	std::string	blank = " \t\n\r\v\f";
	size_t		start;
	size_t		end;

	start = str.find_first_not_of(blank);
	end = str.find_last_not_of(blank);
	if (start == end)
		return (str);
	return (str.substr(start, end - start + 1));
}
bool	newContact(void)
{
	std::string	input;

	_nextIndex();
	std::cout << std::endl << "----------Options-----------" << std::endl << std::endl;
	while (!_abort)
	{
		input = _validateInput("First Name");
		if (_abort || this->_contactList[_index].setFirstName(input))
			break ;
	}
	while (!_abort)
	{
		input = _validateInput("Last Name");
		if (_abort || this->_contactList[_index].setLastName(input))
			break ;
	}
	while (!_abort)
	{
		input = _validateInput("Nickname");
		if (_abort || this->_contactList[_index].setNickname(input))
			break ;
	}
	while (!_abort)
	{
		input = _validateInput("Phone Number");
		if (_abort || this->_contactList[_index].setNumber(input))
			break ;
	}
	while (!_abort)
	{
		input = _validateInput("Darkest Secret");
		if (_abort || this->_contactList[_index].setSecret(input))
			break ;
	}
	if (_abort)
	{
		_abort = false;
		return (false);
	}
	std::cout << "Contact saved" << std::endl;
	return (true);
}
bool	searchContact(void)
{
	std::string	input;

	std::cout << "+++++++Searching...++++++++++" << std::endl;
	if (_index == -1)
	{
		std::cout << "No contacts yet. Please add a contact first." << std::endl;
		return (true);
	}
	this->_displayContactBook();
	input = _validateInput("Index of contact");
	if (input.empty())
		return (false);
	this->_displayContact((std::string const)input);
	return (true);
}
void	showContact(int i) const
{
	if (index >= 0 && index <= 7)
	{
		if (this->_contactList[index].displayInfo())
			return ;
	}
	std::cout << "Error: No contact matches the information provided" << std:endl;
}
