#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{

	if (n < 1)
		return (nullptr);
	Zombie *horde;
	for (int i = 0; i < n; i++)
	{
		new(&horde[i]) Zombie(name);
	}
	return (horde);
}
