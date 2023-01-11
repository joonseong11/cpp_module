#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm
{
	private:
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);
};
ShrubberyCreationForm::ShrubberyCreationForm(void) {
	
}
#endif
