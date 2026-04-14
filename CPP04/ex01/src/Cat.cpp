/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:22:00 by aramos            #+#    #+#             */
/*   Updated: 2026/04/13 19:27:43 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

/* ************************************************************************** */
/*                              COPY CONSTRUCTOR                               */
/* ************************************************************************** */
Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*other.brain);
}

/* ************************************************************************** */
/*                         COPY ASSIGNMENT OPERATOR                           */
/* ************************************************************************** */
Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Cat copy assignment called" << std::endl;
	if (this != &other)
	{
		Animal::operator=(other);
		delete (this->brain);
		brain = new Brain(*other.brain);
	}
	return (*this);

}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete (this->brain);
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	Cat::makeSound() const
{
	std::cout << "Meow! I'm a cat!" << std::endl;
}
