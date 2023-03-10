#include "Form.hpp"
#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& out, Form& value) {
	out << value.getName() << ", Form check? : "
		<< value.getCheck() << ", grade to sign? : " << value.getSignGrade()
		<< ", grade to exec? :" << value.getExecGrade();
	return out;
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}
const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}
const char* Form::AlreadySignedException::what() const throw() {
	return ("The Form is Already signed");
}

unsigned int Form::try_catch(unsigned int grade_) {
	if (grade_ < 1)
		throw GradeTooHighException();
	else if (grade_ > 150)
		throw GradeTooLowException();
	return grade_;
}

Form::Form(void) : name("default"), check(false), grade_to_sign(150), 
	grade_to_exec(150) {}
Form::Form(const Form& src) : name(src.name), check(src.check), 
	grade_to_sign(src.grade_to_sign), grade_to_exec(src.grade_to_exec){}
Form::Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec)
	: name(name), grade_to_sign(try_catch(grade_to_sign)), grade_to_exec(try_catch(grade_to_exec)) {};
Form::~Form(void) {}
Form& Form::operator=(Form const& rhs) {
    check = rhs.check;
    return *this;
}

std::string Form::getName(void) const {
	return name;
}
bool Form::getCheck(void) const {
	return check;
}
unsigned int Form::getSignGrade(void) const {
	return grade_to_sign;
}
unsigned int Form::getExecGrade(void) const {
	return grade_to_exec;
}

void Form::beSigned(Bureaucrat &brc) {
	if (this->check == true)
		throw AlreadySignedException();
	if (brc.getGrade() > grade_to_sign)
		throw GradeTooLowException();
	if (this->check != true)
		this->check = true;
}