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
	 void debug(Zombie zombie);
	 ~Zombie();
}; 
void Zombie::setName(std::string _name)
{
	 name = _name;
}
void Zombie::announce(void)
{
	 std::cout << name << ": "
			   << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::debug(Zombie zombie){
	zombie.announce();
}
Zombie::~Zombie()
{
	 std::cout << name << " is destructed" << std::endl;
}

Zombie *zombieHorde(int N, std::string name)
{
	 Zombie *zombies = new Zombie[N];
	 for (int i = 0; i < N; i++)
	 {
		 zombies[i].setName(name);
	 }
	 return zombies;
}

#endif