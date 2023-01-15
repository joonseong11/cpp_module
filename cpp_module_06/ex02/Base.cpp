#include "Base.hpp"

Base::~Base(void) {}

Base * generate(void) {
	srand(time(NULL));
	int ran = rand() % 3;

	if (ran == 0) {
		std::cout << "generate A type" << std::endl;
		return new A;
	}
	else if (ran == 1) {
		std::cout << "generate B type" << std::endl;
		return new B;
	}
	else {
		std::cout << "generate C type" << std::endl;
		return new C;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "(pointer)real type : A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "(pointer)real type : B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "(pointer)real type : C" << std::endl;
}
void identify(Base& p) {

	try {
		A& a = dynamic_cast<A&>(p);
		static_cast<void>(a);
		std::cout << "(reference)real type : A" << std::endl;
	}
	catch (std::exception& e) {
		// std::cout << e.what() << std::endl;
	}

	try {
		B& b = dynamic_cast<B&>(p);
		static_cast<void>(b);
		std::cout << "(reference)real type : B" << std::endl;
	}
	catch (std::exception& e) {
		// std::cout << e.what() << std::endl;
	}
	
	try {
		C& c = dynamic_cast<C&>(p);
		static_cast<void>(c);
		std::cout << "(reference)real type : C" << std::endl;
	}
	catch (std::exception& e) {
		// std::cout << e.what() << std::endl;
	}
	
}