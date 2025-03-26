#include "Zombie.h"

Zombie *zombieHorde(int n, std::string name)
{

	if (n < 1)
		return (nullptr);
	Zombie *horde = new Zombie[n];
	for (int i = 0; i < n; i++)
		new(&horde[i]) Zombie(name);
	return (horde);
}
