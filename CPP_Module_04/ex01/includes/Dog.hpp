
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* brain;

public:
	Dog();
	Dog(std::string amimalType);
	Dog(Dog const &dog);
	~Dog();

	Dog& operator= (Dog const &dog);
	void makeSound() const;

};