#include "HumanB.h"
#include "Weapon.h"

HumanB::HumanB(std::string name) : w(nullptr), name(name){}

void HumanB::setWeapon(Weapon &w){
	this->w = &w;
}

void HumanB::attack(void)
{
	if (!this->w)
		return;
	std::cout << this->name << " attacks with their ";
	std::cout << this->w->getType() << std::endl;
}
