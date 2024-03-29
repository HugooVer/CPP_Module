
#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _value;
		static int const _bits = 8;

	public:
		Fixed();
		Fixed(Fixed const &fixed);
		Fixed(const int value);
		Fixed(const float value);
		~Fixed();

		Fixed& operator= (Fixed const &fixed);

		bool operator>(const Fixed &nb) const;
		bool operator<(const Fixed &nb) const;
		bool operator>=(const Fixed &nb) const;
		bool operator<=(const Fixed &nb) const;
		bool operator==(const Fixed &nb) const;
		bool operator!=(const Fixed &nb) const;

		Fixed operator+(const Fixed &nb);
		Fixed operator-(const Fixed &nb);
		Fixed operator*(const Fixed &nb);
		Fixed operator/(const Fixed &nb);

		Fixed& operator++(); // pre
		Fixed& operator--(); // pre
		Fixed operator++(int); // post
		Fixed operator--(int); // post

		static Fixed& max(Fixed &nb, Fixed &nb0);
		static const Fixed& max(const Fixed &nb, const Fixed &nb0);
		static Fixed& min(Fixed &nb, Fixed &nb0);
		static const Fixed& min(const Fixed &nb, const Fixed &nb0);

		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;

};

std::ostream &operator<< (std::ostream &os, Fixed const &fixed);