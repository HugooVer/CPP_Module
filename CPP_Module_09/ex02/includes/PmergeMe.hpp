# pragma once

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>
# include <cstring>

template <typename T> class PmergeMe{
	private:
		T _cont;

	public:
		PmergeMe(T arr);
		~PmergeMe();
		PmergeMe(PmergeMe const & copy);
		PmergeMe & operator=(PmergeMe const & copy);

		T getCont();

		std::vector<int> divide_merge(std::vector<int> arr);
		std::list<int> divide_merge(std::list<int> arr);
		T combine(T left, T right);
};

template <typename T> void printContainers(T number){
	for (typename T::iterator it = number.begin(); it != number.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	return;
}

template <typename T> PmergeMe<T>::PmergeMe(T arr) : _cont(0){
	T result = divide_merge(arr);
	return;
}

template <typename T> PmergeMe<T>::~PmergeMe(){
	return;
}

template <typename T> PmergeMe<T>::PmergeMe(PmergeMe<T> const & copy){
	*this = copy;
}

template <typename T> PmergeMe<T> &PmergeMe<T>::operator=(PmergeMe<T> const & copy){
	_cont = copy._cont;
	return (*this);
}

template <typename T> T PmergeMe<T>::getCont(){
	return (_cont);
}

template <typename T> std::vector<int> PmergeMe<T>::divide_merge(std::vector<int> arr){
	if (arr.size() <= 1)
		return (arr);

	std::vector<int>::iterator median = arr.begin() + (arr.size() / 2);
	std::vector<int> left(arr.begin(), median);
	std::vector<int> right(median, arr.end());

	left = divide_merge(left);
	right = divide_merge(right);

	return combine(left, right);
}

template <typename T> std::list<int> PmergeMe<T>::divide_merge(std::list<int> arr){
	if (arr.size() <= 1)
		return (arr);

	std::list<int>::iterator median = arr.begin();
	std::advance(median, arr.size() / 2);

	std::list<int> left(arr.begin(), median);
	std::list<int> right(median, arr.end());

	left = divide_merge(left);
	right = divide_merge(right);

	return combine(left, right);
}

template <typename T> T PmergeMe<T>::combine(T left, T right){
	_cont.clear();

	while (!left.empty() && !right.empty())
	{
		if (left.front() < right.front()){
			_cont.push_back(left.front());
			left.erase(left.begin());
		}
		else{
			_cont.push_back(right.front());
			right.erase(right.begin());
		}
	}

	while (!left.empty()){
		_cont.push_back(left.front());
		left.erase(left.begin());
	}

	while (!right.empty()){
		_cont.push_back(right.front());
		right.erase(right.begin());
	}

	return (_cont);
}