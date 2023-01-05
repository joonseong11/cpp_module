#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FlagTrap
{
	private:
	std::string name;
	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap& src);
		virtual ~DiamondTrap(void);
		DiamondTrap& operator=(DiamondTrap const& rhs);
};

#endif