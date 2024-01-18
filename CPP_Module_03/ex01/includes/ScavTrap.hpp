
#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(ScavTrap const &scavtrap);
		~ScavTrap();
		virtual void attack(const std::string& target);
		void guardGate();
		
};