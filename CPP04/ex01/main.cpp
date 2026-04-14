/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 16:21:31 by aramos            #+#    #+#             */
/*   Updated: 2026/04/13 19:26:53 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./inc/Animal.hpp"
#include "./inc/Cat.hpp"
#include "./inc/Dog.hpp"
#include "./inc/WrongAnimal.hpp"
#include "./inc/WrongCat.hpp"

/*other test
	// Dog	sparky;
	// Dog	fluf = sparky;
	// sparky = fluf;
	//
	// Cat	meow;
	// Cat	snow;
	// snow = meow;
*/
int	main(void)
{
	Animal	*pack[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			pack[i] = new Dog();
		else 
			pack[i] = new Cat();
	}

	for (int i = 0; i < 100; i++)
		delete (pack[i]);
	return (0);
}
