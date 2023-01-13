
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "you need argument" << std::endl;
		return 0;
	}
	std::string str = argv[1];
	int a = str;
	std::cout << "" << std::endl;
	return 0;
}