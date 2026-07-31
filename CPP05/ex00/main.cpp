/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:58:49 by aramos            #+#    #+#             */
/*   Updated: 2026/07/30 14:59:42 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat a("Alex", 1);
	int c = a.getGrade();
	std::cout << "First test : name[Alex], grade[1], then increment by 1" << std::endl;
	try
	{
		std::cout << c << std::endl;
		std::cout << a << std::endl;
		a.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Second test : name[Alex], grade[1], then decrement to 150, then try to decrement 1 more" << std::endl;
	try
	{
		std::string	b = a.getName();
		std::cout << b << std::endl;
		std::cout << a << std::endl;
		for (int i = 1; i < 150; i++)
			a.decrementGrade();
		std::cout << a << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Third test : name[jamon], grade[0]" << std::endl;
	try
	{
		Bureaucrat	x("jamon", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Fourth test : name[queso], grade[151]" << std::endl;
	try
	{
		Bureaucrat	y("queso", 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}
	return (0);
}
