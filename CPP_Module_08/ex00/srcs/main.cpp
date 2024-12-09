#include "easyfind.hpp"

#include <time.h>
#include <cstdlib>
#include <vector>
#include <deque>
#include <algorithm>

template <typename T> void printIntContInOrder(T& intCont) {
	for (typename T::const_iterator it = intCont.begin(); it != intCont.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << '\n';
}

template <typename T> void feelIntCont(T& intCont) {
	for (int i = 1; i <= 20; ++i) {
		int num = rand() % 25;
		if (std::find(intCont.begin(), intCont.end(), num) == intCont.end()) {
			intCont.push_back(num);
		}
		else
			--i;
	}
}

int main ()
{
	srand(time(NULL));
	int i = rand() % 25;
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