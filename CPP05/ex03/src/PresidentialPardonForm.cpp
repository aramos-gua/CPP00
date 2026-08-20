/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:07:39 by aramos            #+#    #+#             */
/*   Updated: 2026/08/14 22:27:27 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :
    AForm("PresidentialPardonForm", 25, 5),
    _target(target)
{
}

/* ************************************************************************** */
/*                              COPY CONSTRUCTOR                              */
/* ************************************************************************** */
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) :
    AForm(other),
    _target(other._target)
{
}

/* ************************************************************************** */
/*                          COPY ASSIGNMENT OPERATOR                          */
/* ************************************************************************** */
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if (this != &other)
        AForm::operator=(other);
    return (*this);
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
PresidentialPardonForm::~PresidentialPardonForm()
{
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    checkExec(executor);
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}