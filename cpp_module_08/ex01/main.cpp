#include "Span.hpp"

int main() {

	try {
		std::cout << "test1" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6); 
		sp.addNumber(3); 
		sp.addNumber(17); 
		sp.addNumber(9); 
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl; 
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "test2" << std::endl;
		Span sp2(10000);
		std::vector<int> vec;
  		for (int i = -5000; i <= 4999; i++)
    		vec.push_back(i);
		sp2.fill(vec.begin(), vec.end());

		std::cout << sp2.shortestSpan() << std::endl; 
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "test3" << std::endl;
		Span sp3(0);
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "test4" << std::endl;
		Span sp4(1);
		sp4.addNumber(5);
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		std::cout << "test5" << std::endl;
		Span sp5(0);
		sp5.addNumber(0);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "test6" << std::endl;
		Span sp6(1);
		std::vector<int> vec1;
		vec1.push_back(-10);
		vec1.push_back(99);
		vec1.push_back(199);
		sp6.fill(vec1.begin(), vec1.end());

		std::cout << sp6.shortestSpan() << std::endl; 
		std::cout << sp6.longestSpan() << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}


}

