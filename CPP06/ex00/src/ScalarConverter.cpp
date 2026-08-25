/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <alejandro.ramos.gua@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 12:51:51 by aramos            #+#    #+#             */
/*   Updated: 2026/08/24 12:52:00 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

enum	LiteralType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

size_t	detectPseudoLiteral(const std::string &literal)
{
	if (literal == "-inf" || literal == "+inf" || literal == "nan" )
		return (1);
	else if (literal == "-inff" || literal == "+inff" || literal == "nanf")
		return (2);
	else
		return (3);
}

bool	allNumbers(const std::string &literal)
{
	size_t	i = 0;

	if (literal[i] && (literal[i] == '-' || literal[i] == '+'))
			i++;
	while (i < literal.size())
	{
		if (literal[i] < 48 || literal[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

LiteralType	detectType(const std::string &literal)
{
	size_t	pos = literal.find(".");

	if (literal.empty())
		return (INVALID);
	if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'')
		return (CHAR);
	else if (detectPseudoLiteral(literal) == 1)
		return (DOUBLE);
	else if (detectPseudoLiteral(literal) == 2)
		return (FLOAT);
	else if (literal[literal.size() - 1] == 'f')
		return (FLOAT);
	else if (pos != std::string::npos)
		return (DOUBLE);
	else if (allNumbers(literal))
		return (INT);
	return (INVALID);
}


void	ScalarConverter::convert(const std::string &literal)
{
	LiteralType	type = detectType(literal);
	double		value;
	switch (type)
}
