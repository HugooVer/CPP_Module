#include "ScalarConverter.hpp"

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Not good format ony one argument !" << std::endl;
		exit(EXIT_FAILURE);
	}
	ScalarConverter::checkType(argv[1]);
	return 0;
}