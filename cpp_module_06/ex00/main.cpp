#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "you need an argument" << std::endl;
		return 0;
	}
	Converter a(argv[1]);
	return 0;
}