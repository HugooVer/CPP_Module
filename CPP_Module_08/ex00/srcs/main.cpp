#include "easyfind.hpp"

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <list>
#include <vector>
#include <deque>

template <typename T> void printIntContInOrder(T& intCont) {
	for (typename T::const_iterator it = intCont.begin(); it != intCont.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << '\n';
}

template <typename T> void feelIntCont (T& intCont) {
	for (int i=1; i<=10; ++i)
		intCont.push_back((rand() % 10));
}

int main ()
{

	srand(time(NULL));
	int i = rand() % 10;
	std::list<int> lst;
	std::vector<int> vec;
	std::deque<int> deq;

	feelIntCont(lst);
	feelIntCont(vec);
	feelIntCont(deq);
	std::cout << i << " is in position " << easyfind(lst, i) << " in the list:";
	printIntContInOrder(lst);
	std::cout << i << " is in position " << easyfind(vec, i) << " in the vector:";
	printIntContInOrder(vec);
	std::cout << i << " is in position " << easyfind(deq, i) << " in the deque:";
	printIntContInOrder(deq);

	return 0;
}