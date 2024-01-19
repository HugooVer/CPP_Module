
#include "Animal.hpp"

Animal::Animal() : type ("NULL")
{
	std::cout << "Animal default constructor caled" << std::endl;
}
Animal::Animal(std::string animalType) : type (animalType)
{
	std::cout << "Animal constructor caled" << std::endl;
}
Animal::Animal(Animal const &animal)
{
	*this = animal;
	std::cout << "Copy animal constructor called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal destructor caled" << std::endl;
}

Animal& Animal::operator= (Animal const &animal)
{
	type = animal.type;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "No sound" << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

std::ostream &operator<< (std::ostream &os, Animal const &animal)
{
	os << animal.getType();
	return os;
}