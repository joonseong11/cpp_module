#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap& src);
		ScavTrap(std::string str);
		~ScavTrap(void);
		ScavTrap& operator=(ScavTrap const& rhs);
		void guardGate();
		void attack(const std::string& target);
};
#endif