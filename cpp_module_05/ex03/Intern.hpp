#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& src);
		~Intern(void);
		Intern& operator=(Intern const& rhs);

		AForm* makeForm(std::string name_of_form, std::string target_of_form);
};
#endif