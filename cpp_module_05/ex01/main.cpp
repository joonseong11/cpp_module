#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\n" << "=============== test1 =================" << std::endl;
	Bureaucrat a("hey", 10);
	try {
		Form b("test", 0, 100);
		std::cout << "cannot print this message" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form c("test", 10, 151);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n" << "=============== test2 =================" << std::endl;
	Bureaucrat tom("tom", 15);
	Form form1("form1", 10, 5);
	tom.signForm(form1);
	Bureaucrat cat("cat", 5);
	Form form2("form2", 5, 5);
	cat.signForm(form1);
	cat.signForm(form2);

	std::cout << "\n" << "=============== test3 =================" << std::endl;
	Bureaucrat micah("micah", 1);
	micah.increaseGrade();
	Bureaucrat jrim("jrim", 150);
	jrim.decreaseGrade();
}