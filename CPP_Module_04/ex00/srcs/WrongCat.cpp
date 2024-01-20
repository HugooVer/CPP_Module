
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}
WrongCat::WrongCat(std::string WrongAnimalType) : WrongAnimal(WrongAnimalType)
{
	std::cout << "WrongCat constructor called" << std::endl;
}
WrongCat::WrongCat(WrongCat const &wrongCat)
{
	*this = wrongCat;
	std::cout << "Copy Wrongcat constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator= (WrongCat const &wrongCat)
{
	type = wrongCat.type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Vroom" << std::endl;
}
