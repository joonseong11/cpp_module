#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

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
		unsigned int getGrade(void);
		void increaseGrade(void);
		void decreaseGrade(void);

		void signForm(Form& f);
};
std::ostream& operator<<(std::ostream& out, Bureaucrat& value);

#endif