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
