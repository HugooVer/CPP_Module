
#pragma once

#include <iostream>
#include <cstdlib>

#include "Bureaurat.hpp"

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _signGrade;
	const int _execGrade;

public:
	Form();
	Form(Form const &form);
	Form(std::string name, int signGrade, int execGrade);
	~Form();

	std::string getName() const;
	signed bool getSigend() const;
	signed int getSignGrade() const;
	signed int getExecGrade() const;

	void setGrade(int grade, int arg);

	void beSigned(Bureaurat bureaurat);

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
		class BadArgument: public std::exception
	{
		public:
				virtual const char* what() const throw();
	};
};

std::ostream &operator<< (std::ostream &os, Form const &form);