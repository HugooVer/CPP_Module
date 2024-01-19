
#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string amimalType);
	Dog(Dog const &dog);
	~Dog();

	Dog& operator= (Dog const &dog);
	void makeSound() const;
};