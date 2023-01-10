#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("hi", 151);
	Bureaucrat b("hello", 0);
	Bureaucrat c("bonjour", 22);
	Bureaucrat d("Au revoir", 1);
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	d.increaseGrade();
	d.decreaseGrade();
	std::cout << d << std::endl;
	Bureaucrat e("comment ca va", 150);
	e.decreaseGrade();
	e.increaseGrade();
	std::cout << e << std::endl;
}