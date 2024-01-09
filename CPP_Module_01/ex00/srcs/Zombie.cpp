
#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
	name = n;
	std::cout << name << " have been created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << " have been destroyed" << std::endl;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
