#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default2") {
  HitPoint = 100;
  EnergyPoint = 50;
  AttackDamage = 20;
  std::cout << "(ScavTrap) the constructor is called" << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap() {
  name = src.name;
  HitPoint = src.HitPoint;
  EnergyPoint = src.EnergyPoint;
  AttackDamage = src.AttackDamage;
  std::cout << "(ScavTrap) the copy constructor is called" << std::endl;
}
ScavTrap::ScavTrap(std::string str) : ClapTrap(str) {
  HitPoint = 100;
  EnergyPoint = 50;
  AttackDamage = 20;
  std::cout << "(ScavTrap) the constructor is called" << std::endl;
}
ScavTrap::~ScavTrap(void) {
  std::cout << "(ScavTrap) The destructor is called" << std::endl;
}
ScavTrap& ScavTrap::operator=(ScavTrap const& rhs) {
  this->name = rhs.name;
  this->HitPoint = rhs.HitPoint;
  this->EnergyPoint = rhs.EnergyPoint;
  this->AttackDamage = rhs.AttackDamage;
  return *this;
}
void ScavTrap::guardGate() {
  std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (this->EnergyPoint > 0 && this->HitPoint > 0) {
    std::cout << "ScavTrap " << this->name << " attacks " << target
              << " causing " << this->AttackDamage << " points of damage!"
              << std::endl;
    this->EnergyPoint -= 1;
  } else
    std::cout << "ScavTrap Cannot attack" << std::endl;
}

void ScavTrap::takedamage(unsigned int amount) {
  if (this->HitPoint > amount) {
    std::cout << "ScavTrap " << this->name << " take damage amount of "
              << amount << std::endl;
    this->HitPoint -= amount;
  } else if (this->HitPoint > 0) {
    std::cout << "ScavTrap " << this->name << " take damage amount of "
              << amount << std::endl;
    this->HitPoint = 0;
    std::cout << "your class die" << std::endl;
  } else
    std::cout << "your class die" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
  if (this->HitPoint > 0 && this->EnergyPoint > 0) {
    std::cout << "ScavTrap " << this->name << " be repaired (" << amount
              << "points)" << std::endl;
    this->EnergyPoint -= 1;
    this->HitPoint += amount;
  } else
    std::cout << "ScavTrap Cannot be repaired" << std::endl;
}