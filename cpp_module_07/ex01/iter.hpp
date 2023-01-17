#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* adr, size_t length, void (func)(const T &)) {

	for (size_t i = 0; i < length; i++) {
		func(adr[i]);
	}
}

template <typename T>
void print(T src) {
	std::cout << src << std::endl;
}
#endif