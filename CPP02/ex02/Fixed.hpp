/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 11:29:01 by aramos            #+#    #+#             */
/*   Updated: 2026/04/01 15:49:55 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class	Fixed
{
	private:
		int					value;
		static const int	fractionalBits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(Fixed const & input) const;
		bool	operator<(Fixed const & input) const;
		bool	operator>=(Fixed const & input) const;
		bool	operator<=(Fixed const & input) const;
		bool	operator==(Fixed const & input) const;
		bool	operator!=(Fixed const & input) const;

		Fixed	operator+(Fixed const & input) const;
		Fixed	operator-(Fixed const & input) const;
		Fixed	operator*(Fixed const & input) const;
		Fixed	operator/(Fixed const & input) const;

		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &number1, Fixed &number2);
		static Fixed		&max(Fixed &number1, Fixed &number2);
		static Fixed const	&min(Fixed const &number1, Fixed const &number2);
		static Fixed const	&max(Fixed const &number1, Fixed const &number2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);
# endif
