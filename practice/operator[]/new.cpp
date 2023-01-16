#include <iostream>

int main() {
	int* pnum = new int(10);
	std::cout << "*pnum:" << *pnum << std::endl;
	delete pnum;

	float* pfloat = new float(64.34);
	std::cout << "*pfloat:" << *pfloat << std::endl;
	delete pfloat;

	int* pary1 = new int[3]{};
	std::cout << "pary1[0]:" << pary1[0] << std::endl;
	delete[] pary1;                                                       

	int* pary2{ new int[3] {} };
	delete[] pary2;

	char* pary3 = new char[20]{ "hello"};
	std::cout << "pary3:" << pary3 << std::endl;
	delete[] pary3;

	int* pary4{ new int[5]{1, 2, 3, 4, 5}};
	delete[] pary4;

	int num = 6;
	auto* pary5{ new float[num]{1.1,2.2,3.1,4.1}};
	for (int i =0; i< num; i++)
		std::cout << "pary5[" << i << "]:" << pary5[i] << std::endl;
	delete[] pary5;
}