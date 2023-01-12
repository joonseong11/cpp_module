#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#define SIGN_GRADE_P 25
#define EXEC_GRADE_P 5

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& src);
		~PresidentialPardonForm(void);
		PresidentialPardonForm& operator=(PresidentialPardonForm const& rhs);

		void execute(Bureaucrat const & executor) const;
};
#endif