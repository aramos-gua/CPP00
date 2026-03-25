/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:01:06 by aramos            #+#    #+#             */
/*   Updated: 2026/03/24 17:50:08 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon	crossbow = Weapon("Long Range");
	Weapon	knife = Weapon("Short Range");
	Weapon	gun = Weapon("Fire Arm");
	HumanA	leon("Leon", knife);
	HumanB	ashley("Ashley");

	leon.attack();
	ashley.attack();
	ashley.setWeapon(gun);
	ashley.attack();
	// {
	// 	Weapon	club = Weapon("crude spike club");
	//
	// 	HumanA	bob("Bob", club);
	// 	bob.attack();
	// 	club.setType("some other type of club");
	// 	bob.attack();
	// }
	//
	// {
	// 	Weapon	club = Weapon("crude spiked club");
	//
	// 	HumanB	jim("Jim");
	// 	jim.setWeapon(club);
	// 	jim.attack();
	// 	club.setType("some other type of club");
	// 	jim.attack();
	// }
	return (0);
}
