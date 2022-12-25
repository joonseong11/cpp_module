#include "Zombie.hpp"

void Zombie::setName(std::string _name)
{
	 name = _name;
}
void Zombie::announce(void)
{
	 std::cout << name << ": "
			   << "BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie()
{
	 std::cout << name << " is destructed" << std::endl;
}
