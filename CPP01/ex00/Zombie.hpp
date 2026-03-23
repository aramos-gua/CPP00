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
