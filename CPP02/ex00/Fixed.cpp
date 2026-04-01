/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:36:24 by aramos            #+#    #+#             */
/*   Updated: 2026/04/01 15:44:52 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*                               COSTRUCTOR                                   */
/* ************************************************************************** */
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
	return ;
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* ************************************************************************** */
/*                              COPY COSTRUCTOR                               */
/* ************************************************************************** */
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/* ************************************************************************** */
/*                         COPY ASSIGNMENT OPERATOR                           */
/* ************************************************************************** */
Fixed	&Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->value = other.getRawBits();
	return (*this);
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}
