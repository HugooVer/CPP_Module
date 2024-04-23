
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try
	{
		Bureaucrat bad("bad", 150);
		Bureaucrat good("good", 1);
		ShrubberyCreationForm tree("tree");
		RobotomyRequestForm robo("robo");
		PresidentialPardonForm pre("pre");
		std::cout << std::endl;
		tree.signAForm(bad);
		robo.signAForm(bad);
		pre.signAForm(bad);
		std::cout << std::endl;
		tree.execute(good);
		robo.execute(good);
		pre.execute(good);
		std::cout << std::endl;
		tree.execute(bad);
		robo.execute(bad);
		pre.execute(bad);
		std::cout << std::endl;
		tree.signAForm(good);
		robo.signAForm(good);
		pre.signAForm(good);
		std::cout << std::endl;
		tree.execute(bad);
		robo.execute(bad);
		pre.execute(bad);
		std::cout << std::endl;
		tree.execute(good);
		tree.execute(good);
		robo.execute(good);
		robo.execute(good);
		robo.execute(good);
		robo.execute(good);
		std::cout << std::endl;
		pre.execute(good);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}