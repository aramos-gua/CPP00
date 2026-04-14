/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 17:12:39 by aramos            #+#    #+#             */
/*   Updated: 2026/04/13 19:27:50 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

/* ************************************************************************** */
/*                              COPY COSTRUCTOR                               */
/* ************************************************************************** */
Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*other.brain);
}

/* ************************************************************************** */
/*                         COPY ASSIGNMENT OPERATOR                           */
/* ************************************************************************** */
Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog copy assignment called" << std::endl;
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
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete (this->brain);
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	Dog::makeSound() const
{
	std::cout << "Woof Woof! I'm a dog, yo!" << std::endl;
}
