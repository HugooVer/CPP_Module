
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

// std::string& Brain::getIdea(int idx) {
//     if (idx >= 100) {
//         std::cerr << "Index too high, Cat cannot retain that many ideas.\n";
//         static std::string emptyString;
//         return emptyString;
//     }
//     else 
//         return this->ideas[idx];
// }