#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PForm", "default", SIGN_GRADE_P, EXEC_GRADE_P) {}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PForm", target, SIGN_GRADE_P, EXEC_GRADE_P) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src)
 : AForm(src.getName(), src.getTarget(), SIGN_GRADE_P, EXEC_GRADE_P) {}
PresidentialPardonForm::~PresidentialPardonForm(void) {}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& rhs) {
	if (getCheck() != rhs.getCheck())
		setCheck(rhs.getCheck());
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getCheck() != true)
		throw NotSignedException();
	if (EXEC_GRADE_P < executor.getGrade())
		throw GradeTooLowException();
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
