
#pragma once

#include <iostream>
#include <cstdlib>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(std::string animalType);
	Animal(Animal const &animal);
	~Animal();

	Animal& operator= (Animal const &animal);
	virtual void makeSound() const;
	std::string getType() const;
};

std::ostream &operator<< (std::ostream &os, Animal const &animal);