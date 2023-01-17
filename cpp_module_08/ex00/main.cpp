#include "easyfind.hpp"

int main() {
	int myints[] = {10, 20, 30, 40};

	std::vector<int> myvector (myints, myints+4);
	easyfind(myvector, 330);

	return 0;
}