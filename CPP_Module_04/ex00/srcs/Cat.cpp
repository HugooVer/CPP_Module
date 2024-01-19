
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat default constructor caled" << std::endl;
}
Cat::Cat(std::string animalType) : Animal(animalType)
{
	std::cout << "Cat constructor caled" << std::endl;
}
Cat::Cat(Cat const &cat)
{
	*this = cat;
	std::cout << "Copy cat constructor called" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Cat destructor caled" << std::endl;
}

Cat& Cat::operator= (Cat const &cat)
{
	type = cat.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
