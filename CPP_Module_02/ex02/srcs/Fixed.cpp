
#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixed)
{
	_value = fixed.getRawBits();
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	_value = value << _bits;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (Fixed const &fixed)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
}

std::ostream &operator<< (std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::getRawBits() const
{
	return _value;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::toInt(void) const
{
	return _value >> _bits;
}

float Fixed::toFloat() const
{
	return (float)_value / (1 << _bits);
}