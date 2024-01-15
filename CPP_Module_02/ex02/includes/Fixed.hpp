
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

		inline bool operator>(const Fixed &nb) const {return (this->toFloat() > nb.toFloat());}
		inline bool operator<(const Fixed &nb) const {return (this->toFloat() < nb.toFloat());}
		inline bool operator>=(const Fixed &nb) const {return (this->toFloat() >= nb.toFloat());}
		inline bool operator<=(const Fixed &nb) const {return (this->toFloat() <= nb.toFloat());}
		inline bool operator==(const Fixed &nb) const {return (this->toFloat() == nb.toFloat());}
		inline bool operator!=(const Fixed &nb) const {return (this->toFloat() != nb.toFloat());}

		inline Fixed operator+(const Fixed &nb) {Fixed tm(this->toFloat() + nb.toFloat()); return (tm);}
		inline Fixed operator-(const Fixed &nb) {Fixed tm(this->toFloat() - nb.toFloat()); return (tm);}
		inline Fixed operator*(const Fixed &nb) {Fixed tm(this->toFloat() * nb.toFloat()); return (tm);}
		inline Fixed operator/(const Fixed &nb) {Fixed tm(this->toFloat() / nb.toFloat()); return (tm);}

		inline Fixed& operator++() {++_value; return *this;} // pre
		inline Fixed& operator--() {--_value; return *this;} // pre
		inline Fixed operator++(int nb) {Fixed old(*this); ++_value; return old;} // post
		inline Fixed operator--(int nb) {Fixed old(*this); --_value; return old;} // post

		

		int getRawBits() const;
		void setRawBits(int const raw);
		int toInt() const;
		float toFloat() const;

};

std::ostream &operator<< (std::ostream &os, Fixed const &fixed);