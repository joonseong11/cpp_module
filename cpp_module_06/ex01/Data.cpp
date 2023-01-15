#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
	std::cout << "serializ is called" << std::endl;
	return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw) {
	std::cout << "deserialize is called" << std::endl;
	return reinterpret_cast<Data *>(raw);
}