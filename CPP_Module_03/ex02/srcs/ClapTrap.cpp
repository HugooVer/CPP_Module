
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name ("NULL"), _hp (10), _energy (10), _damage (0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}
ClapTrap::ClapTrap(std::string name) : _name (name), _hp (10), _energy (10), _damage (0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const &claptrap)
{
	*this = claptrap;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout  << std::endl << "ClapTrap sestructor called";
}

ClapTrap& ClapTrap::operator= (ClapTrap const &claptrap)
{
	_name = claptrap._name;
	_hp = claptrap._hp;
	_energy = claptrap._energy;
	_damage = claptrap._damage;
	return *this;
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