/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 15:32:16 by aramos            #+#    #+#             */
/*   Updated: 2026/04/13 19:27:46 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
Animal::Animal()
{
	std::cout << "Animal constuctor called" << std::endl;
	this->type = "Animal";
}

/* ************************************************************************** */
/*                              COPY COSTRUCTOR                               */
/* ************************************************************************** */
Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = other.type;
}

/* ************************************************************************** */
/*                         COPY ASSIGNMENT OPERATOR                           */
/* ************************************************************************** */
Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	Animal::makeSound() const
{
	std::cout << "Animal makeSound called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
