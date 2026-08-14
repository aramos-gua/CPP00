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
#include "inc/Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	alex("Alex", 42);
		Form		form("Important Form", 50, 100);
		std::cout << alex << std::endl;
		std::cout << form << std::endl;
		alex.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	bob("Bob", 100);
		Form		form("Secret Form", 50, 100);
		std::cout << bob << std::endl;
		std::cout << form << std::endl;
		bob.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		Form	invalidTooHigh("Invalid High", 0, 50);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		Form	invalidTooLow("Invalid Low", 151, 50);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	jamon("Jamon", 50);
		Form		formExact("Exact amount", 50, 100);
		jamon.signForm(formExact);
		std::cout << formExact << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() <<std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat	queso("Queso", 150);
		Form		formBoundary("Limit Form", 150, 150);
		queso.signForm(formBoundary);
		std::cout << formBoundary << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
