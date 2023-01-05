#include "Cat.hpp"

Cat::Cat(void) {
  type = "Cat";
  brain = new Brain();
  std::cout << "Cat constructor is called" << std::endl;
}
Cat::Cat(const Cat& src) {
  type = src.type;
  for (int i = 0; i < 100; i++)
    brain->ideas[i] = src.brain->getIdeas(i);
  std::cout << "Cat copy constructor is called" << std::endl;
}
Cat::~Cat(void) { 
  delete brain;
  std::cout << "Cat destructor is called" << std::endl; 
}
Cat& Cat::operator=(Cat const& rhs) {
  brain = rhs.brain;
  this->type = rhs.type;
  return *this;
}
void Cat::makeSound(void) const { std::cout << "meow meow" << std::endl; }