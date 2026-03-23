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
