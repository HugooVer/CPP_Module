
#pragma once

#include <iostream>
#include <cstdlib>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string wrongAnimalType);
	WrongAnimal(WrongAnimal const &wrongAnimal);
	~WrongAnimal();

	WrongAnimal& operator= (WrongAnimal const &wrongAnimal);
	virtual void makeSound() const;
	std::string getType() const;
};

std::ostream &operator<< (std::ostream &os, WrongAnimal const &wrongAnimal);