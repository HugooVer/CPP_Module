
#pragma once

#include "Weapon.hpp"

class HumanA {

	private:

	std::string _name;
	Weapon *_myWeapon;
	public:

	HumanA(std::string name, Weapon &myWeapon);
	~HumanA();

	void attack();
};