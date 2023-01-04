#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fixedPointNum = 0;
}
Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixedPointNum = f.fixedPointNum;
}
Fixed &Fixed::operator=(Fixed const &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (&f != this)
		this->fixedPointNum = f.fixedPointNum;
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

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPointNum = i << fractionBit;
}
Fixed::Fixed(const float fl)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPointNum = roundf(fl * (1 << fractionBit));
}
float Fixed::toFloat(void) const
{
	return static_cast<float>(fixedPointNum) / static_cast<float>(1 << fractionBit);
}
int Fixed::toInt(void) const
{
	return fixedPointNum >> fractionBit;
}
std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}