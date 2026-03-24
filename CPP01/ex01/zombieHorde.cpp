/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:11:13 by aramos            #+#    #+#             */
/*   Updated: 2026/03/24 10:11:15 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// horde[1].setName("queso");
// horde[2].setName("frijol");
// horde[3].setName("salsa");
// horde[4].setName("panito");
Zombie	*zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde;

	if (N <= 0)
		return (NULL);
	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
