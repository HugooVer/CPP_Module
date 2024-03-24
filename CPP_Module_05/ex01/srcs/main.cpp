
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {

	try
	{
		Bureaucrat Yes("Yes", 10);
		std::cout << Yes << std::endl;
		Form test("Test", 10, 10);
		std::cout << test << std::endl;
		test.signForm(Yes);
		std::cout << test << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	

	return 0;
}