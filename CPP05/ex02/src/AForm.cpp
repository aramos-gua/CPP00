/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/31 15:10:34 by aramos            #+#    #+#             */
/*   Updated: 2026/07/31 15:17:04 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"
#include "../inc/Bureaucrat.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
AForm::AForm(const std::string &name, int grade2sign, int grade2exec) :
	_name(name),
	_signed(false),
	_grade2sign(grade2sign),
	_grade2exec(grade2exec)
{
	if (grade2sign < 1 || grade2exec < 1)
		throw GradeTooHighException();
	else if (grade2sign > 150 || grade2exec > 150)
		throw GradeTooLowException();
}

/* ************************************************************************** */
/*                              COPY CONSTRUCTOR                              */
/* ************************************************************************** */
AForm::AForm(const AForm &other) :
	_name(other._name),
	_signed(other._signed),
	_grade2sign(other._grade2sign),
	_grade2exec(other._grade2exec)
{
}

/* ************************************************************************** */
/*                          COPY ASSIGNMENT OPERATOR                          */
/* ************************************************************************** */
AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
AForm::~AForm()
{
}

/* ************************************************************************** */
/*                                  GETTERS                                   */
/* ************************************************************************** */
std::string AForm::getName() const
{
	return (_name);
}

bool	AForm::getSigned() const
{
	return (_signed);
}

int	AForm::getGrade2sign() const
{
	return (_grade2sign);
}

int	AForm::getGrade2exec() const
{
	return (_grade2exec);
}
/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade2sign)
		throw GradeTooLowException();
	_signed = true;
}

void	AForm::checkExec(Bureaucrat const &executor) const
{
	if (!_signed)
		throw FormNotSignedException();
	if (executor.getGrade() > getGrade2exec())
		throw GradeTooLowException();
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade too high.");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade too low.");
}

const char	*AForm::FormNotSignedException::what() const throw()
{
	return ("Form is not signed.");
}

std::ostream	&operator<<(std::ostream &out, const AForm &form)
{
	out << "Form " << form.getName() << ", signed: ";
	if (form.getSigned())
		out << "yes";
	else
		out << "no";
	out << ", grade required to sign: " << form.getGrade2sign() << ", grade required to execute: " << form.getGrade2exec();
	return (out);
}
