#include "Dog.hpp"

Dog::Dog(void) {
  type = "Dog";
  brain = new Brain();
  std::cout << "Dog constructor is called" << std::endl;
}
Dog::Dog(const Dog& src) {
  type = src.type;
  brain = new Brain(*src.brain);
  std::cout << "Dog copy constructor is called" << std::endl;
}
Dog::~Dog(void) {
  delete brain;
  std::cout << "Dog destructor is called" << std::endl;
}
Dog& Dog::operator=(Dog const& rhs) {
  *brain = *(rhs.brain);
  this->type = rhs.type;
  return *this;
}
void Dog::makeSound(void) const { std::cout << "bark bark" << std::endl; }
std::string Dog::getIdeas(int i) { return brain->ideas[i]; }
void Dog::setIdeas(int i, std::string str) { brain->ideas[i] = str; }
