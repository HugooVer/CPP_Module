
#pragma once

#include <iostream>

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
		Fixed& operator<< (Fixed const &fixed);

		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;

};