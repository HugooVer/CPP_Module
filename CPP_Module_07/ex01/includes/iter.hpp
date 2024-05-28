#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stdint.h>

// template <typename T, typename U, typename Y>
// void iter(T& add, U len, Y& fun)
// {
// 	for (size_t idx = 0; idx < len; ++idx)
// 		fun(add[idx]);
// }

template <typename T, typename Y>
void iter(T& add, size_t len, Y& fun)
{
	for (size_t idx = 0; idx < len; ++idx)
		fun(add[idx]);
}

template <typename T>
void printer(T  target)
{
	std::cout << target << "\n";
}
