
#pragma once

#include <iostream>
#include <cstdlib>

class Bureaucrat
{
protected:
	std::string _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const &bureaucrat);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	std::string getName() const;
	signed int getGrade() const;

	void incr();
	void decr();
	void setGrade(int grade);

	Bureaucrat& operator= (Bureaucrat const &bureaucrat);

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

std::ostream &operator<< (std::ostream &os, Bureaucrat const &bureaucrat);
