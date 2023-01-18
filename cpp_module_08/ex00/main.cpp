#include "easyfind.hpp"

int main() {
	// int myints[] = {10, 20, 30, 40};
	std::vector<int> myints(4, 4);
	myints.push_back(10);
	myints.push_back(20);
	myints.push_back(30);
	myints.push_back(40);

	// std::vector<int> myvector (myints, myints+4);
	// std::list<int> mylist(myints, myints+4);
	std::vector<int> myvector (myints.begin(), myints.end());
	std::list<int> mylist(myints.begin(), myints.end());

	easyfind(myvector, 30);
	easyfind(mylist, 30);
	easyfind(myvector, 330);
	easyfind(mylist, 330);

	return 0;
}