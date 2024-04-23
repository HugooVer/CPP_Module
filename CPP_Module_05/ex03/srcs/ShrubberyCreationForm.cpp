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

void ShrubberyCreationForm::execute(Bureaucrat &bureaucrat)
{
	try
	{
		AForm::beExec(bureaucrat);
		std::ofstream myOutputFile (_target.append("_shrubbery").c_str());
		if (!myOutputFile.is_open() || myOutputFile.fail())
			throw FileError();
		myOutputFile <<
		"         ,.,\n"
		"        MMMM_    ,..,\n"
		"          \"_ \"__\"MMMMM          ,...,,\n"
		"   ,..., __.\" --\"    ,.,     _-\"MMMMMMM\n"
		"  MMMMMM\"___ \"_._   MMM\"_.\"\" _ \"\"\"\"\"\"\n"
		"   \"\"\"\"\"    \"\" , \\_.   \"_. .\"\n"
		"          ,., _\"__ \\__./ .\"\n"
		"         MMMMM_\"  \"_    ./\n"
		"          ''''      (    )\n"
		"   ._______________.-'____\"---._.\n"
		"    \\                          /\n"
		"     \\________________________/\n"
		"     (_)                    (_)";
		myOutputFile.close();
	}
	catch (FileError& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (NotSigned& e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (std::exception& e)
	{
		if (bureaucrat.getGrade() - this->getSignGrade() == 1)
			std::cout << bureaucrat.getName() << " couldn’t execute " << this->getName() << " because his " << e.what() << bureaucrat.getGrade() - this->getSignGrade() << " grade point is missing." << std::endl;
		else
			std::cout << bureaucrat.getName() << " couldn’t execute " << this->getName() << " because his " << e.what() << bureaucrat.getGrade() - this->getSignGrade() << " grades points are missing." << std::endl;
	}
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& source)
{
	AForm::operator=(source);
	return *this;
}

std::ostream &operator<< (std::ostream &os, ShrubberyCreationForm const &shrubberycreationform)
{
	os  << "\nName :" << shrubberycreationform.getName()
		<< "\nIs signed :" << btos(shrubberycreationform.getIsSigend())
		<< "\nGrade required to sign :" << shrubberycreationform.getSignGrade()
		<< "\nGrade required to execute :" << shrubberycreationform.getExecGrade() << "\n"
		<< "\nTarget :" << shrubberycreationform.getExecGrade() << "\n";
	return os;
}