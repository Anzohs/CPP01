#include "Zombie.h"

int	main(void)
{
	int i = -1;
	int	zomb = 10;
	Zombie *z =	zombieHorde(zomb, "zee");
	Zombie *s = zombieHorde(0, "h");
	(void)s;
	while (++i < zomb)
		z[i].announce();
	delete[] z;
}
