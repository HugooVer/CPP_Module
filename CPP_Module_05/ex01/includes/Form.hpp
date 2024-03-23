
#pragma once

#include <iostream>
#include <cstdlib>

#include "Bureaucrat.hpp"

class Form
{
private:
	std::string _name;
	bool _isSigned;
	const signed int _signGrade;
	const signed int _execGrade;

public:
	Form();
	Form(Form const &form);
	Form(std::string name, const int signGrade, const int execGrade);
	~Form();

	std::string getName() const;
	bool getIsSigend();
	signed int getSignGrade() const;
	signed int getExecGrade() const;

	void beSigned(Bureaucrat bureaucrat);

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