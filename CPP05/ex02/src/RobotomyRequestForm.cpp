/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 18:07:39 by aramos            #+#    #+#             */
/*   Updated: 2026/08/14 22:27:27 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"
#include <cstdlib>

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) :
    AForm("RobotomyRequestForm", 72, 45),
    _target(target)
{
}

/* ************************************************************************** */
/*                              COPY CONSTRUCTOR                              */
/* ************************************************************************** */
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) :
    AForm(other),
    _target(other._target)
{
}


/* ************************************************************************** */
/*                          COPY ASSIGNMENT OPERATOR                          */
/* ************************************************************************** */
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if (this != &other)
        AForm::operator=(other);
    return (*this);
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
RobotomyRequestForm::~RobotomyRequestForm()
{
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    checkExec(executor);
    std::cout << "BrRrRrRrRrRrR... *drilling noises*..." << std::endl;
    if (std::rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed for " << _target << "." << std::endl;
}