/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 16:14:18 by aramos            #+#    #+#             */
/*   Updated: 2026/04/08 17:17:09 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Hero");

	a.attack("Enemy");
	a.takeDamage(5);
	a.beRepaired(3);
	// a.takeDamage(20);
	a.attack("Enemy");
	return (0);
}
