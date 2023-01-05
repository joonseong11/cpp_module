#include "Cat.hpp"

Cat::Cat(void) {
  type = "Cat";
  std::cout << "Cat constructor is called" << std::endl;
}
Cat::Cat(const Cat& src) {
  type = src.type;
  std::cout << "Cat copy constructor is called" << std::endl;
}
Cat::~Cat(void) { std::cout << "Cat destructor is called" << std::endl; }
Cat& Cat::operator=(Cat const& rhs) {
  this->type = rhs.type;
  return *this;
}
void Cat::makeSound(void) const { std::cout << "meow meow" << std::endl; }