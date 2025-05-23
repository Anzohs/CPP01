#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void  announce(void);
		void  set_name(std::string name);
	private:
		std::string name;
};

Zombie*  zombieHorde(int N, std::string name);

#endif
