#include "Form.hpp"
#include "Bureaucrat.hpp"

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
	else
		_isSigned = true;
}

Form& Form::operator=(const Form& form) {
	*const_cast<std::string*>(&_name) = form.getName();
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