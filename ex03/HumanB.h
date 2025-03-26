#pragma once
#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.h"

class HumanB
{
	private:
		Weapon *w;
		std::string name;
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &w);
		void attack(void);
};

#endif
