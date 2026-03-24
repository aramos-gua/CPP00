/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:12:14 by aramos            #+#    #+#             */
/*   Updated: 2026/03/24 10:12:15 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	deleteZombie(Zombie *zombie)
{
	delete zombie;
}

int	main(void)
{
	//Zombie in stack
	randomChump("PushSwap");

	//Heap Zombie
	Zombie	*shakira = newZombie("Shakira");
	shakira->announce();

	deleteZombie(shakira);
	return (0);
}
