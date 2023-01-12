#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	std::cout << "pardon form : sign 25, exec 5" << std::endl;
	std::cout << "robot form : sign 72, exec 45" << std::endl;
	std::cout << "shrub form : sign 145, exec 137" << std::endl;
	
	std::cout << "\n" << "============= Creation ===============" << "\n" << std::endl;
	Bureaucrat bureaucrat_king("king", 1);
	Bureaucrat bureaucrat_alpha("alpha", 25);
	Bureaucrat bureaucrat_beta("beta", 72);
	Bureaucrat bureaucrat_gama("gama", 145);
	Bureaucrat bureaucrat_slave("slave", 150);
	Bureaucrat bureaucrat_test("test", 151);

	std::cout << "\n" << "============= Form creation ===============" << "\n" << std::endl;
	PresidentialPardonForm ppf("target_pardon");
	RobotomyRequestForm rrf("target_robot");
	ShrubberyCreationForm scf("target_shrub");

	std::cout << "\n" << "============= Presidential Pardon Form ===============" << "\n" << std::endl;
	bureaucrat_alpha.executeForm(ppf);
	bureaucrat_alpha.signForm(ppf);
	bureaucrat_alpha.executeForm(ppf);
	bureaucrat_king.executeForm(ppf);

	std::cout << "\n" << "============= Robotomy Request Form ===============" << "\n" << std::endl;
	bureaucrat_gama.executeForm(rrf);
	bureaucrat_gama.signForm(rrf);
	bureaucrat_beta.signForm(rrf);
	bureaucrat_beta.executeForm(rrf);
	bureaucrat_alpha.executeForm(rrf);

	std::cout << "\n" << "============= Shrub Creation Form ===============" << "\n" << std::endl;
	bureaucrat_slave.executeForm(scf);
	bureaucrat_slave.signForm(scf);
	bureaucrat_gama.signForm(scf);
	bureaucrat_gama.executeForm(scf);
	bureaucrat_beta.executeForm(scf);

	return 0;
}