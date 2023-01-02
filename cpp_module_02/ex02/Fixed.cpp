#include "Fixed.hpp"

Fixed::Fixed(void) {
  std::cout << "Default constructor called" << std::endl;
  fixedPointNum = 0;
}

Fixed::Fixed(const Fixed &f) {
  std::cout << "Copy constructor called" << std::endl;
  fixedPointNum = f.getRawBits();
}

Fixed &Fixed::operator=(Fixed const &f) {
  std::cout << "Copy assignment operatorcalled" << std::endl;
  fixedPointNum = f.getRawBits();
  return *this;
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return fixedPointNum;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  fixedPointNum = raw;
}

Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const int i) {
  std::cout << "Int constructor called" << std::endl;
  fixedPointNum = i << fractionBit;
}

Fixed::Fixed(const float fl) {
  std::cout << "Float constructor called" << std::endl;
  fixedPointNum = roundf(fl * (1 << fractionBit));
}

float Fixed::toFloat(void) const {
  return (float)fixedPointNum / (float)(1 << fractionBit);
}

int Fixed::toInt(void) const { return fixedPointNum >> fractionBit; }

std::ostream &operator<<(std::ostream &out, Fixed const &value) {
  out << value.toFloat();
  return out;
}

bool Fixed::operator<(Fixed const &fix) {
  return this->getRawBits() < fix.getRawBits();
}
bool Fixed::operator>(Fixed const &fix) {
  return this->getRawBits() > fix.getRawBits();
}
bool Fixed::operator<=(Fixed const &fix) {
  return this->getRawBits() <= fix.getRawBits();
}
bool Fixed::operator>=(Fixed const &fix) {
  return this->getRawBits() >= fix.getRawBits();
}
bool Fixed::operator==(Fixed const &fix) {
  return this->getRawBits() == fix.getRawBits();
}
bool Fixed::operator!=(Fixed const &fix) {
  return this->getRawBits() != fix.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fix) const {
  Fixed temp;
  temp.setRawBits(this->getRawBits() + fix.getRawBits());
  return temp;
}
Fixed Fixed::operator-(const Fixed &fix) const {
  Fixed temp;
  temp.setRawBits(this->getRawBits() - fix.getRawBits());
  return temp;
}
Fixed Fixed::operator*(const Fixed &fix) const {
  Fixed temp;
  temp.setRawBits((this->getRawBits() * fix.getRawBits()) >> fractionBit);
  return temp;
}
Fixed Fixed::operator/(const Fixed &fix) const {
  Fixed temp;
  temp.setRawBits((this->getRawBits() / fix.getRawBits()) >> fractionBit);
  return temp;
}

Fixed Fixed::operator++(int) {
  Fixed temp;
  temp.setRawBits(this->getRawBits());
  this->setRawBits((this->getRawBits() + 1));
  return temp;
}
Fixed Fixed::operator--(int) {
  Fixed temp;
  temp.setRawBits(this->getRawBits());
  this->setRawBits((this->getRawBits() - 1));
  return temp;
}
Fixed &Fixed::operator++(void) {
  this->setRawBits(this->getRawBits() + 1);
  return *this;
}
Fixed &Fixed::operator--(void) {
  this->setRawBits(this->getRawBits() - 1);
  return *this;
}

Fixed const &Fixed::min(Fixed &a, Fixed &b) {
  if (a > b)
    return b;
  else if (a < b)
    return a;
  else
    return a;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
  if (a.getRawBits() > b.getRawBits())
    return b;
  else if (a.getRawBits() < b.getRawBits())
    return a;
  else
    return a;
}
Fixed const &Fixed::max(Fixed &a, Fixed &b) {
  if (a > b)
    return a;
  else if (a < b)
    return b;
  else
    return a;
};
Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
  if (a.getRawBits() > b.getRawBits())
    return a;
  else if (a.getRawBits() < b.getRawBits())
    return b;
  else
    return a;
};
