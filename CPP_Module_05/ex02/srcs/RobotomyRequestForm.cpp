#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm() :
	AForm()
{
	std::cout << "New default Shrubbery created" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	AForm("Shrubbery", 72, 45),
	_target (target)
{
	std::cout << "New Shrubbery created" << std::endl;
}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &robotomyrequestform) :
	AForm(robotomyrequestform),
	_target(robotomyrequestform._target)
{
	std::cout << "New copie Shurbbery created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Shrubbery destructor" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat &bureaucrat)
{
	try
	{
		AForm::beExec(bureaucrat);
		std::cout << "Makes some drilling noises" << std::endl;
		if (rand() % 2 == 0)
			std::cout << _target <<" has been robotomized" << std::endl;
		else
			std::cout << _target <<" has not been robotomized" << std::endl;
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

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& source)
{
	AForm::operator=(source);
	return *this;
}

std::ostream &operator<< (std::ostream &os, RobotomyRequestForm const &robotomyrequestform)
{
	os  << "\nName :" << robotomyrequestform.getName()
		<< "\nIs signed :" << btos(robotomyrequestform.getIsSigend())
		<< "\nGrade required to sign :" << robotomyrequestform.getSignGrade()
		<< "\nGrade required to execute :" << robotomyrequestform.getExecGrade() << "\n"
		<< "\nTarget :" << robotomyrequestform.getExecGrade() << "\n";
	return os;
}