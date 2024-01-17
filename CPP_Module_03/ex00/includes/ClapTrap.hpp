
#pragma once

#include <iostream>
#include <cstdlib>

class ClapTrap
{
private:
	std::string _name;
	int _hp;
	int _energy;
	int _damage;

public:
	ClapTrap();
	ClapTrap(std::string _name);
	ClapTrap(ClapTrap const &clapTrap);
	~ClapTrap();

	ClapTrap& operator= (ClapTrap const &claptrap);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
