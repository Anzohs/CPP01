#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.h"

class HumanA{

	private:
		Weapon &w;
		std::string name;
	public:
		HumanA(std::string name, Weapon &w);
		~HumanA(void);
		void  attack(void);

};

#endif
