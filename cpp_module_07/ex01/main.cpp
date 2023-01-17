#include "iter.hpp"

int main() {

	const int a[5] = {1,2,3,4,5};
	std::string b[3] = {"salut", "bonjour", "Au revior"};

	iter(a, 5, print);
	iter(b, 3, print);

}