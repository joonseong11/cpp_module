#include <iostream>

// int main() {
// 	int a = 3;
// 	int& another_a = a;

// 	int b = 10;
// 	another_a = b;
	
// 	std::cout << "a : " << a << std::endl;
// 	std::cout << "another_a : " << another_a << std::endl;
// 	std::cout << "b : " << b << std::endl;
// 	return 0;
// }

void change(int &p)
{
	p = 3;
}

int main() {
	int number = 5;

	std::cout << number << std::endl;
	change(number);
	std::cout << number << std::endl;

}