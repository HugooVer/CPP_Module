#pragma once

#include <iostream>
#include <list>

template <typename T>int easyfind(T& intCont, int look)
{
	int pos = 0;

	for (typename T::iterator it = intCont.begin(); it != intCont.end(); ++it) {
		if (*it == look)
			return pos;
		++pos;
	}
	return -1;
}