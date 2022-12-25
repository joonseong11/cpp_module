#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie {
	private:
	 std::string name;

 	public:
	 void setName(std::string _name);
	 void announce(void);
	 ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);
#endif