
#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie" << " have been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " have been destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	_name = name;
}

