/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 16:39:13 by aramos            #+#    #+#             */
/*   Updated: 2026/03/27 17:27:32 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* ************************************************************************** */
/*                                PRIVATE                                     */
/* ************************************************************************** */
void	Harl::debug(void)
{
	std::cout << "Karen likes to order her hamburger without pickles."
	<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "Karen has ordered hamburger and it contains pickles."
	<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Karen has started to scream at the customer service rep."
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "Karen has pretended to fall and will sue the fast food chain."
	<< std::endl;
}

/* ************************************************************************** */
/*                                 PUBLIC                                     */
/* ************************************************************************** */
void	Harl::complain(std::string level)
{
	typedef void		(Harl::*HarlMemberFunction)(void);
	//An array of pointers to methods of class Harl
	HarlMemberFunction	functions[] = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	//An array of strings that determine the levels of complain
	std::string			levels[] = 
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};
	for (int i = 0; i < 4; ++i)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
}
