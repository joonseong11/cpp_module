#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T* data;
		int len;
	public:
		class WrongIndexException : public std::exception {
			public :
				const char * what() const throw();
		};
		Array(void);
		Array(unsigned int n);
		Array(const Array& src);
		~Array(void);
		Array& operator=(Array const& rhs);
		T& operator[](int idx);
		const T& operator[](int idx) const;

		int size(void) const ;
};

template <typename T>
const char* Array<T>::WrongIndexException::what() const throw()
{
	return ("Wrong index");
}

template <typename T>
Array<T>::Array(void) {
	data = new T;
	len = 0;
};

template <typename T>
Array<T>::Array(unsigned int n) {
	data = new T[n];
	len = n;
}

template <typename T>
Array<T>::Array(const Array& src) {
	data = new T[src.size()];
	len = src.len;
	for (int i = 0; i < len; i++) {
		data[i] = src[i];
	}
}

template <typename T>
Array<T>::~Array(void) {
	delete [] data;
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T> const& rhs) {
	if (this == &rhs)
	{
		std::cout << "same obj" << std::endl;
		return *this;
	}
	delete [] data;
	data = new T[rhs.size()];
	len = rhs.size();
	for (int i = 0; i < len; i++) {
		data[i] = rhs[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](int idx) {
	if (idx < 0 || idx >= len)
		throw WrongIndexException();
	return data[idx];
}

template <typename T>
const T& Array<T>::operator[](int idx) const {
	if (idx < 0 || idx >= len)
		throw WrongIndexException();
	return data[idx];
}

template <typename T>
int Array<T>::size(void) const { return len; }
#endif