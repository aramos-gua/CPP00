#include "Zombie.hpp"

int	main(void)
{
	//Zombie in stack
	randomChump("PushSwap");

	//Heap Zombie
	Zombie	*shakira = newZombie("Shakira");
	shakira->announce();

	delete shakira;
	return (0);
}
