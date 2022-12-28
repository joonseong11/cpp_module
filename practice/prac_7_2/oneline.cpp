#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::ifstream in("test.txt");
	char buf[100];

	if (!in.is_open()) {
		std::cout << "cannot find file!" << std::endl;
		return 0;
	}

	// while (in) {
		in.getline(buf, 100);
		std::cout << buf << std::endl;
		in.getline(buf, 100);
		std::cout << buf << std::endl;
	// }

	return 0;
}
