#include "easyfind.hpp"

int main() {
	int myints[] = {10, 20, 30, 40};

	std::vector<int> myvector (myints, myints+4);
	std::list<int> mylist(myints, myints+4);
	easyfind(myvector, 30);
	easyfind(mylist, 30);

	return 0;
}