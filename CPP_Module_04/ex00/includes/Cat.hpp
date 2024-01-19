
#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(std::string amimalType);
	Cat(Cat const &cat);
	~Cat();

	Cat& operator= (Cat const &cat);
	void makeSound() const;
	// std::string getType() const;
};