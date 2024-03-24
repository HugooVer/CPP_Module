#include "Form.hpp"

Form::Form() : _name ("..."),
	_isSigned (false),
	_signGrade (1),
	_execGrade (1)
{
	std::cout << "New default Form created" << std::endl;
}
Form::Form(std::string name, int signGrade, int execGrade) :
	_name (name),
	_isSigned (false),
	_signGrade (signGrade),
	_execGrade (execGrade)
{
	if (_execGrade < 1 || _signGrade < 1)
		throw GradeTooHighException();
	else if (_execGrade > 150 || _signGrade > 150)
		throw GradeTooLowException();
	std::cout << "New Form created" << std::endl;
}
Form::Form(Form const &form) :
	_name (form._name),
	_isSigned (form._isSigned),
	_signGrade (form._signGrade),
	_execGrade (form._execGrade)
{
	std::cout << "New copie Form created" << std::endl;
}
Form::~Form()
{
	std::cout << "Form " << this->getName() << " destructor called" << std::endl;
}

std::string Form::getName() const
{
	return _name;
}
bool Form::getIsSigend() const
{
	return _isSigned;
}
signed int Form::getSignGrade() const
{
	return _signGrade;
}
signed int Form::getExecGrade() const
{
	return _execGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw GradeTooLowException();
}
void Form::signForm(Bureaucrat &bureaucrat)
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

Form& Form::operator=(const Form& form) {
	_name = form.getName();
	_isSigned = form.getIsSigend();
	_isSigned = form._isSigned;
	*const_cast<int*>(&_signGrade) = form.getSignGrade();
	*const_cast<int*>(&_execGrade) = form.getExecGrade();
	return *this;
}

const char *Form::GradeTooHighException::what() const throw ()
{
	return "Grade is too high ";
}
const char *Form::GradeTooLowException::what() const throw ()
{
	return "Grade is too low ";
}


std::ostream &operator<< (std::ostream &os, Form const &form)
{
	os  << "\nName :" << form.getName()
		<< "\nIs signed :" << btos(form.getIsSigend())
		<< "\nGrade required to sign :" << form.getSignGrade()
		<< "\nGrade required to execute :" << form.getExecGrade() << "\n";
	return os;
}

std::string btos(bool x)
{
	if (x)
		return "Signed";
	return "Unsigned";
}