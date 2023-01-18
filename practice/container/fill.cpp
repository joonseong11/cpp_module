#include <algorithm>
#include <iostream>
#include <vector>

int main() {
	std::vector<int> myvector(8);

	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	std::fill(myvector.begin(), myvector.begin() + 4, 5);
	// 0 0 0 0 0 0 0 0
	// 0 1 2 3 4
	
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';
	std::fill(myvector.begin() + 3, myvector.end() - 2, 8);

	std::cout << "myvector contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << '\n';

	return 0;
}