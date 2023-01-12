#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RForm", "default", SIGN_GRADE_R, EXEC_GRADE_R) {}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RForm", target, SIGN_GRADE_R, EXEC_GRADE_R) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
 : AForm(src.getName(), src.getTarget(), SIGN_GRADE_R, EXEC_GRADE_R) {}
RobotomyRequestForm::~RobotomyRequestForm(void) {}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs) {
	if (getCheck() != rhs.getCheck())
		setCheck(rhs.getCheck());
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (getCheck() != true)
		throw NotSignedException();
	if (EXEC_GRADE_R < executor.getGrade())
		throw GradeTooLowException();
	std::cout << "drrrrrr drrrrrr drrrrrr....." << std::endl;
	srand(time(NULL));
	if (rand() % 2 == 0)
		std::cout << getTarget() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "the robotomy failed." << std::endl;
}