#include "Bureaucrat.hpp"

std::ostream& operator<<(std::ostream& out, Bureaucrat& value) {
  out << value.getName() << ", bureaucrat grade " << value.getGrade();
  return out;
}

Bureaucrat::Bureaucrat(void) : name("default name"), grade(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
    : name(src.name), grade(src.grade) {}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name(name) {
	try {
		this->grade = grade;
		if (this->grade < 1)
			throw GradeTooHighException();
		else if (this->grade > 150)
			throw GradeTooLowException();
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& rhs) {
  grade = rhs.grade;
  return *this;
}

std::string Bureaucrat::getName(void) { return name; }
unsigned int Bureaucrat::getGrade(void) const { return grade; }

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void Bureaucrat::increaseGrade(void) {
	try {
		if ((grade - 1) < 1)
			throw GradeTooHighException();
		grade = grade - 1;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::decreaseGrade(void) {
	try {
		if ((grade + 1) > 150)
			throw GradeTooLowException();
		grade = grade + 1;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(AForm& form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->name << " counldn't signed " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
		std::cout << name << "(bureaucrat) executed " << form.getName() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << this->name << " counldn't execute " << form.getName() 
			<< " because " << e.what() << std::endl;
	}
}
