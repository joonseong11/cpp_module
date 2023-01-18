#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "given example :list" << "\n" << std::endl;
		std::list<int> l_lst;

		l_lst.push_back(5); 
		l_lst.push_back(17);

		std::cout << l_lst.front() << std::endl; 

		l_lst.pop_front();

		std::cout << l_lst.size() << std::endl;

		l_lst.push_back(3); l_lst.push_back(5); 
		l_lst.push_back(737); //[...] l_lst.push_back(0);

		std::list<int>::iterator it = l_lst.begin(); 
		std::list<int>::iterator ite = l_lst.end();

		++it;
		--it;

		while (it != ite) {
			std::cout << *it << std::endl;
			++it; 
		}
	}
	{
		std::cout <<"\n" << "given example : stack" << std::endl;
		MutantStack<int> mstack;

		mstack.push(5); 
		mstack.push(17);

		std::cout << mstack.top() << std::endl; 

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3); mstack.push(5); 
		mstack.push(737); //[...] mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin(); 
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite) {
			std::cout << *it << std::endl;
			++it; 
		}

		std::stack<int> s(mstack);
	}
	{
		std::cout << "\n" << "copy constructor" <<  std::endl;
		MutantStack<int> mstack1;
		mstack1.push(1);
		mstack1.push(2);
		mstack1.push(3);
		mstack1.push(4);
		MutantStack<int> mstack2(mstack1);
		MutantStack<int>::iterator it1 = mstack2.begin(); 
		MutantStack<int>::iterator ite1 = mstack2.end();
		while (it1 != ite1) {
			std::cout << *it1 << std::endl;
			++it1; 
		}
	}
	{
		std::cout << "\n" << "operator = " << std::endl;
		MutantStack<int> n;
		n.push(11);
		n.push(22);
		n.push(33);
		n.push(44);
		MutantStack<int> l = n;
		MutantStack<int>::iterator it = l.begin(); 
		MutantStack<int>::iterator ite = l.end();
		while (it != ite) {
			std::cout << *it << std::endl;
			++it; 
		}
	}
	return 0;
}