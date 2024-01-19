
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongCat default constructor caled" << std::endl;
}
WrongCat::WrongCat(std::string WrongAnimalType) : WrongAnimal(WrongAnimalType)
{
	std::cout << "WrongCat constructor caled" << std::endl;
}
WrongCat::WrongCat(WrongCat const &wrongCat)
{
	*this = wrongCat;
	std::cout << "Copy Wrongcat constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor caled" << std::endl;
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
