#include "ShrubberyCreationForm.hpp"

const char* ShrubberyCreationForm::OutFileDoesNotOpenException::what() const throw() {
	return ("Outfile doesn't open or cannot be used");
}

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("SForm", "default", SIGN_GRADE_S, EXEC_GRADE_S) {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("SForm", target, SIGN_GRADE_S, EXEC_GRADE_S) {}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src)
 : AForm(src.getName(), src.getTarget(), SIGN_GRADE_S, EXEC_GRADE_S) {}
ShrubberyCreationForm::~ShrubberyCreationForm(void) {}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& rhs) {
	if (getCheck() != rhs.getCheck())
		setCheck(rhs.getCheck());
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (getCheck() != true)
		throw NotSignedException();
	if (EXEC_GRADE_S < executor.getGrade())
		throw GradeTooLowException();

	std::ofstream out(getTarget() + "_shrubbery", std::ofstream::out);
	if (!out.is_open())	{
		out.close();
		throw OutFileDoesNotOpenException();
	}
	out << "               ,@@@@@@@," << "\n";
	out << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << "\n";
	out << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << "\n";
	out << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << "\n";
	out << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << "\n";
	out << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << "\n";
	out << "   `&%\\ ` /%&'    |.|        \\ '|8'" << "\n";
	out << "       |o|        | |         | |" << "\n";
	out << "       |.|        | |         | |" << "\n";
	out << "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << "\n";

	out.close();
}