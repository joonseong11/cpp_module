#include "Zombie.hpp"

int main()
{
	Zombie *zombies = zombieHorde(3, "horde1");
	zombies[0].announce();
	zombies[1].announce();
	zombies[2].announce();
	delete[] zombies;
}