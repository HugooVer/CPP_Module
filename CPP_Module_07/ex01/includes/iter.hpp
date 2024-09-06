#pragma once

#include <iostream>

template <typename T, typename Y>
void iter(T& ad, size_t len, Y& fun)
{
	for (size_t idx = 0; idx < len; ++idx)
		fun(ad[idx]);
}

template <typename T>
void printer(T  target)
{
	std::cout << target << std::endl;
}
