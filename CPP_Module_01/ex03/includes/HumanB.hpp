
#pragma once

#include "Weapon.hpp"

class HumanB {

	private:

	std::string _name;
	Weapon *_myWeapon;
	public:

	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon &myWeapon);
};