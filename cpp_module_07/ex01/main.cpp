#include "iter.hpp"

int main() {

	int a[5] = {1,2,3,4,5};
	std::string b[3] = {"salut", "bonjour", "Au revior"};

	Iter(a, 5, print);
	Iter(b, 3, print);
}
