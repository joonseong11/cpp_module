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
};
FlagTrap::FlagTrap(void) : ClapTrap("default3") {
	HitPoint = 100;
	EnergyPoint = 100;
	AttackDamage = 30;
	std::cout << "(FlagTrap) the constructor is called" << std::endl;
}
FlagTrap::FlagTrap(const FlagTrap& src) : ClapTrap() {
    name = src.name;
    HitPoint = src.HitPoint;
    EnergyPoint = src.EnergyPoint;
    AttackDamage = src.AttackDamage;
    std::cout << "(FlagTrap) the copy constructor is called" << std::endl;
}
FlagTrap::FlagTrap(std::string str) : ClapTrap(str) {
    HitPoint = 100;
    EnergyPoint = 100;
    AttackDamage = 30;
    std::cout << "(FlagTrap) the constructor is called" << std::endl;
}
FlagTrap::~FlagTrap(void) {
    std::cout << "(FlagTrap) The destructor is called" << std::endl;
}
FlagTrap& FlagTrap::operator=(FlagTrap const& rhs) {
    name = rhs.name;
    HitPoint = rhs.HitPoint;
    EnergyPoint = rhs.EnergyPoint;
    AttackDamage = rhs.AttackDamage;
    return *this;
}
void FlagTrap::highFivesGyus(void) {
    std::cout << name << " requests high fives" << std::endl;
}
#endif