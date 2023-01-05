#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main () {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();  // will output the cat sound! j->makeSound();
	meta->makeSound();
	
	std::cout << "===============================" << std::endl;
	std::cout << "==========Wrong case===========" << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();

	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound();  // will output wrong sound!;
	meta2->makeSound();

	system("leaks fire");
	return 0;
}