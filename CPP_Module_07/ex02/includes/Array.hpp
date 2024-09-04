// #pragma once

// #include <iostream>
// #include <cstdlib>
// #include <string>
// #include <sstream>
// #include <stdint.h>

// template <class T>
// class Array
// {
// 	private:
// 		Array() : T arr[];
// 		Array(unsigned int n) : T arr[n]
// 		{
// 			for (unsigned int i = 0, i < n, ++i)
// 				arr[i] = new T();
// 		}
// 		Array(Array const &array);
// 		~Array();

// 	public:
// 		int size();

// 		Array& operator= (Array const &array);
// 		const Type & operator[](int Index) const
// 		{
// 			return Value[Index];
// 		}
// 		Type & operator[](int Index)
// 		{
// 			return Value[Index];
// 		}
// };


#pragma once

#include <iostream>
#include <cstdlib>
#include <exception>

template <class T>
class Array
{
private:
	T* arr;
	unsigned int _size;

public:
	Array() : arr(NULL), _size(0) {}

	Array(unsigned int n) : arr(new T[n]()), _size(n)
	{
		for (unsigned int i = 0; i < n; ++i)
			arr[i] = T();
	}

	Array(Array const& other) : arr(new T[other._size]), _size(other._size)
	{
		for (unsigned int i = 0; i < _size; ++i)
			arr[i] = other.arr[i];
	}

	~Array()
	{
		delete[] arr;
	}

	Array& operator=(Array const& other)
	{
		if (this != &other) {
			delete[] arr;
			_size = other._size;
			arr = new T[_size];
			for (unsigned int i = 0; i < _size; ++i)
				arr[i] = other.arr[i];
		}
		return *this;
	}

	T& operator[](int index)
	{
		if (index < 0 || index >= static_cast<int>(_size))
			throw std::out_of_range("Array index out of bounds");
		return arr[index];
	}

	const T& operator[](int index) const
	{
		if (index < 0 || index >= static_cast<int>(_size))
			throw std::out_of_range("Array index out of bounds");
		return arr[index];
	}

	unsigned int size() const
	{
		return _size;
		}
};
