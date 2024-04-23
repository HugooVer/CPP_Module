#include "Intern.hpp"

Intern::Intern()
{
	;
}
Intern::Intern(Intern const &intern)
{
	(void) intern;
}
Intern::~Intern()
{
	;
}
Intern& Intern::operator= (Intern const &intern)
{
	(void) intern;
	return *this;
}

AForm* Intern::makeShrubbery(std::string &target)
{
	return(new ShrubberyCreationForm(target));
}
AForm* Intern::makeRoboto(std::string &target)
{
	return(new RobotomyRequestForm(target));
}
AForm* Intern::makePresidential(std::string &target)
{
	return(new PresidentialPardonForm(target));
}
AForm* Intern::makeForm(std::string name, std::string target)
{
	// AForm*	(*ptr[3])(std::string& target) = {makeShrubbery, &Intern::makeRoboto, &Intern::makePresidential};
	AForm* (Intern::*ptr[3])(std::string&) = {&Intern::makeShrubbery, &Intern::makeRoboto, &Intern::makePresidential};
	std::string	form[] = {"Shrubbery", "Roboto", "Presidential"};
	int idx = 0;

	while (idx < 3)
	{
		if (name == form[idx])
			return ((this->*ptr[idx])(target));
		++idx;
	}
	throw BadTarget();

}

const char *Intern::BadTarget::what() const throw ()
{
	return "Bad Target";
}
