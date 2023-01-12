#include "Intern.hpp"

Intern::Intern(void) {}
Intern::Intern(const Intern& src) { static_cast<void>(src); }
Intern::~Intern(void) {}
Intern& Intern::operator=(Intern const& rhs) { 
	static_cast<void>(rhs);
	return *this; 
}

AForm* Intern::makeForm(std::string name_of_form, std::string target_of_form) {
	int i;
	std::string array[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (i = 0; i < 3 && name_of_form != array[i]; i++);
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << name_of_form << std::endl;
		return new ShrubberyCreationForm(target_of_form);
	case 1:
		std::cout << "Intern creates " << name_of_form << std::endl;
		return new RobotomyRequestForm(target_of_form);
	case 2:
		std::cout << "Intern creates " << name_of_form << std::endl;
		return new PresidentialPardonForm(target_of_form);
	default:
		std::cout << "Cannot find this name of form : " << name_of_form << std::endl;
		return NULL;
	}
}