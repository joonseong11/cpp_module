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



#endif