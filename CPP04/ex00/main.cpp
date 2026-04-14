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

int	main(void)
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();
	const WrongAnimal	*wrong = new WrongCat();

	std::cout << std::endl << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << "Dog makes a sound: ";
	j->makeSound();
	std::cout << "Cat makes a sound: ";
	i->makeSound();
	std::cout << "Animal makes a sound: ";
	meta->makeSound();
	std::cout << "Wrong animal makes a sound from a virtual method: ";
	wrong->makeSound();
	std::cout << "Wrong animal makes a sound from a non-virtual method: ";
	wrong->makeSound2();
	std::cout << std::endl << std::endl;

	delete j;
	delete i;
	delete meta;
	delete wrong;
	return (0);
}
