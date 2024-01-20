
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor caled" << std::endl;
}
Dog::Dog(std::string animalType) : Animal(animalType)
{
	brain = new Brain();
	std::cout << "Dog constructor caled" << std::endl;
}
Dog::Dog(Dog const &dog)
{
	*this = dog;
	std::cout << "Copy Dog constructor called" << std::endl;
}
Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor caled" << std::endl;
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

void Dog::setIdea(int idx, std::string idea)
{
	if (idx >= 100)
		std::cerr << "Index too high, Dog cannot retain that many ideas." << std::endl;
	else
		this->brain->getIdea(idx) = idea;
}

std::string& Dog::getIdea(int idx)
{
	if (idx >= 100)
	{
		std::cerr << "Index too high, Dog cannot retain that many ideas." << std::endl;
		static std::string emptyString;
		return emptyString;
	}
	else
		return this->brain->getIdea(idx);
}
