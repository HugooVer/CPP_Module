
#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "The memory address of string\t\t: " << &string << std::endl;
	std::cout << "The memory address held by stringPTR\t: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF\t: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "The vallue of string\t\t\t: " << string << std::endl;
	std::cout << "The vallue pointed to by stringPTR\t: " << *stringPTR << std::endl;
	std::cout << "The vallue pointed to by stringREF\t: " << stringREF << std::endl;
}