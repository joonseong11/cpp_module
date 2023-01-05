#include "Dog.hpp"

Dog::Dog(void) {
  type = "Dog";
  std::cout << "Dog constructor is called" << std::endl;
}
Dog::Dog(const Dog& src) {
  type = src.type;
  std::cout << "Dog copy constructor is called" << std::endl;
}
Dog::~Dog(void) { std::cout << "Dog destructor is called" << std::endl; }
Dog& Dog::operator=(Dog const& rhs) {
  this->type = rhs.type;
  return *this;
}
void Dog::makeSound(void) const { std::cout << "bark bark" << std::endl; }