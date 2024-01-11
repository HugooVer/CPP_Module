
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_myWeapon = NULL;
	_name = name;
}

HumanB::~HumanB()
{
	;
}

void HumanB::attack()
{
	if (!_myWeapon)
		std::cout << _name << " has no weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _myWeapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &myWeapon)
{
	_myWeapon = &myWeapon;
}