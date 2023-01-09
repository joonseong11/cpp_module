#include "ClapTrap.hpp"

int main() {
	std::cout << "create Claptraps" << std::endl;
	ClapTrap a("Irobot");
	ClapTrap b("AppleRobot");
	
	a.attack("AppleRobot");
	a.attack("AppleRobot");
	a.takeDamage(5);
	a.beRepaired(5);
	a.takeDamage(10);
	a.beRepaired(5);
	return 0;
}