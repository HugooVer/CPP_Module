
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
	_hp = 100;
	_energy = 100;
	this->_damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}
FragTrap::FragTrap(FragTrap const &fragtrap)
{
	*this = fragtrap;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout  << std::endl << "FragTrap Destructor called";
}

FragTrap& FragTrap::operator= (FragTrap const &fragtrap)
{
	_name = fragtrap._name;
	_hp = fragtrap._hp;
	_energy = fragtrap._energy;
	_damage = fragtrap._damage;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << std::endl << "High fives !!" << std::endl << std::endl;
}