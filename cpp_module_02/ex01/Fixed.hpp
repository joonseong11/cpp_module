#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	private:
		int fixedPointNum;
		static const int fractionBit = 8;

	public:
		Fixed(void);
		Fixed(const int i);
		Fixed(const float fl);
		Fixed(const Fixed &f);

		Fixed &operator=(Fixed const &f);

		int getRawBits(void) const;
		void setRawBits(int const raw);

		float toFloat(void) const;
		int toInt(void) const;
		~Fixed(void);
};
std::ostream &operator<<(std::ostream &out, Fixed const &value);
#endif
