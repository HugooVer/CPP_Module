
#include "Bureaucrat.hpp"
#include "Intern.hpp"

void fun (std::string val)
{
	Bureaucrat good("good", 1);
	Intern intern;
	AForm *form;
	form = intern.makeForm(val, val);
	form->execute(good);
	form->signAForm(good);
	form->execute(good);
	delete form;
}

int main() {
	try
	{
		fun("Shrubbery");
		fun("Roboto");
		fun("Presidential");
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}