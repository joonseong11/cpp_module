#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
    AForm* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

	AForm* scf;
	scf = someRandomIntern.makeForm("ShrubberyCreationForm", "Hello");

	AForm* ppf;
	ppf = someRandomIntern.makeForm("PresidentialPardonForm", "bonjour");
	delete rrf;
	delete scf;
	delete ppf;
	return 0;
}