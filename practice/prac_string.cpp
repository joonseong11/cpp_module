#include <iostream>
#include <string.h>

using namespace std;

// int main() {
// 	string str1 = "C++ is ";
// 	string str2 = "COOL";
// 	string str3;

// 	str3 = str1 + str2;
// 	cout << str3 <<endl;

// 	str1 += str2;
// 	cout << str1;
// 	return 0;
// }

// int main() {
// 	string name, subject;

// 	cout << "input your name : ";
// 	// cin >> name;
// 	getline(cin, name);
// 	cout << "input your best confidential subject : ";
// 	getline(cin, subject);

// 	cout << name << "ㄴㅣㅁ이 가가장  자자신신있있어어하하는  과과목목은  : " 
// 				<< subject;
// }

// int main() {
// 	string str1, str2, str3;

// 	str1.append("C++ appending");
// 	str2.append("C++ appending", 4, 7);
// 	str3.append(4, 'X');

// 	cout << str1 << endl;
// 	cout << str2 << endl;
// 	cout << str3;
// }

int main() {
	string str = "C++ Programming";

	cout << str.find("Pro") << endl;
	cout << str.find('r') << endl;

	if (str.find("Pro", 5) != string::npos)
	{
		cout << "we found";
	} else {
		cout << "not found";
	}
}