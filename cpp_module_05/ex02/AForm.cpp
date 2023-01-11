#include "AForm.hpp"
#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& out, AForm& value) {
	out << value.getName() << ", AForm check? : "
		<< value.getCheck() << ", grade to sign? : " << value.getSignGrade()
		<< ", grade to exec? :" << value.getExecGrade();
	return out;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}
const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}
const char* AForm::AlreadySignedException::what() const throw() {
	return ("The AForm is Already signed");
}

unsigned int AForm::try_catch(unsigned int grade_) {
	if (grade_ < 1)
		throw GradeTooHighException();
	else if (grade_ > 150)
		throw GradeTooLowException();
	return grade_;
}

AForm::AForm(void) : name("default"), check(false), grade_to_sign(150), 
	grade_to_exec(150) {}
AForm::AForm(const AForm& src) : name(src.name), check(src.check), 
	grade_to_sign(src.grade_to_sign), grade_to_exec(src.grade_to_exec){}
AForm::AForm(std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec)
	: name(name), grade_to_sign(try_catch(grade_to_sign)), grade_to_exec(try_catch(grade_to_exec)) {};
AForm::~AForm(void) {}
AForm& AForm::operator=(AForm const& rhs) {
    check = rhs.check;
    return *this;
}

std::string AForm::getName(void) const {
	return name;
}
bool AForm::getCheck(void) const {
	return check;
}
unsigned int AForm::getSignGrade(void) const {
	return grade_to_sign;
}
unsigned int AForm::getExecGrade(void) const {
	return grade_to_exec;
}

void AForm::beSigned(Bureaucrat &brc) {
	if (this->check == true)
		throw AlreadySignedException();
	if (brc.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	if (this->check != true)
		this->check = true;
}