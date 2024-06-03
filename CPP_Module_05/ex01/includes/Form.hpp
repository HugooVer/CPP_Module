#pragma once

#include "Bureaucrat.hpp"

#include <iostream>
#include <cstdlib>

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const signed int _signGrade;
	const signed int _execGrade;

public:
	Form();
	Form(Form const &form);
	Form(std::string name, const int signGrade, const int execGrade);
	~Form();

	std::string getName() const;
	bool getIsSigend() const;
	signed int getSignGrade() const;
	signed int getExecGrade() const;

	void beSigned(Bureaucrat &bureaucrat);
	// void signForm(Bureaucrat &bureaucrat);

	Form& operator= (Form const &form);

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream &operator<< (std::ostream &os, Form const &form);
std::string btos(bool x);