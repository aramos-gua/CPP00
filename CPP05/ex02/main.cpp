/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:58:49 by aramos            #+#    #+#             */
/*   Updated: 2026/08/14 22:17:35 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/Bureaucrat.hpp"
#include "inc/AForm.hpp"
#include "inc/ShrubberyCreationForm.hpp"
#include "inc/RobotomyRequestForm.hpp"
#include "inc/PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));

	std::cout << "=========================================" << std::endl;
	std::cout << " AForm is abstract - cannot instantiate" << std::endl;
	std::cout << "=========================================" << std::endl;
	// Uncomment the line below to confirm it fails to compile:
	// AForm form("Test", 1, 1);
	std::cout << "(skipped - would not compile, as expected)" << std::endl;

	std::cout << "\n=========================================" << std::endl;
	std::cout << " Bureaucrat grade bounds" << std::endl;
	std::cout << "=========================================" << std::endl;
	try
	{
		Bureaucrat tooHigh("TooHigh", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat tooLow("TooLow", 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Caught: " << e.what() << std::endl;
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " ShrubberyCreationForm - success" << std::endl;
	std::cout << "=========================================" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		ShrubberyCreationForm shrub("home");

		std::cout << shrub << std::endl;
		boss.signForm(shrub);
		boss.executeForm(shrub);
		std::cout << "-> check file \"home_shrubbery\"" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Unexpected: " << e.what() << std::endl;
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " ShrubberyCreationForm - not signed" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Bureaucrat boss("Boss", 1);
		ShrubberyCreationForm shrub("unsigned_target");

		boss.executeForm(shrub); // never signed -> prints failure, no throw escapes
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " ShrubberyCreationForm - grade too low to sign" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Bureaucrat intern("Intern", 150);
		ShrubberyCreationForm shrub("garden");

		intern.signForm(shrub); // signForm() from ex01, should print failure
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " ShrubberyCreationForm - grade too low to execute" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat intern("Intern", 150);
		ShrubberyCreationForm shrub("backyard");

		boss.signForm(shrub);
		intern.executeForm(shrub); // signed, but intern's grade too low
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " RobotomyRequestForm - success (run a few times)" << std::endl;
	std::cout << "=========================================" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		Bureaucrat boss("Boss", 1);
		RobotomyRequestForm robotomy("Bender");

		boss.signForm(robotomy);
		boss.executeForm(robotomy);
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " RobotomyRequestForm - not signed" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Bureaucrat boss("Boss", 1);
		RobotomyRequestForm robotomy("Fry");

		boss.executeForm(robotomy);
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " PresidentialPardonForm - success" << std::endl;
	std::cout << "=========================================" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		PresidentialPardonForm pardon("Zoidberg");

		boss.signForm(pardon);
		boss.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cout << "Unexpected: " << e.what() << std::endl;
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " PresidentialPardonForm - grade too low to sign" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Bureaucrat intern("Intern", 150);
		PresidentialPardonForm pardon("Leela");

		intern.signForm(pardon);
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " Polymorphism check: AForm* pointing to derived" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Bureaucrat boss("Boss", 1);
		AForm *form = new ShrubberyCreationForm("polymorphic_test");

		boss.signForm(*form);
		boss.executeForm(*form); // must call ShrubberyCreationForm's execute via vtable
		delete form;             // must call ShrubberyCreationForm's destructor via vtable
	}

	return 0;
}
