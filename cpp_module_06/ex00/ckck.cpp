#include <iostream>
#include <string>

int main()
{
	std::string str = "good";
	std::cout << str[5] << '\n';
	if (static_cast<char>(str[5]) == NULL)
		std::cout << "bad\n";
}