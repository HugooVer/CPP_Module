
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type ("NULL")
{
	std::cout << "WrongAnimal default constructor caled" << std::endl;
}
WrongAnimal::WrongAnimal(std::string wrongAnimalType) : type (wrongAnimalType)
{
	std::cout << "WrongAnimal constructor caled" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal const &wrongAnimal)
{
	*this = wrongAnimal;
	std::cout << "Copy Wronganimal constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor caled" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (WrongAnimal const &wrongAnimal)
{
	type = wrongAnimal.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "No wrong sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}

std::ostream &operator<< (std::ostream &os, WrongAnimal const &wrongAnimal)
{
	os << wrongAnimal.getType();
	return os;
}