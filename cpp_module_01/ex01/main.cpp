#include "Zombie.hpp"

int main()
{
	Zombie *zombies = zombieHorde(3, "horde1");
	zombies->debug(zombies[0]);
	zombies->debug(zombies[1]);
	zombies->debug(zombies[2]);
	zombies->debug(zombies[3]);
	// zombies[0].announce();
	delete[] zombies;
}