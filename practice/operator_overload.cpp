
#include <iostream>

std::ostream& operator(std::ostream& os, const Complex& c) {
	os << "(" << c.real << " , " << c.img << " ) ";
	return os;
}
