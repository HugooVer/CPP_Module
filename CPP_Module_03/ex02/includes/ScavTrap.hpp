
#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(ScavTrap const &scavtrap);
		~ScavTrap();
		void attack(const std::string& target);
		ScavTrap& operator= (ScavTrap const &scavtrap);
		void guardGate();

};