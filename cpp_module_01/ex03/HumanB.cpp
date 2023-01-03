#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL){}
void HumanB::attack() {
	std::cout << this->name << " attacks with their "
			<< ( weapon? this->weapon->getType() : "fist") << std::endl;
}
void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}