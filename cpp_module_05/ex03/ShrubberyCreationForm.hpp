#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

# define SIGN_GRADE_S 145
# define EXEC_GRADE_S 137

class ShrubberyCreationForm : public AForm
{
	public:
		class OutFileDoesNotOpenException : public std::exception {
			public:
				const char * what() const throw();
		};

		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& rhs);

		void execute(Bureaucrat const & executor) const;
};

#endif
