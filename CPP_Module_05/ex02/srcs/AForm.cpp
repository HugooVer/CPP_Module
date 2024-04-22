#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() :
	_name ("..."),
	_isSigned (false),
	_signGrade (1),
	_execGrade (1)
{
	std::cout << "New default AForm created" << std::endl;
}
AForm::AForm(std::string name, int signGrade, int execGrade) :
	_name (name),
	_isSigned (false),
	_signGrade (signGrade),
	_execGrade (execGrade)
{
	if (_execGrade < 1 || _signGrade < 1)
		throw GradeTooHighException();
	else if (_execGrade > 150 || _signGrade > 150)
		throw GradeTooLowException();
	std::cout << "New AForm created" << std::endl;
}
AForm::AForm(AForm const &aform) :
	_name (aform._name),
	_isSigned (aform._isSigned),
	_signGrade (aform._signGrade),
	_execGrade (aform._execGrade)
{
	std::cout << "New copie AForm created" << std::endl;
}
AForm::~AForm()
{
	std::cout << "AForm " << this->getName() << " destructor called" << std::endl;
}

std::string AForm::getName() const
{
	return _name;
}
bool AForm::getIsSigend() const
{
	return _isSigned;
}
signed int AForm::getSignGrade() const
{
	return _signGrade;
}
signed int AForm::getExecGrade() const
{
	return _execGrade;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw GradeTooLowException();
}

void AForm::beExec(const Bureaucrat &bureaucrat)
{
	if (_isSigned == false)
		throw NotSigned();
	else if (bureaucrat.getGrade() > _execGrade)
		throw GradeTooLowException();
}

void AForm::signAForm(Bureaucrat &bureaucrat)
{
	try
	{
		beSigned(bureaucrat);
		if (_isSigned == true)
			std::cout << bureaucrat.getName() << " couldn’t sign " << _name << " because it's alredy signed" << std::endl;
		else
		{
			_isSigned = true;
			std::cout << bureaucrat.getName() << " siged " << _name << std::endl;
		}
	}
	catch (std::exception& e)
	{
		if (bureaucrat.getGrade() - _signGrade == 1)
			std::cout << bureaucrat.getName() << " couldn’t sign " << _name << " because his " << e.what() << bureaucrat.getGrade() - _signGrade << " grade point is missing." << std::endl;
		else
			std::cout << bureaucrat.getName() << " couldn’t sign " << _name << " because his " << e.what() << bureaucrat.getGrade() - _signGrade << " grades points are missing." << std::endl;

	}
}

AForm& AForm::operator=(const AForm& aform) {
	_name = aform.getName();
	_isSigned = aform.getIsSigend();
	_isSigned = aform._isSigned;
	*const_cast<int*>(&_signGrade) = aform.getSignGrade();
	*const_cast<int*>(&_execGrade) = aform.getExecGrade();
	return *this;
}

const char *AForm::GradeTooHighException::what() const throw ()
{
	return "Grade is too high ";
}
const char *AForm::GradeTooLowException::what() const throw ()
{
	return "Grade is too low ";
}
const char *AForm::FileError::what() const throw ()
{
	return "File Error";
}
const char *AForm::NotSigned::what() const throw ()
{
	return "Form not signed";
}

std::ostream &operator<< (std::ostream &os, AForm const &aform)
{
	os  << "\nName :" << aform.getName()
		<< "\nIs signed :" << btos(aform.getIsSigend())
		<< "\nGrade required to sign :" << aform.getSignGrade()
		<< "\nGrade required to execute :" << aform.getExecGrade() << "\n";
	return os;
}

std::string btos(bool x)
{
	if (x)
		return "Signed";
	return "Unsigned";
}