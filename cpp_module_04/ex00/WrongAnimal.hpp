#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
 protected:
  std::string type;

 public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal& src);
  virtual ~WrongAnimal(void);
  WrongAnimal& operator=(WrongAnimal const& rhs);

  void makeSound(void) const;
  std::string getType(void) const;
};
#endif