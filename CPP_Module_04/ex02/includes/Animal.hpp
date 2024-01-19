
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
	virtual ~Animal();

	Animal& operator= (Animal const &animal);
	virtual void makeSound() const = 0;
	std::string getType() const;

	// virtual void    setIdea(int idx, std::string idea) {(void)idx, (void)idea;}

	// virtual std::string&    getIdea(int idx) {(void)idx; static std::string emptyString; return emptyString;}
};

std::ostream &operator<< (std::ostream &os, Animal const &animal);