#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#include <string>

class Fixed {
 private:
  int fixedPointNum;
  static const int fractionBit = 8;

 public:
  Fixed(void);
  Fixed(const int i);
  Fixed(const float fl);
  Fixed(const Fixed &f);

  Fixed &operator=(Fixed const &f);

  bool operator>(Fixed const &fix);
  bool operator<(Fixed const &fix);
  bool operator>=(Fixed const &fix);
  bool operator<=(Fixed const &fix);
  bool operator==(Fixed const &fix);
  bool operator!=(Fixed const &fix);

  Fixed operator+(Fixed const &fix) const;
  Fixed operator-(Fixed const &fix) const;
  Fixed operator*(Fixed const &fix) const;
  Fixed operator/(Fixed const &fix) const;

  Fixed operator++(int);
  Fixed operator--(int);
  Fixed &operator++(void);
  Fixed &operator--(void);

  static Fixed &min(Fixed &a, Fixed &b);
  static Fixed const &min(Fixed const &a, Fixed const &b);
  static Fixed const &max(Fixed &a, Fixed &b);
  static Fixed const &max(Fixed const &a, Fixed const &b);

  int getRawBits(void) const;
  void setRawBits(int const raw);

  float toFloat(void) const;
  int toInt(void) const;
  ~Fixed(void);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);
#endif