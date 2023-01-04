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