#pragma once

#include <iostream>
#include <list>

template <typename T>int easyfind(T& intCont, int look)
{
	int pos = -1;
	int ii = intCont.size() - 1;

	for (typename T::reverse_iterator rit = intCont.rbegin(); rit != intCont.rend(); ++rit)
	{
		if (*rit == look)
			pos = ii;
		--ii;
	}
	return pos;
}