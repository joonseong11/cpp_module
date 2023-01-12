#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
	const std::string name;
	unsigned int grade;

	public:
		class GradeTooHighException : public std::exception {
			public :
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception	{
			public :
				const char * what() const throw();
		};

		Bureaucrat(void);
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat(std::string name, unsigned int grade);
		virtual ~Bureaucrat(void);
		Bureaucrat& operator=(Bureaucrat const& rhs);

		std::string getName(void);
		unsigned int getGrade(void) const;
		void increaseGrade(void);
		void decreaseGrade(void);

		void signForm(AForm& form);

		void executeForm(AForm const & form);
};
std::ostream& operator<<(std::ostream& out, Bureaucrat& value);

#endif