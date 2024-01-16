
#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
	_value = fixed.getRawBits();
}

Fixed::Fixed(const int value)
{
	_value = value << _bits;
}

Fixed::Fixed(const float value)
{
	_value = roundf(value * (1 << _bits));
}

Fixed::~Fixed()
{
	;
}

Fixed& Fixed::operator= (Fixed const &fixed)
{
	_value = fixed.getRawBits();
	return *this;
}

std::ostream &operator<< (std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed& Fixed::max(Fixed &nb, Fixed &nb0)
{
	if (nb > nb0)
		return nb;
	return nb0;
}

const Fixed& Fixed::max(const Fixed &nb, const Fixed &nb0)
{
	if (nb > nb0)
		return nb;
	return nb0;
}

Fixed& Fixed::min(Fixed &nb, Fixed &nb0)
{
		if (nb > nb0)
		return nb0;
	return nb;
}

const Fixed& Fixed::min(const Fixed &nb, const Fixed &nb0)
{
	if (nb > nb0)
		return nb0;
	return nb;
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