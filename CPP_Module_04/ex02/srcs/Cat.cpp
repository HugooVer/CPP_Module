
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(std::string animalType) : Animal(animalType)
{
	brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}
Cat::Cat(Cat const &cat)
{
	*this = cat;
	std::cout << "Copy cat constructor called" << std::endl;
}
Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator= (Cat const &cat)
{
	if (this == &cat)
		return *this;
	delete brain;
	type = cat.type;
	brain = new Brain(*cat.brain);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
