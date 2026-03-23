#include "Zombie.hpp"


/******************************************************************************/
/*                                 CONSTRUCTOR                                */
/******************************************************************************/
Zombie::Zombie(std::string name) : name(name)
{
	//this->name = name;
	return ;
}

/******************************************************************************/
/*                                  DESTRUCTOR                                */
/******************************************************************************/
Zombie::~Zombie(void)
{
	std::cout << "Zombie " << name << " is dead. I mean, it was already dead, it's a zombie. But you know, it's destroyed dead." << std::endl;
}

/******************************************************************************/
/*                                 PUBLIC                                     */
/******************************************************************************/
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
