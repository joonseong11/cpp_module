#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool check;
		const unsigned int grade_to_sign;
		const unsigned int grade_to_exec;

	public:
		class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw();
		};
		class AlreadySignedException : public std::exception {
			public:
				const char * what() const throw();
		};
		
		unsigned int try_catch(unsigned int grade);

		Form(void);
		Form(const Form& src);
		Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_exec);
		virtual ~Form(void);
		Form& operator=(Form const& rhs);

		std::string getName(void) const;
		bool getCheck(void) const;
		unsigned int getSignGrade(void) const;
		unsigned int getExecGrade(void) const;

		void beSigned(Bureaucrat &brc);
};
std::ostream& operator<<(std::ostream& out, Form& value);

#endif