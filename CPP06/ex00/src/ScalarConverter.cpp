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

#include "ScalarConverter.hpp"

enum	LiteralType
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

LiteralType	detectType(const std::string &literal)
{
	if (literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'')
	{
		if (literal[1] > 29 && literal[1] < 127)
			return (CHAR);
	}
}
