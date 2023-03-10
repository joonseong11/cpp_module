#include "ScavTrap.hpp"

int main() {
	std::cout << "======================" << std::endl;
	std::cout << "Create ClapTrap class" << std::endl;
	ClapTrap a("C_a");

	std::cout << "======================" << std::endl;
	std::cout << "Create ScavTrap class" << std::endl;
	ScavTrap b("S_b");
	b.attack("test");

	std::cout << "======================" << std::endl;
	b.guardGate();
	a.attack("hit other robot!!");
	b.takeDamage(20);
	b.takeDamage(20);
	b.takeDamage(20);
	b.takeDamage(20);
	b.beRepaired(20);
	b.takeDamage(20);
	b.takeDamage(20);
	b.beRepaired(20);
}