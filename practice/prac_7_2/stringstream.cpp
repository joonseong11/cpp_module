#include <iostream>
#include <sstream>
#include <string>

// int main() {
// 	std::istringstream ss("123");
// 	int x;
// 	ss >> x;

// 	std::cout << "ㅇㅣㅂ려ㄱ 받은 데데이이터  ::" << x << std::endl;

// 	return 0;
// }

// double to_number(std::string s) {
// 	std::istringstream ss(s);
// 	double x;

// 	ss >> x;
// 	return x;
// }
// int main() {
// 	std::cout << "translate:: 1 + 2 = " << to_number("1") + to_number("2") << std::endl;

// 	return 0;
// }

std::string to_str(int x) {
	std::ostringstream ss;
	ss << x;

	return ss.str();
}
int main() {
	std::cout << "문자열로 변환 :: 1 + 2 = " << to_str(1 + 2) << std::endl;

	return 0;
}