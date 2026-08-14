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

int	main(void)
{
	// Test 1: everything works, tree should get written to "home_shrubbery"
	std::cout << "--- Test 1: valid sign + execute ---" << std::endl;
	try
	{
		Bureaucrat highGrade("Bob", 1); // grade 1, highest possible
		ShrubberyCreationForm form("home");

		std::cout << form << std::endl;
		form.beSigned(highGrade);
		std::cout << form << std::endl;
		form.execute(highGrade);
		std::cout << "Success: check the file \"home_shrubbery\"" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Unexpected error: " << e.what() << std::endl;
	}

	// Test 2: try to execute WITHOUT signing first -> should throw, no file created
	// std::cout << "\n--- Test 2: execute without signing ---" << std::endl;
	// try
	// {
	// 	Bureaucrat highGrade("Alice", 1);
	// 	ShrubberyCreationForm form("office");
	//
	// 	form.execute(highGrade); // never signed
	// 	std::cout << "This should not print" << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Correctly caught: " << e.what() << std::endl;
	// }
	//
	// // Test 3: signed, but executor's grade is too low -> should throw
	// std::cout << "\n--- Test 3: grade too low to execute ---" << std::endl;
	// try
	// {
	// 	Bureaucrat lowGrade("Intern", 150);   // grade 150, lowest possible
	// 	Bureaucrat highGrade("Boss", 1);
	// 	ShrubberyCreationForm form("garden");
	//
	// 	form.beSigned(highGrade);    // signed by someone with high enough grade
	// 	form.execute(lowGrade);      // but executed by someone too low-ranked
	// 	std::cout << "This should not print" << std::endl;
	// }
	// catch (std::exception &e)
	// {
	// 	std::cout << "Correctly caught: " << e.what() << std::endl;
	// }
	return (0);
}
