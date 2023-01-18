#include "Span.hpp"

Span::Span(void) : size(0) {
	// std::cout << "default constructor is called" << std::endl;
}

Span::Span(unsigned int size) : size(size) {
	// std::cout << "constructor of size is called" << std::endl;
}

Span::Span(const Span& src) : size(src.size), data(src.data) {
	// std::cout << "copy constructor is called" << std::endl;
}

Span::~Span(void) {
	// std::cout << "destructor is called" << std::endl;
}

Span& Span::operator=(Span const& rhs) {
	this->size = rhs.size;
	this->data = rhs.data;
	return *this;
}

void Span::addNumber(unsigned int num) {
		if (size == data.size())
			throw std::runtime_error("out of range");
		data.push_back(num);
}

int Span::shortestSpan(void) {
		if (data.size() == 0 || data.size() == 1)
			throw std::runtime_error("need more element");
		int min = *std::min_element(data.begin(), data.end());
		return min;
}

int Span::longestSpan(void) {
		if (data.size() == 0 || data.size() == 1)
			throw std::runtime_error("need more element");
		int max = *std::max_element(data.begin(), data.end());
		return max;
}

void Span::fill(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
		if (size < end - begin)
			throw std::runtime_error("need more size");
		if (begin == end)
			throw std::runtime_error("empty container");
		while (begin != end) {
			this->data.push_back(*begin++);
		}
}