#include "Cat.hpp"

Cat::Cat(void) {
  type = "Cat";
  brain = new Brain();
  std::cout << "Cat constructor is called" << std::endl;
}
Cat::Cat(const Cat& src) {
  type = src.type;
  brain = new Brain(*src.brain);
  std::cout << "Cat copy constructor is called" << std::endl;
}
Cat::~Cat(void) { 
  delete brain;
  std::cout << "Cat destructor is called" << std::endl; 
}
Cat& Cat::operator=(Cat const& rhs) {
  *brain = *(rhs.brain);
  this->type = rhs.type;
  return *this;
}
void Cat::makeSound(void) const { std::cout << "meow meow" << std::endl; }
std::string Cat::getIdeas(int i) { return brain->ideas[i]; }
void Cat::setIdeas(int i, std::string str) { brain->ideas[i] = str; }
