#include "MutantStack.hpp"
#include <iostream>
#include <algorithm>
#include <list>
#include <vector>

int main() {

	int pos = 3;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(48);
	mstack.push(456);
	mstack.push(7841);
	mstack.push(78168);
	mstack.push(265688);
	mstack.push(-10);
	std::cout << "Mutanstack :" << std::endl;
	for (MutantStack<int>::iterator idx = mstack.begin(); idx != mstack.end(); ++idx) {
		std::cout << *idx << ' ';
	}
	std::cout << std::endl;
	MutantStack<int>::iterator iterms = mstack.begin();
	std::advance(iterms, pos);
	std::cout << *iterms << std::endl << std::endl;
	


	std::list<int> list;
	list.push_back(5);
	list.push_back(48);
	list.push_back(456);
	list.push_back(7841);
	list.push_back(78168);
	list.push_back(265688);
	list.push_back(-10);
	std::cout << "List :" << std::endl;
	for (std::list<int>::iterator idx = list.begin(); idx != list.end(); ++idx) {
		std::cout << *idx << ' ';
	}
	std::cout << std::endl;
	std::list<int>::iterator iterl = list.begin();
	std::advance(iterl, pos);
	std::cout << *iterl << std::endl << std::endl;



	std::vector<int> vector;
	vector.push_back(5);
	vector.push_back(48);
	vector.push_back(456);
	vector.push_back(7841);
	vector.push_back(78168);
	vector.push_back(265688);
	vector.push_back(-10);
	std::cout << "Vector :" << std::endl;
	for (std::vector<int>::iterator idx = vector.begin(); idx != vector.end(); ++idx) {
		std::cout << *idx << ' ';
	}
	std::cout << std::endl;
	std::vector<int>::iterator iterv = vector.begin();
	std::advance(iterv, pos);
	std::cout << *iterv << std::endl << std::endl;



	std::deque<int> deque;
	deque.push_back(5);
	deque.push_back(48);
	deque.push_back(456);
	deque.push_back(7841);
	deque.push_back(78168);
	deque.push_back(265688);
	deque.push_back(-10);
	std::cout << "Deque :" << std::endl;
	for (std::deque<int>::iterator idx = deque.begin(); idx != deque.end(); ++idx) {
		std::cout << *idx << ' ';
	}
	std::cout << std::endl;
	std::deque<int>::iterator iterd = deque.begin();
	std::advance(iterd, pos);
	std::cout << *iterd << std::endl << std::endl;


	// std::stack<int> stack;
	// stack.push(5);
	// stack.push(48);
	// stack.push(456);
	// stack.push(7841);
	// stack.push(78168);
	// stack.push(265688);
	// stack.push(-10);
	// std::cout << "Mutanstack :" << std::endl;
	// for (MutantStack<int>::iterator idx = stack.begin(); idx != stack.end(); ++idx) {
	// 	std::cout << *idx << ' ';
	// }
	// std::cout << std::endl;
	// MutantStack<int>::iterator iterms = stack.begin();
	// std::advance(iterms, pos);
	// std::cout << *iterms << std::endl << std::endl;
	
	return 0;
}