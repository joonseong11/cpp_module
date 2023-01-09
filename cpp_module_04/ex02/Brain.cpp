#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) {
  for (int i = 0; i < 100; i++) {
    ideas[i] = "default";
  }
}
Brain::Brain(const Brain& src) {
  for (int i = 0; i < 100; i++) {
    ideas[i] = src.ideas[i];
  }
}
Brain::~Brain(void) {
  std::cout << "Brain destructor is called" << std::endl;
}
Brain& Brain::operator=(Brain const& rhs) {
  for (int i = 0; i < 100; i++) {
    ideas[i] = rhs.ideas[i];
  }
  std::cout << "brain copy operator" << std::endl;
  return *this;
}