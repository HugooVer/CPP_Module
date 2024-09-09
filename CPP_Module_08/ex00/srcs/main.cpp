#include "easyfind.hpp"

#include <iostream>
#include <list>
#include <vector>

void printListInOrder(const std::list<int>& mylist) {
	std::cout << "mylist in order:";
	for (std::list<int>::const_iterator it = mylist.begin(); it != mylist.end(); ++it) {
		std::cout << ' ' << *it;
	}
	std::cout << '\n';
}

int main ()
{
	std::list<int> mylist;

	for (int i=1; i<=5; ++i) mylist.push_back(i * 11);
	for (int i=1; i<=5; ++i) mylist.push_back(i * 11);
	std::cout << easyfind(mylist, 22) << std::endl;
	printListInOrder(mylist);
	return 0;
}