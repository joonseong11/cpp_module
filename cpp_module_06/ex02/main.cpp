#include "Base.hpp"

int main() {
	Base* base1 = generate();
	identify(base1);
	identify(*base1);
	delete base1;
}