#include <iostream>


using namespace std;

int main() {
	int user_input;
	cout << "저의 정보를 표시 " << endl;
	cout << "1. name " << endl;
	cout << "2. age " << endl;
	cout << "3. gender" << endl;
	cin >> user_input;
	
	switch (user_input) {
		case 1:
			cout << "psi !" << endl;
			break;
		case 2:
			cout << "99 살" << endl;
			break;
		default:
			cout <<"nothing that I courious" << endl;
			break;
	}
	return 0;
}