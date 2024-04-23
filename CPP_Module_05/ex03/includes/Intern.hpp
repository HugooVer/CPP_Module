#pragma once

#include <iostream>
#include <cstdlib>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &intern);
		~Intern();

		Intern& operator= (Intern const &intern);

		virtual AForm* makeShrubbery(std::string &target);
		virtual AForm* makeRoboto(std::string &target);
		virtual AForm* makePresidential(std::string &target);
		virtual AForm* makeForm(std::string name, std::string target);

		class BadTarget: public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};