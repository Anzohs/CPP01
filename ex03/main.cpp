#include "HumanA.h"
#include "Weapon.h"
#include "HumanB.h"


int main()
{
        Weapon club = Weapon("crude spiked club");
        HumanA bob = HumanA("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
}