#include <iostream>
#include <string>

class Vector {
  std::string* data;
  int capacity;
  int length;

 public:
  // 생성자
  Vector(int n = 1) : data(new std::string[n]), capacity(n), length(0) {}

}