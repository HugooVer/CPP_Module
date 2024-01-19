#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(std::string wrongAmimalType);
	WrongCat(WrongCat const &wrongCat);
	~WrongCat();

	WrongCat& operator= (WrongCat const &wrongCat);
	void makeSound() const;
	std::string getType() const;
};