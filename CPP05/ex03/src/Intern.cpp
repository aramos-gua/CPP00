/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:58:39 by aramos            #+#    #+#             */
/*   Updated: 2026/08/14 22:19:37 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
Intern::Intern()
{}
/* ************************************************************************** */
/*                              COPY CONSTRUCTOR                              */
/* ************************************************************************** */
Intern::Intern(const Intern &other)
{
	(void)other;
}
/* ************************************************************************** */
/*                          COPY ASSIGNMENT OPERATOR                          */
/* ************************************************************************** */
Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}
/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
Intern::~Intern()
{}
/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
AForm	*Intern::createShrubbery(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}
AForm	*Intern::createRobotomy(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}
AForm	*Intern::createPardon(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

