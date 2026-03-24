/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:12:38 by aramos            #+#    #+#             */
/*   Updated: 2026/03/24 10:12:39 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string> 
# include <iostream> 

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
};

//newZombie.cpp
Zombie*	newZombie(std::string name);

//randomChump.cpp
void	randomChump(std::string name);
# endif
