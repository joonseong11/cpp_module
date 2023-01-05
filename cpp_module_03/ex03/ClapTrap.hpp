#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	protected:
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

		virtual void attack(const std::string& target);
		virtual void takedamage(unsigned int amount);
		virtual void beRepaired(unsigned int amount);
};
#endif