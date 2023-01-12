#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm
{
	private:
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);
};
ShrubberyCreationForm::ShrubberyCreationForm(void) {
	
}

// ofstream o;

// o << //                ,@@@@@@@,
// o << //        ,,,.   ,@@@@@@/@@,  .oo8888o.
// o << //     ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o
// o << //    ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'
// o << //    %&&%&%&/%&&%@@\@@/ /@@@88888\88888'
// o << //    %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'
// o << //    `&%\ ` /%&'    |.|        \ '|8'
// o << //        |o|        | |         | |
// o << //        |.|        | |         | |
// o << // jgs \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_


#endif
