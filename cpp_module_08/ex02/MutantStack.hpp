#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>
#include <deque>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {};
		MutantStack(const MutantStack& src) {*this = src;}
		~MutantStack(void) {}
		MutantStack& operator=(MutantStack const& rhs) {
			std::stack<T>::operator=(rhs);
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void) {return this->c.begin();}
		iterator end(void) {return this->c.end();}
};

#endif