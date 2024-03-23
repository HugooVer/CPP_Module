#include "Form.hpp"

Form::Form() : _name ("..."), _isSigned (false), _signGrade (1), _execGrade (1)
{
	std::cout << "New default Form created" << std::endl;
}
Form::Form(std::string name, int signGrade, int execGrade) : _name (name), _isSigned (false), _signGrade (signGrade), _execGrade (execGrade)
{
	if (_execGrade < 1 || _signGrade < 1)
		throw GradeTooHighException();
	else if (_execGrade > 150 || _signGrade > 150)
		throw GradeTooLowException();
	std::cout << "New Form created" << std::endl;
}
Form::Form(Form const &form) : _name (form._name), _isSigned (form._isSigned), _signGrade (form._signGrade), _execGrade (form._execGrade)
{
	
	std::cout << "New copie Form created" << std::endl;
}
Form::~Form()
{
	std::cout << "Form " << this->getName() << " destructor called" << std::endl << std::endl;
}

std::string Form::getName() const
{
	return _name;
}
bool Form::getIsSigend()
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

Form& Form::operator=(const Form& form) {
	_name = form.getName();
	_isSigned = form._isSigned;
	*const_cast<int*>(&_signGrade) = form.getSignGrade();
	*const_cast<int*>(&_execGrade) = form.getExecGrade();
	return *this;
}

// std::ostream &operator<< (std::ostream &os, Form const &form)
// {
// 	os << 
// 	return os;
// }

const char *Form::GradeTooHighException::what() const throw ()
{
	return "Grade is too high maximum grade is 1";
}
const char *Form::GradeTooLowException::what() const throw ()
{
	return "Grade is too low minimum grade is 150";
}
