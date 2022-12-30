#include "Fixed.hpp"

Fixed::Fixed(void)
{
	fixedPointNum = 0;
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	fixedPointNum = f.getRawBits();
}
Fixed &Fixed::operator=(Fixed const &f)
{
	std::cout << "Copy assignment operatorcalled" << std::endl;
	fixedPointNum = f.getRawBits();
	return *this;
}
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPointNum;
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fixedPointNum = raw;
}
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}