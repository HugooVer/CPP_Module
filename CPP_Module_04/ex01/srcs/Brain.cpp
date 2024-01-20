
#include "Brain.hpp"

Brain::Brain ()
{
	std::cout << "Brain default constructor" << std::endl;
}
Brain::Brain(Brain const &brain)
{
	*this = brain;
	std::cout << "Brain copy constructor" << std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator= (Brain const &brain)
{
	for (int idx = 0; idx < 100; ++idx)
		ideas[idx] = brain.ideas[idx];
	return (*this);
}
