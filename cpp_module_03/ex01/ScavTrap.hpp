#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap& src);
		ScavTrap(std::string str);
		~ScavTrap(void);
		ScavTrap& operator=(ScavTrap const& rhs);
};
ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "(ScavTrap) the constructor is called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap() {
	
}
ScavTrap::ScavTrap(std::string str) : ClapTrap() {

}
ScavTrap::~ScavTrap(void) {
	
}

#endif