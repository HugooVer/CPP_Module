#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name ("NØNAME"), _grade(1)
{
	std::cout << "New bureaucrat created\n";
}
Bureaucrat::Bureaucrat(std::string name, int grade) : _name (name)
{
	setGrade(grade);
	std::cout << "New bureaucrat created\n";
}
Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
	*this = bureaucrat;
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << _name << " destructor called" << std::endl << std::endl;
}

std::string Bureaucrat::getName() const
{
	return _name;
}
signed int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incr()
{
	setGrade(--_grade);
	std::cout << "Grade of " << _name << "\t:"<<_grade << std::endl;
}
void Bureaucrat::decr()
{
	setGrade(++_grade);
	std::cout << "Grade of " << _name << "\t:"<<_grade << std::endl;
}
void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat& Bureaucrat::operator= (Bureaucrat const &bureaucrat)
{
	_name = bureaucrat.getName();
	_grade = bureaucrat.getGrade();
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw ()
{
	return "Grade is too high maximum grade is 1";
}
const char *Bureaucrat::GradeTooLowException::what() const throw ()
{
	return "Grade is too low minimum grade is 150";
}


std::ostream &operator<< (std::ostream &os, Bureaucrat const &bureaucrat)
{
	os  << "\nName :" << bureaucrat.getName()
		<< "\nGrade :" << bureaucrat.getGrade();
	return os;
}
