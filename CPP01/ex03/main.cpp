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
	Weapon	crossbow;
	Weapon	knife;
	Weapon	gun;
	HumanA	leon("Leon", knife);

	crossbow.setType("Long Range");
	knife.setType("Short Range");
	knife.setType("Fire Arm");
	leon.attack();
	return (0);
}
