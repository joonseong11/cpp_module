#include <iostream>
#include <fstream>
#include <string>

int main() {
	std::ofstream out("test.txt", std::ios::app);
	std::string s;

	if(out.is_open()) {
		out << "try this";
	}
	return 0;
}