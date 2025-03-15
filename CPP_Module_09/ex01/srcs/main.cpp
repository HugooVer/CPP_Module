#include <iostream>

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN rpn;

	if (ac != 2)
		return (std::cout << "This program takes one argument" << std::endl, 1);
	rpn.newExp(std::string(av[1]));
	try{
		std::cout << rpn.solve() << std::endl;
	}
	catch (std::exception &e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	return (0);
}