#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(const T &container, int num) {
	typename T::iterator itr;
	// itr = std::find(container.begin(), container.end(), num);
	try {
		if (std::find(container.begin(), container.end(), num) == container.end())
			throw std::runtime_error("found nothing");
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return itr;
}

#endif