#include "Zombie.hpp"

Zombie::~Zombie()
{
	std::cout << name << "is destructed" << std::endl;
}
void Zombie::announce(void)
{
	std::cout << name << ": "
			  << "BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string _name)
{
	name = _name;
}
