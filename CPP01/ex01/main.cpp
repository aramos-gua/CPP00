/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:11:38 by aramos            #+#    #+#             */
/*   Updated: 2026/03/24 10:11:42 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// //zombieHorde
	int		i;
	int		N;
	Zombie	*leader;

	i = 0;
	N = 10;
	leader = zombieHorde(10, "jamon");
	while (i != N)
	{
		std::cout << "[" << i << "] ";
		leader[i].announce();
		i++;
	}
	delete[] leader;
	return (0);
}
