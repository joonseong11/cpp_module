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
		void getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed(void);
};
Fixed::Fixed(void) {
	fixedPointNum = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed& f) {
	std::cout << "Copy constructor called" << std::endl;
	fixedPointNum = f.fixedPointNum;
}
Fixed& Fixed::operator=(Fixed const& f) {
	std::cout << "Copy assignment called" << std::endl;
	fixedPointNum = f.fixedPointNum;
	return *this;
}
void Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	
}
void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	
}
Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}
#endif