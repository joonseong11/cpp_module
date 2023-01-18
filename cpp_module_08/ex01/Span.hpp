#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>

class Span
{
	private:
		unsigned int size;
		std::vector<int> data;
	public:
		Span(void);
		Span(unsigned int size);
		Span(const Span& src);
		~Span(void);
		Span& operator=(Span const& rhs);

		void addNumber(unsigned int num);
		int shortestSpan(void);
		int longestSpan(void);
		void fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};
#endif