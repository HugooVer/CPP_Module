
#pragma once

#include <iostream>
#include <cstdlib>

class Form
{
private:
	const std::string _name;
	bool _issigned;
	const int _signGrade;
	const int _execGrade;

public:
	Form();
	Form(Form const &form);
	Form(std::string name, bool issigned, int signGrade, int execGrade);
	~Form();

	std::string getName() const;
	signed bool getSigend() const;
	signed int getSignGrade() const;
	signed int getExecGrade() const;

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