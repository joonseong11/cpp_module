#include <iostream>
#include <iterator>
#include <deque>
using namespace std;

int main() {
	deque<int> dq;
	dq.push_back(20);
	dq.push_back(30);
	dq.push_front(10);

	cout << "현재 데큐의 모든 요소는 다음과 같습니다 :" <<
	dq.front() <<dq.front() <<dq.front() << endl;

	cout << endl << "현재 데큐의 첫 번째 요소는 " << dq.front() << "입니다." << endl;

	dq.pop_front();			// 요소의 전방 삭제 
	cout << "현재 데큐의 모든 요소는 다음과 같습니다 :" << endl;

	return 0;



}