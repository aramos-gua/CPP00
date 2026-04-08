/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 10:36:24 by aramos            #+#    #+#             */
/*   Updated: 2026/04/08 15:16:01 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	value = 0;
	return ;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Int constructor called" << std::endl;
	value = num << fractionalBits;
	return ;
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << fractionalBits));
	return ;
}
/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                              COPY COSTRUCTOR                               */
/* ************************************************************************** */
Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

/* ************************************************************************** */
/*                         COPY ASSIGNMENT OPERATOR                           */
/* ************************************************************************** */
Fixed	&Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
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
/*                         ARITMETIC MEMBER FUNCTIONS                         */
/* ************************************************************************** */
Fixed	Fixed::operator+(Fixed const & input) const
{
	return (Fixed(this->toFloat() + input.toFloat()));
}
Fixed	Fixed::operator-(Fixed const & input) const
{
	return (Fixed(this->toFloat() - input.toFloat()));
}
Fixed	Fixed::operator*(Fixed const & input) const
{
	return (Fixed(this->toFloat() * input.toFloat()));
}
Fixed	Fixed::operator/(Fixed const & input) const
{
	if (input == 0)
	{
		std::cout << "Division by 0 is undefined." << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFloat() / input.toFloat()));
}

/* ************************************************************************** */
/*                             ++/-- MEMBER FUNCTIONS                         */
/* ************************************************************************** */
Fixed	Fixed::operator++(void)
{
	++(value);
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	--(value);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	++(value);
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	--(value);
	return (temp);
}

/* ************************************************************************** */
/*                         COMPARISON MEMBER FUNCTIONS                        */
/* ************************************************************************** */
bool	Fixed::operator>(Fixed const & input) const
{
	if (this->value > input.value)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const & input) const
{
	if (this->value < input.value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const & input) const
{
	if (this->value >= input.value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const & input) const
{
	if (this->value <= input.value)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const & input) const
{
	if (this->value == input.value)
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const & input) const
{
	if (this->value != input.value)
		return (true);
	return (false);
}

/* ************************************************************************** */
/*                            MIN/MAX MEMBER FUNCTIONS                        */
/* ************************************************************************** */
Fixed	&Fixed::min(Fixed &number1, Fixed &number2)
{
	if (number1.value > number2.value)
		return (number2);
	return (number1);
}

Fixed	&Fixed::max(Fixed &number1, Fixed &number2)
{
	if (number1.value < number2.value)
		return (number2);
	return (number1);
}

Fixed const	&Fixed::min(Fixed const &number1, Fixed const &number2)
{
	if (number1.value > number2.value)
		return (number2);
	return (number1);
}

Fixed const	&Fixed::max(Fixed const &number1, Fixed const &number2)
{
	if (number1.value < number2.value)
		return (number2);
	return (number1);
}

/* ************************************************************************** */
/*                                 FREE FUNCTIONS                             */
/* ************************************************************************** */
std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
