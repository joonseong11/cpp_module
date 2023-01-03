#include "ScavTrap.hpp"

int main() {
	std::cout << "======================" << std::endl;
	std::cout << "Create ClapTrap class" << std::endl;
	ClapTrap a("ClapTrap_a");

	std::cout << "======================" << std::endl;
	std::cout << "Create ScavTrap class" << std::endl;
	ScavTrap b("ScavTrap_b");

	std::cout << "======================" << std::endl;
	b.guardGate();
	a.attack("hit other robot!!");
	b.takedamage(20);
	b.takedamage(20);
	b.takedamage(20);
	b.takedamage(20);
	b.beRepaired(20);
	b.takedamage(20);
	b.takedamage(20);
	b.beRepaired(20);
}