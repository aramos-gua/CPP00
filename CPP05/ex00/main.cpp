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

#include <ostream>
#include "inc/Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat a("Alex", 1);
	int c = a.getGrade();
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
	std::cout << std::endl;
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
	return (0);
}
