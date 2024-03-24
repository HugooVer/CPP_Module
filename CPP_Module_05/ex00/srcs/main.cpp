
#include "Bureaucrat.hpp"

int main() {

	try
	{
		Bureaucrat cp;
		std::cout << cp << std::endl;
		cp.decr();
		Bureaucrat cpy(cp);
		std::cout << cpy << std::endl;
		cp.decr();
		cpy.decr();
		std::cout << cp << std::endl;
		std::cout << cpy << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat tL("To Low", 151);
		std::cout << tL << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat tH("To High", 0);
		std::cout << tH << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat gL("Good Low", 145);
		std::cout << gL << std::endl;
		for (int i = 0; i < 10; i++)
			gL.decr();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat gH("Good High", 5);
		std::cout << gH << std::endl;
		for (int i = 0; i < 10; i++)
			gH.incr();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}