#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {
	private:
	 std::string str;
	public:
	 const& getType();
	 void setType();
};

class HumanA {
	private:
	 std::string name;
	 Weapon weapon;

	public:
	 void attack();
};

class HumanB {
 private:
	 std::string name;
	 Weapon weapon;

 public:
	 void attack();
};

#endif