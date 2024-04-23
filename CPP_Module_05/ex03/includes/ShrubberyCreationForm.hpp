#pragma once

#include <iostream>
#include <cstdlib>
#include <fstream>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &shrubberycreationform);
		~ShrubberyCreationForm();

		ShrubberyCreationForm& operator= (ShrubberyCreationForm const &shrubberycreationform);

		void execute(Bureaucrat &bureaucrat);

		std::string getTarget() const;

};

std::ostream &operator<< (std::ostream &os, ShrubberyCreationForm const &shrubberycreationform);