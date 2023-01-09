#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
		std::string ideas[100];
		Brain(void);
		Brain(const Brain& src);
		virtual ~Brain(void);
		Brain& operator=(Brain const& rhs);
};
#endif