/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 19:15:23 by aramos            #+#    #+#             */
/*   Updated: 2026/04/13 19:27:41 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

/* ************************************************************************** */
/*                                 CONSTRUCTOR                                */
/* ************************************************************************** */
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "WrongAnimal"; 
}

/* ************************************************************************** */
/*                              COPY CONSTRUCTOR                              */
/* ************************************************************************** */
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	this->type = other.type;
}

/* ************************************************************************** */
/*                          COPY ASSIGNMENT OPERATOR                          */
/* ************************************************************************** */
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal copy assignment called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/* ************************************************************************** */
/*                                  DESTRUCTOR                                */
/* ************************************************************************** */
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Sound of Wrong Animal" << std::endl;
}
