#include <iostream>
#include <stack>

int main() {
	int decimal = 123;
	std::stack<int> st;

	do {
		st.push(decimal %2);
		decimal /= 2;

	} while (decimal);

	while(!st.empty())
	{
		std::cout << st.top() << std::endl;
		st.pop();
	}

}