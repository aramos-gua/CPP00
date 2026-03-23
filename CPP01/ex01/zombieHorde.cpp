#include "Zombie.hpp"

// horde[1].setName("queso");
// horde[2].setName("frijol");
// horde[3].setName("salsa");
// horde[4].setName("panito");
Zombie	*zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde;

	if (N <= 0)
		return (NULL);
	i = 0;
	horde = new Zombie[N];
	while (i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return (horde);
}
