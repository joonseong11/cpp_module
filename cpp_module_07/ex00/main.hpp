#include <iostream>

template <typename T>
void swap(T& a, T& b) {
	T temp(a);
	a = b;
	b = temp;
}

template <typename T>
T& min(T& a, T& b) {
	if (a == b)
		return b;
	if (a > b)
		return b;
	else
		return a;
}

template <typename T>
T& max(T& a, T& b) {
	if (min(a, b) == a)
		return b;
	else
		return a;
}
