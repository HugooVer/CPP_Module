
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(std::string animalType) : Animal(animalType)
{
	brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}
Dog::Dog(Dog const &dog)
{
	*this = dog;
	std::cout << "Copy Dog constructor called" << std::endl;
}
Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator= (Dog const &dog)
{
	if (this == &dog)
		return *this;
	delete brain;
	type = dog.type;
	brain = new Brain(*dog.brain);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}

