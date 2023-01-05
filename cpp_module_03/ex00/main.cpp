#include "ClapTrap.hpp"

int main() {
	std::cout << "create Claptraps" << std::endl;
	ClapTrap a("Irobot");
	ClapTrap b("AppleRobot");
	
	a.attack("AppleRobot");
	a.attack("AppleRobot");
	a.takedamage(5);
	a.beRepaired(5);
	a.takedamage(10);
	a.beRepaired(5);
	return 0;
}