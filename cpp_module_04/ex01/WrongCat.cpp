#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
  type = "WrongCat";
  std::cout << "WrongCat constructor is called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& src) {
  type = src.type;
  std::cout << "WrongCat copy constructor is called" << std::endl;
}
WrongCat::~WrongCat(void) {
  std::cout << "WrongCat destructor is called" << std::endl;
}
WrongCat& WrongCat::operator=(WrongCat const& rhs) {
  this->type = rhs.type;
  return *this;
}
void WrongCat::makeSound(void) const { std::cout << "meow meow" << std::endl; }