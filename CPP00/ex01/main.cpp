/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <alejandro.ramos.gua@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 14:26:39 by aramos            #+#    #+#             */
/*   Updated: 2025/11/11 18:49:49 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.class.hpp"

std::string	validateInput(PhoneBook *directory)
{
	std::string	arg;

	if (!std::getline(std::cin, arg) || std::cin.eof())
	{
		std::cout << "EXIT" << std::endl;
		return ("EXIT");
	}
	arg = directory->deleteSpaces(arg);
	for (std::string::iterator ptr = arg.begin(); ptr != arg.end(); ptr++)
		*ptr = std::toupper(*ptr);
	return (arg);
}

int     main(void)
{
	PhoneBook	directory;
	std::string	arg;

	while (1)
	{
		arg = validateInput(&directory);
		if (arg == "EXIT")
			break ;
		else if (arg == "ADD")
		{
			if (!directory.newContact())
				break ;
		}
		else if (arg == "SEARCH")
		{
			if (!directory.searchContact())
				break ;
		}
		else
			std::cout << "Please enter: ADD, SEARCH, EXIT" << std::endl;
	}
	std::cout << "Bye" << std::endl;
	return (0);
}
