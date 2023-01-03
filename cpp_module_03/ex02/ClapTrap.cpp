#include "ClapTrap.hpp"

ClapTrap& ClapTrap::operator=(ClapTrap const& rhs) {
  this->name = rhs.name;
  this->HitPoint = rhs.HitPoint;
  this->EnergyPoint = rhs.EnergyPoint;
  this->AttackDamage = rhs.AttackDamage;
  return *this;
}
ClapTrap::ClapTrap(void)
    : name("default"), HitPoint(10), EnergyPoint(10), AttackDamage(0) {
  std::cout << "the constructor is called" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& src)
    : name(src.name),
      HitPoint(src.HitPoint),
      EnergyPoint(src.HitPoint),
      AttackDamage(src.AttackDamage) {
  std::cout << "the copy constructor is called" << std::endl;
}
ClapTrap::ClapTrap(std::string str)
    : name(str), HitPoint(10), EnergyPoint(10), AttackDamage(0) {
  std::cout << "the constructor is called" << std::endl;
}
ClapTrap::~ClapTrap(void) {
  std::cout << "the destructor is called" << std::endl;
}
void ClapTrap::attack(const std::string& target) {
  if (this->EnergyPoint > 0 && this->HitPoint > 0) {
    std::cout << "ClapTrap " << this->name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage!"
              << std::endl;
    this->EnergyPoint -= 1;
  } else
    std::cout << "ClapTrap Cannot attack" << std::endl;
}
void ClapTrap::takedamage(unsigned int amount) {
  if (this->HitPoint > amount) {
    std::cout << "ClapTrap " << this->name << " take damage amount of "
              << amount << std::endl;
    this->HitPoint -= amount;
  } else if (this->HitPoint > 0) {
    std::cout << "ClapTrap " << this->name << " take damage amount of "
              << amount << std::endl;
    this->HitPoint = 0;
    std::cout << "your ClapTrap die" << std::endl;
  } else
    std::cout << "your ClapTrap die" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
  if (this->HitPoint > 0 && this->EnergyPoint > 0) {
    std::cout << "ClapTrap " << this->name << " be repaired (" << amount
              << "points)" << std::endl;
    this->EnergyPoint -= 1;
    this->HitPoint += amount;
  } else
    std::cout << "ClapTrap Cannot be repaired" << std::endl;
}