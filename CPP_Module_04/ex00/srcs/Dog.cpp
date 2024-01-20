
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(std::string animalType) : Animal(animalType)
{
	std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(Dog const &dog)
{
	*this = dog;
	std::cout << "Copy Dog constructor called" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator= (Dog const &dog)
{
	type = dog.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}
