
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
	type = cat.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

void Cat::setIdea(int idx, std::string idea)
{
	if (idx >= 100)
		std::cerr << "Index too high, Cat cannot retain that many ideas." << std::endl;
	else
		this->brain->getIdea(idx) = idea;
}
std::string& Cat::getIdea(int idx)
{
	if (idx >= 100)
	{
		std::cerr << "Index too high, Cat cannot retain that many ideas." << std::endl;
		static std::string emptyString;
		return emptyString;
	}
	else
		return this->brain->getIdea(idx);
}
