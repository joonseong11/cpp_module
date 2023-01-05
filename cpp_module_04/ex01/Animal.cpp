#include "Animal.hpp"

Animal::Animal(void) : type("default") {
  std::cout << "Constructor is called" << std::endl;
}
Animal::Animal(const Animal& src) : type(src.type) {
  std::cout << "Copy constructor is called" << std::endl;
}
Animal::~Animal(void) { std::cout << "Destructor is called" << std::endl; }
Animal& Animal::operator=(Animal const& rhs) {
  this->type = rhs.type;
  return *this;
}
void Animal::makeSound(void) const {}
std::string Animal::getType(void) const { return type; }