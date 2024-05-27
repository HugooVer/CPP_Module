#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stdint.h>

template <typename T> T max(T& x, T& y)
{
	return (x > y) ? x : y;
}

template <typename T> T min(T& x, T& y)
{
	return (x < y) ? x : y;
}

template <typename T>
void swap(T& x,T& y)
{
	T z;
	z = x;
	x = y;
	y = z;
}
