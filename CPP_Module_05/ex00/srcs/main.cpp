
#include "Bureaucrat.hpp"

int main() {

	Bureaucrat();

	try
	{
		Bureaucrat ("To High", 151);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ("To Low", 0);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Good Low", 145);
		for (int i = 0; i < 10; i++)
			b.decr();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat b("Good High", 5);
		for (int i = 0; i < 10; i++)
			b.incr();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}