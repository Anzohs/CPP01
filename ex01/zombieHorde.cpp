#include "Zombie.h"

Zombie *zombieHorde(int n, std::string name)
{

	if (n < 1)
		return (0);
	Zombie *horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		horde[i].set_name(name);
	return (horde);
}
