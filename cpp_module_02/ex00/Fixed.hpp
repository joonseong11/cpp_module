#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
		int fixedPointNum;
		static const int fractionBit = 8;

	public:
		Fixed(void);
		Fixed(const Fixed& f);
		Fixed& operator=(Fixed const& f);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed(void);
};
#endif