#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string> 
# include <iostream>
# include <cstddef>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

//newZombie.cpp
Zombie	*newZombie(std::string name);

//randomChump.cpp
void	randomChump(std::string name);

//zombieHorde.cpp
Zombie	*zombieHorde(int N, std::string name);
# endif
