#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("default") {
  std::cout << "WrongAnimal Constructor is called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& src) : type(src.type) {
  std::cout << "WrongAnimal Copy constructor is called" << std::endl;
}
WrongAnimal::~WrongAnimal(void) {
  std::cout << "WrongAnimal Destructor is called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal const& rhs) {
  this->type = rhs.type;
  return *this;
}
void WrongAnimal::makeSound(void) const {
  std::cout << "Wrong Animal sound" << std::endl;
}
std::string WrongAnimal::getType(void) const { return type; }