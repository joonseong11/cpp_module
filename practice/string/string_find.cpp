#include <iostream>
#include <string>

int main()
{
	std::string str("needle There are two needles in this haystack with needles.");
	std::string str2("needle");
	
	std::size_t found = str.find(str2, 1);
	if (found!=std::string::npos)
	{
		// str.insert(found, str2);
		std::cout << "first 'needle' found at: " << found << '\n';
		// std::cout << str << '\n';
	}

	// found=str.find("needles are small", found+1, 8);
	// std::cout << std::string::npos << std::endl;
	// if (found != std::string::npos)
	// 	std::cout << "second 'needle' found at :" << found << '\n';
}
