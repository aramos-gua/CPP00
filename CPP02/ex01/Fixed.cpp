/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:36:24 by aramos            #+#    #+#             */
/*   Updated: 2026/04/01 15:49:52 by aramos           ###   ########.fr       */
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

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	value = num << fractionalBits;
	return ;
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << fractionalBits));
	return ;
}
/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                              COPY COSTRUCTOR                               */
/* ************************************************************************** */
Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
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
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return (float)value / (1 << fractionalBits);
}

int		Fixed::toInt(void) const
{
	return (value >> fractionalBits);
}

/* ************************************************************************** */
/*                                 FREE FUNCTIONS                             */
/* ************************************************************************** */
std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
