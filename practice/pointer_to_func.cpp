#include <iostream>

using namespace std;

class CTest {
	public:
		void Func1(void) { cout << "1" << endl; };
		void Func2(void) { cout << "2" << endl; };
};

void (CTest::*Funcs[2])(int) = {&CTest::Func1, &CTest::Func2};

int main(){
	CTest a;

	(a.*Funcs[0])();
	(a.*Funcs[1])();
}