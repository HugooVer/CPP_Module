
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal* meta = new Animal();

	Animal *family[5];
	int nb = 5;

	for (int idx = 0; idx < nb; ++idx)
	{
		if (idx % 2 == 0)
			family[idx] = new Dog();
		else
			family[idx] = new Cat();
	}
	
	for (int idx = 0; idx < nb; ++idx)
		delete family[idx];
	return 0;

}
