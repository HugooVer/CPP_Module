
#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	_name = "NULL";
	_hp = 10;
	_energy = 10;
	_damage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called" << std::endl;
	_name = name;
	_hp = 10;
	_energy = 10;
	_damage = 0;
}
ClapTrap::ClapTrap(ClapTrap const &clapTrap)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = clapTrap;
}
ClapTrap::~ClapTrap()
{
	std::cout  << std::endl << "Destructor called";
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy > 0 && _hp > 0)
	{
		--_energy;
		std::cout  << std::endl << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage." << std::endl;
		std::cout << "Energie = " << _energy << std::endl;
		std::cout << "HP = " << _hp << std::endl;
		return;
	}
	else if (_hp < 0)
	{
		std::cout  << std::endl << "ClapTrap " << _name << " his dead" << std::endl;
		return;
	}
	std::cout  << std::endl << "ClapTrap " << _name << " cant attacks " << target << " because he's out of energiy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp < 0)
	{
		std::cout  << std::endl << "ClapTrap " << _name << " his dead" << std::endl;
		return;
	}
	std::cout  << std::endl << "ClapTrap " << _name << " was attacked. -" << amount << " HP" << std::endl;
	_hp -= amount;
	std::cout << "Energie = " << _energy << std::endl;
	std::cout << "HP = " << _hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
	if (_energy > 0 && _hp > 0)
	{
		--_energy;
		std::cout  << std::endl << "ClapTrap " << _name << " repairs itsel. +" << amount << " HP" << std::endl;
		_hp += amount;
		std::cout << "Energie = " << _energy << std::endl;
		std::cout << "HP = " << _hp << std::endl;
		return;
	}
	else if (_hp < 0)
	{
		std::cout  << std::endl << "ClapTrap " << _name << " his dead" << std::endl;
		return;
	}
	std::cout  << std::endl << "ClapTrap " << _name << " cant repare because he's out of energiy." << std::endl;
}