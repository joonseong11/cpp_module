#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "stdlib.h"
#define SIGN_GRADE 72
#define EXEC_GRADE 45

class RobotomyRequestForm : public AForm
{
	private:
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm& src);
		~RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(RobotomyRequestForm const& rhs); 

		void execute(Bureaucrat const & executor) const;
};

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("default", SIGN_GRADE, EXEC_GRADE) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src)
 : AForm(src.getName(), SIGN_GRADE, EXEC_GRADE) {}
RobotomyRequestForm::~RobotomyRequestForm(void) {}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& rhs) {
	if (getCheck() != rhs.getCheck())
		setCheck(rhs.getCheck());
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (getCheck() != true)
		throw 
	if (getCheck() == true && getExecGrade() <= EXEC_GRADE)
	{
		std::cout << "drrrrrr drrrrrr drrrrrr....." << std::endl;
		srand(time(NULL));
		if (rand() % 2 == 0)
			std::cout << getTarget() << " has been robotomized successfully" << std::endl;
		else
			std::cout << "the robotomy failed." << std::endl;
	}
	else
		throw 
}
#endif