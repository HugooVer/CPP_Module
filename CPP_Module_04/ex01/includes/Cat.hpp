
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* brain;

public:
	Cat();
	Cat(std::string amimalType);
	Cat(Cat const &cat);
	~Cat();

	Cat& operator= (Cat const &cat);
	void makeSound() const;

};