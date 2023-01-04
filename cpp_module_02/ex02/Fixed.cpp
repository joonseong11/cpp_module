#include "Fixed.hpp"

Fixed::Fixed(void) {
  fixedPointNum = 0;
}

Fixed::Fixed(const Fixed &f) {
  this->fixedPointNum = f.fixedPointNum;
}

Fixed &Fixed::operator=(Fixed const &f) {
  if (&f != this)
    this->fixedPointNum = f.fixedPointNum;
  return *this;
}

int Fixed::getRawBits(void) const {
  return fixedPointNum;
}

void Fixed::setRawBits(int const raw) {
  fixedPointNum = raw;
}

Fixed::~Fixed(void) {}

Fixed::Fixed(const int i) {
  fixedPointNum = i << fractionBit;
}

Fixed::Fixed(const float fl) {
  fixedPointNum = roundf(fl * (1 << fractionBit));
}

float Fixed::toFloat(void) const {
  return static_cast<float>(fixedPointNum) / static_cast<float>(1 << fractionBit);
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

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return a <= b ? a : b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
  return a.fixedPointNum <= b.fixedPointNum ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
  return a.fixedPointNum >= b.fixedPointNum ? a : b;
};

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
  return a.fixedPointNum >= b.fixedPointNum ? a : b;
};
