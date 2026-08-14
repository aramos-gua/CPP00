/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:07:39 by aramos            #+#    #+#             */
/*   Updated: 2026/08/14 22:27:27 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"
#include <fstream>

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	AForm("ShrubberyCreationForm", 145, 137),
	_target(target)
{
}

/* ************************************************************************** */
/*                              COPY CONSTRUCTOR                              */
/* ************************************************************************** */
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
	AForm(other),
	_target(other._target)
{
}

/* ************************************************************************** */
/*                          COPY ASSIGNMENT OPERATOR                          */
/* ************************************************************************** */
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		AForm::operator=(other);
	return (*this);
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	checkExec(executor);
	std::string		filename = _target + "_shrubbery";
	std::ofstream	file(filename.c_str());
	if (!file.is_open())
		throw std::exception();
	file <<
		"      *\n     ***\n   *******\n ***********\n     |@|\n     |@|\n" << std::endl;
	file.close();
}

