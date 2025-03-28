#include "HumanA.h"
#include "Weapon.h"

HumanA::HumanA(std::string name, Weapon &w) : w(w), name(name)
{
}

HumanA::~HumanA(){}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->w.getType() << std::endl;
}
