#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stdint.h>

template <class T>
class Array
{
	private:
		Array();
		Array(unsigned int n);
		Array(Array const &array);
		~Array();

	public:
		int size();

		Array& operator= (Array const &array);
		const Type & operator[](int Index) const
		{
			return Value[Index];
		}
		Type & operator[](int Index)
		{
			return Value[Index];
		}
};
