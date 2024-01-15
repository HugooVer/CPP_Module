
#include "Fixed.hpp"

int main()
{
	Fixed a(10.10f);
	Fixed b(20);


	std::cout << (a * b) << std::endl;
	std::cout << "a is " << (a + b).toInt() << " as integer" << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;

	return 0;
}