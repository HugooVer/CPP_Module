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

	Array(Array const& oldArray) : arr(new T[oldArray._size]), _size(oldArray._size)
	{
		for (unsigned int i = 0; i < _size; ++i)
			arr[i] = oldArray.arr[i];
	}

	~Array()
	{
		delete[] arr;
	}

	Array& operator=(Array const& oldArray)
	{
		if (this != &oldArray) {
			delete[] arr;
			_size = oldArray._size;
			arr = new T[_size];
			for (unsigned int i = 0; i < _size; ++i)
				arr[i] = oldArray.arr[i];
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
