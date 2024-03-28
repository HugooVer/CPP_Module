#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm()
{
	std::cout << "New default Shrubbery created" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	AForm("Shrubbery", 145, 137),
	_target (target)
{
	std::cout << "New Shrubbery created" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform) :
	AForm(shrubberycreationform),
	_target(shrubberycreationform._target)
{
	std::cout << "New copie Shurbbery created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor" << std::endl;
}


void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	(void) bureaucrat;
}











































	// std::cout <<
	// "         ,.,\n"
	// "        MMMM_    ,..,\n"
	// "          \"_ \"__\"MMMMM          ,...,,\n"
	// "   ,..., __.\" --\"    ,.,     _-\"MMMMMMM\n"
	// "  MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"\n"
	// "   \"\"\"\"\"    \"\" , \\_.   \"_. .\"\n"
	// "          ,., _\"__ \\__./ .\"\n"
	// "         MMMMM_\"  \"_    ./\n"
	// "          ''''      (    )\n"
	// "   ._______________.-'____\"---._.\n"
	// "    \\                          /\n"
	// "     \\________________________/\n"
	// "     (_)                    (_)\n"
	// << '\n';