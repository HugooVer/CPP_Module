#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm()
{
	std::cout << "New default Presidential created" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	AForm("Presidential", 25, 5),
	_target (target)
{
	std::cout << "New Presidential created" << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform) :
	AForm(presidentialpardonform),
	_target(presidentialpardonform._target)
{
	std::cout << "New copie Shurbbery created" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential destructor" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat &bureaucrat)
{
	try
	{
		AForm::beExec(bureaucrat);
		std::cout << "Informs that " << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
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

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& source)
{
	AForm::operator=(source);
	return *this;
}

std::ostream &operator<< (std::ostream &os, PresidentialPardonForm const &presidentialpardonform)
{
	os  << "\nName :" << presidentialpardonform.getName()
		<< "\nIs signed :" << btos(presidentialpardonform.getIsSigend())
		<< "\nGrade required to sign :" << presidentialpardonform.getSignGrade()
		<< "\nGrade required to execute :" << presidentialpardonform.getExecGrade() << "\n"
		<< "\nTarget :" << presidentialpardonform.getExecGrade() << "\n";
	return os;
}