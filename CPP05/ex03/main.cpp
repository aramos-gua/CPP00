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
#include "inc/Intern.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(0)));

	std::cout << "=========================================" << std::endl;
	std::cout << " Intern creates each known form type" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Intern	someRandomIntern;
		Bureaucrat boss("Boss", 1);

		AForm *shrub = someRandomIntern.makeForm("shrubbery creation", "home");
		AForm *robot = someRandomIntern.makeForm("robotomy request", "Bender");
		AForm *pardon = someRandomIntern.makeForm("presidential pardon", "Zoidberg");

		if (shrub)
		{
			boss.signForm(*shrub);
			boss.executeForm(*shrub);
		}
		if (robot)
		{
			boss.signForm(*robot);
			boss.executeForm(*robot);
		}
		if (pardon)
		{
			boss.signForm(*pardon);
			boss.executeForm(*pardon);
		}

		delete shrub;
		delete robot;
		delete pardon;
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " Intern - unknown form name" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Intern	someRandomIntern;
		AForm *unknown = someRandomIntern.makeForm("permission to leave early", "Fry");

		if (unknown == 0)
			std::cout << "Correctly got a null pointer back" << std::endl;
		else
		{
			std::cout << "Unexpected: something was created" << std::endl;
			delete unknown;
		}
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " Intern - full lifecycle incl. sign failure" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Intern	someRandomIntern;
		Bureaucrat intern("Newbie", 150); // very low grade
		Bureaucrat boss("Boss", 1);

		AForm *form = someRandomIntern.makeForm("presidential pardon", "Leela");
		if (form)
		{
			intern.signForm(*form);   // should fail - grade too low to sign
			boss.signForm(*form);     // should succeed
			intern.executeForm(*form); // should fail - grade too low to execute
			boss.executeForm(*form);   // should succeed
			delete form;
		}
	}

	std::cout << "\n=========================================" << std::endl;
	std::cout << " Intern - stress test: many robotomy forms" << std::endl;
	std::cout << "=========================================" << std::endl;
	{
		Intern	someRandomIntern;
		Bureaucrat boss("Boss", 1);

		for (int i = 0; i < 4; i++)
		{
			AForm *robot = someRandomIntern.makeForm("robotomy request", "Subject");
			if (robot)
			{
				boss.signForm(*robot);
				boss.executeForm(*robot);
				delete robot;
			}
		}
	}

	return 0;
}
