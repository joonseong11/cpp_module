#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main() {
	std::cout << "======================" << std::endl;
	std::cout << "==Create ClapTrap class==" << std::endl;
	ClapTrap a("ClapTrap_a");

	std::cout << "======================" << std::endl;
	std::cout << "==Create ScavTrap class==" << std::endl;
	ScavTrap b("ScavTrap_b");
	b.guardGate();

	std::cout << "======================" << std::endl;
	std::cout << "==Create FlagTrap class==" << std::endl;
	FlagTrap c("c");
	FlagTrap d("d");

	std::cout << "======================" << std::endl;
	FlagTrap e("e");
	ClapTrap *f = &e;
	f->attack("in the air");

	std::cout << "======================" << std::endl;
	c.highFivesGyus();
	a.attack("c");
	c.takedamage(0);
	b.attack("c");
	c.takedamage(20);
	d.attack("c");
	c.takedamage(50);
	c.beRepaired(20);
	d.attack("c");
	c.takedamage(50);
	c.attack("hit around");
}