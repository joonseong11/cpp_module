#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main () {
	std::cout << "============= Test example =============" << std::endl;
	const Animal* i = new Dog();
	const Animal* j = new Cat();
	delete j;
	delete i;

	std::cout << "\n" << "============= Test 0 =============" << std::endl;
	Animal *animal_arr[2];
	animal_arr[0] = new Dog();
	animal_arr[1] = new Cat();
	for (int i = 0; i < 2; i++)
		animal_arr[i]->makeSound();

	for (int i = 0; i < 2; i++)
		delete animal_arr[i];

	std::cout << "\n" << "============= Test 1 =============" << std::endl;
	Cat cat1;
	cat1.setIdeas(0, "First thought of cat");
	cat1.setIdeas(1, "Second thought of cat");
	Dog dog1;
	dog1.setIdeas(0, "First thought of dog");
	dog1.setIdeas(1, "Second thought of dog");
	Cat cat2;
	cat2 = cat1;
	std::cout << "cat1 idea[0] : " << cat1.getIdeas(0) << std::endl;
	std::cout << "cat1 idea[1] : " << cat1.getIdeas(1) << std::endl;
	std::cout << "cat2 idea[0] : " << cat2.getIdeas(0) << std::endl;
	std::cout << "cat2 idea[1] : " << cat2.getIdeas(1) << std::endl;
	std::cout << "dog1 idea[0] : " << dog1.getIdeas(0) << std::endl;
	std::cout << "dog1 idea[1] : " << dog1.getIdeas(1) << std::endl;

	std::cout << "\n" << "============= Test 2 : check deep copy =============" << std::endl;
	std::cout << "cat1 idea[0] : " << cat1.getIdeas(0) << std::endl;
	std::cout << "cat1 idea[1] : " << cat1.getIdeas(1) << std::endl;
	std::cout << "cat2 idea[0] : " << cat2.getIdeas(0) << std::endl;
	std::cout << "cat2 idea[1] : " << cat2.getIdeas(1) << std::endl;
	cat2.setIdeas(0, "hi");
	cat2.setIdeas(1, "hello");
	std::cout << "cat1 idea[0] : " << cat1.getIdeas(0) << std::endl;
	std::cout << "cat1 idea[1] : " << cat1.getIdeas(1) << std::endl;
	std::cout << "cat2 idea[0] : " << cat2.getIdeas(0) << std::endl;
	std::cout << "cat2 idea[1] : " << cat2.getIdeas(1) << std::endl;

	system("leaks abstract | grep leak");
	return 0;
}