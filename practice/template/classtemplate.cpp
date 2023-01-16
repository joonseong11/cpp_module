#include <string>
#include <typeinfo>
#include <iostream>

template<typename T>
class Test {
		T val;

	public:
		Test(T v) : val(v) {};
		T GetVal();
		void PrintInfo() {
			std::cout << "mem var" << val << std::endl;
		}
};

template <typename T>
T Test<T>::GetVal() {
	return val;
}

int main() {
	Test<int> t_int(10);
	Test<std::string> t_str("hello");

	t_int.PrintInfo();
	t_str.PrintInfo();

	std::cout << typeid(t_int.GetVal()).name() << std::endl;
	std::cout << typeid(t_str.GetVal()).name() << std::endl;
}