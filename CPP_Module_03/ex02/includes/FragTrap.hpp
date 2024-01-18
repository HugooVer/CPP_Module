
#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(FragTrap const &fragtrap);
		~FragTrap();
		FragTrap& operator= (FragTrap const &fragtrap);
		void highFivesGuys();

};