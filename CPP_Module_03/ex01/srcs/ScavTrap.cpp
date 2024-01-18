
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap (name)
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}
ScavTrap::ScavTrap(ScavTrap const &scavtrap)
{
	*this = scavtrap;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout  << std::endl << "ScavTrap Destructor called";
}

void ScavTrap::attack(const std::string& target)
{
	if (_energy > 0 && _hp > 0)
	{
		--_energy;
		std::cout  << std::endl << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage." << std::endl;
		std::cout << "Energie = " << _energy << std::endl;
		std::cout << "HP = " << _hp << std::endl;
		return;
	}
	else if (_hp < 0)
	{
		std::cout  << std::endl << "ScavTrap " << _name << " his dead" << std::endl;
		return;
	}
	std::cout  << std::endl << "ScavTrap " << _name << " cant attacks " << target << " because he's out of energiy." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << std::endl << "ScavTrap is now in Gate keeper mode !" << std::endl << std::endl;
}