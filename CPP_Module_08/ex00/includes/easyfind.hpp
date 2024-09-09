#pragma once

#include <iostream>
#include <exception>
#include <list>

template <typename T> int easyfind(T& intCont, int look)
{
	int pos = 0;
	int ii = intCont.size() - 1;

	for (std::list<int>::reverse_iterator rit=intCont.rbegin(); rit!=intCont.rend(); ++rit)
	{
		if (*rit == look)
			pos = ii;
		--ii;
	}
	return pos;
}