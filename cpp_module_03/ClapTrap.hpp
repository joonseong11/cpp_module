#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string name;
		int HitPoint;

	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap& src);
		ClapTrap(std::string name, int HitPoint);
		virtual ~ClapTrap(void);
		ClapTrap& operator=(ClapTrap const& rhs);
};



#endif