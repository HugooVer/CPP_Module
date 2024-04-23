#pragma once

#include <iostream>
#include <cstdlib>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &presidentialpardonform);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator= (PresidentialPardonForm const &presidentialpardonform);

		void execute(Bureaucrat &bureaucrat);

		std::string getTarget() const;

};

std::ostream &operator<< (std::ostream &os, PresidentialPardonForm const &presidentialpardonform);