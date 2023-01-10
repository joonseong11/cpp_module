#include <iostream>
using namespace std;

int IncreaseNumber(int n)
{
	if (n < 0)
		throw n;
	else if (n == 0)
		throw "you cannot insert 0";
	return ++n;
}

int main()
{
	int num;

	cout << "input positive integer : ";
	while (cin >> num)
	{
		try {
			cout << "입력한 정수에서 1을 증가시킨 값 : " << IncreaseNumber(num) << endl;
		}
		catch(int input) {
				cout << input << "은 양의 정수가 아닙니다." << endl;
				cout << "양의 정수를 다시 입력해주세요 : ";
				continue;
		}
		catch(const char* st)
		{
			cout << st << endl;
            cout << "양의 정수를 다시 입력해주세요 : ";
			continue;
		}
		break ;
	}
	return 0;
}
