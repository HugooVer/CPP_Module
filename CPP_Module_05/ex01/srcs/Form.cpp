#include "Form.hpp"

Form::Form() : _name ("..."), _isSigned (false), _signGrade (1), _execGrade (1)
{
	std::cout << "New default Form created" << std::endl;
}
Form::Form(std::string name, int signGrade, int execGrade) : _name (name) _isSigned (false)
{
	setGrade(signGrade, 0);
	setGrade(execGradeGrade, 1);
	std::cout << "New Form created" std::endl;
}
Form::Form(Form const &form)
{
	*this = form;
	std::cout << "New copie Form created" << std::endl;
}
Form::~Form()
{
	std::cout << "Form " << this.getName() << " destructor called" << std::endl << std::endl;
}

void Form::setGrade(int grade, int arg)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else if (pos == 0)
		_signGrade = grade;
	else if (pos == 1)
		_execGrade = grade;
	else
		throw BadArgument();
}

Form& Form::operator= (Form const &form)
{
	_name = form.getName();
	_grade = form.getGrade();
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
const char *Form::GradeTooLowException::what() const throw ()
{
	return "Bad argument check you code !! ";
}
