#include <iostream>

int main () {
	std::string var1 = "HI THIS IS BRAIN";
	std::string* stringPTR = &var1;
	std::string& stringREF = var1;

	std::cout << "The memory address of the string variable : " << &var1 << std::endl;
	std::cout << "The memory address of the stringPTR : " << &stringPTR << std::endl;
	std::cout << "The memory address of the stringREF : " << &stringREF << std::endl;
	
	std::cout << "The value of the string variable : " << var1 << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}