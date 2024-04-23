
#pragma once

#include <iostream>
#include <cstdlib>

#include "Bureaucrat.hpp"

class AForm
{
private:
	std::string _name;
	bool _isSigned;
	const signed int _signGrade;
	const signed int _execGrade;

public:
	AForm();
	AForm(AForm const &aform);
	AForm(std::string name, const int signGrade, const int execGrade);
	virtual ~AForm();

	std::string getName() const;
	bool getIsSigend() const;
	signed int getSignGrade() const;
	signed int getExecGrade() const;

	void beSigned(Bureaucrat &bureaucrat);
	void signAForm(Bureaucrat &bureaucrat);

	void beExec(const Bureaucrat &bureaucrat);

	virtual void execute(Bureaucrat &bureaucrat) = 0;

	AForm& operator= (AForm const &aform);

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
	class FileError: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class NotSigned: public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream &operator<< (std::ostream &os, AForm const &aform);
std::string btos(bool x);