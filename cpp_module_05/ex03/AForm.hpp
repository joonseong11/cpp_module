#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		const std::string target;
		const unsigned int grade_to_sign;
		const unsigned int grade_to_exec;
		bool check;

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
		class NotSignedException : public std::exception {
			public:
				const char * what() const throw();
		};
		
		unsigned int try_catch(unsigned int grade);

		AForm(void);
		AForm(const AForm& src);
		AForm(std::string name, std::string target, unsigned int grade_to_sign, unsigned int grade_to_exec);
		virtual ~AForm(void);
		AForm& operator=(AForm const& rhs);

		std::string getName(void) const;
		bool getCheck(void) const;
		unsigned int getSignGrade(void) const;
		unsigned int getExecGrade(void) const;

		void beSigned(Bureaucrat &brc);
		void setCheck(bool check);
		std::string getTarget(void) const;
		virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream& operator<<(std::ostream& out, AForm& value);

#endif