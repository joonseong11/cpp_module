#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string name;
		unsigned int HitPoint;
		unsigned int EnergyPoint;
		unsigned int AttackDamage;

	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap& src);
		ClapTrap(std::string str);
		~ClapTrap(void);
		ClapTrap& operator=(ClapTrap const& rhs);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
#endif