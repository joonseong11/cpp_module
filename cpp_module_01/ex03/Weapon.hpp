#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	private:
	 std::string type;
	public:
	 Weapon(std::string type);
	 const std::string& getType();
	 void setType(std::string type);
};
Weapon::Weapon(std::string type) {
	this->type = type;
}
const std::string& Weapon::getType() {
	return this->type;
}
void Weapon::setType(std::string type) {
	this->type = type;
}
#endif