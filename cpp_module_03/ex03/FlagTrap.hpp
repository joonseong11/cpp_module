#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	private:
	public:
		FlagTrap(void);
		FlagTrap(const FlagTrap& src);
		FlagTrap(std::string str);
		~FlagTrap(void);
		FlagTrap& operator=(FlagTrap const& rhs);
		void highFivesGyus(void);

		void attack(const std::string& target);
};
#endif