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

#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
Form::Form(const std::string &name, int grade2sign, int grade2exec) :
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
Form::Form(const Form &other) :
	_name(other._name),
	_signed(other._signed),
	_grade2sign(other._grade2sign),
	_grade2exec(other._grade2exec)
{
}

/* ************************************************************************** */
/*                          COPY ASSIGNMENT OPERATOR                          */
/* ************************************************************************** */
Form::Form &operator=(const Form &other)
{
	if (this != &other)
		_signed = other._signed;
	return (*this);
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
Form::~Form()
{
}

/* ************************************************************************** */
/*                                  GETTERS                                   */
/* ************************************************************************** */
std::string Form::getName() const
{
	return (_name);
}

std::string Form::getSigned() const
{
	return (_signed);
}

std::string Form::getGrade2sign() const
{
	return (_grade2sign);
}

std::string Form::getGrade2exec() const
{
	return (_grade2exec);
}
/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _grade2sign)
		throw GradeTooLowException();
	_signed = true;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high.");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low.");
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	out << "Form " <<form.getName() << ", signed: ";
	if (form.getSigned)
		out << "yes";
	else
		out << "no";
	out << ", grade required to sign: " << form.grade2sign() << ", grade required to execute: " << form.grade2exec();
	return (out);
}
