
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	try
	{
		Form Test;
		std::cout << Test << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "\n\n";
		Bureaucrat good("Good", 10);
		std::cout << good << std::endl;
		Form test("Test", 10, 10);
		std::cout << test << std::endl;
		good.signForm(test);
		std::cout << test << std::endl;
		good.signForm(test);
		std::cout << test << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "\n\n";
		Bureaucrat bad("Bad", 12);
		std::cout << bad << std::endl;
		Form test("Test", 10, 10);
		std::cout << test << std::endl;
		bad.signForm(test);
		std::cout << test << std::endl;
		bad.incr();
		bad.signForm(test);
		std::cout << test << std::endl;
		bad.incr();
		bad.signForm(test);
		std::cout << test << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}