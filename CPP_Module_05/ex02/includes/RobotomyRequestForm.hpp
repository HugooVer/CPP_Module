#pragma once

#include <iostream>
#include <cstdlib>

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &robotomyrequestform);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator= (RobotomyRequestForm const &robotomyrequestform);

		void execute(Bureaucrat &bureaucrat);

		std::string getTarget() const;

};

std::ostream &operator<< (std::ostream &os, RobotomyRequestForm const &robotomyrequestform);