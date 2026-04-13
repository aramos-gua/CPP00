/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:20:12 by aramos            #+#    #+#             */
/*   Updated: 2026/04/13 19:25:38 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* ************************************************************************** */
/*                                 CONSTRUCTOR                                */
/* ************************************************************************** */
WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

/* ************************************************************************** */
/*                              COPY CONSTRUCTOR                              */
/* ************************************************************************** */
WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = other.type;
}

/* ************************************************************************** */
/*                          COPY ASSIGNMENT OPERATOR                          */
/* ************************************************************************** */
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat copy assignment called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/* ************************************************************************** */
/*                                  DESTRUCTOR                                */
/* ************************************************************************** */
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	WrongCat::makeSound() const
{
	std::cout << "Moooo, I am a dog!" << std::endl;
}
