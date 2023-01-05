#include "FlagTrap.hpp"


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

void FlagTrap::attack(const std::string& target) {
  if (this->EnergyPoint > 0 && this->HitPoint > 0) {
    std::cout << "FlagTrap " << this->name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage!"
              << std::endl;
    this->EnergyPoint -= 1;
  } else
    std::cout << "FlagTrap Cannot attack" << std::endl;
}
