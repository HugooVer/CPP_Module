#pragma once

#include <iostream>
#include <set>

template <typename T> class LimitedMultiset : public std::multiset<T> {
	private:
		std::size_t _max_size;

	public:
		LimitedMultiset() : _max_size(0) {}

		LimitedMultiset(std::size_t maxSize) : _max_size(maxSize) {}

		LimitedMultiset(const LimitedMultiset& other) : std::multiset<T>(other), _max_size(other._max_size) {}

		LimitedMultiset& operator=(const LimitedMultiset& other) {
			if (this != &other) {
				std::multiset<T>::operator=(other);
				_max_size = other._max_size;
			}
			return *this;
		}

		std::pair<typename std::multiset<T>::iterator, bool> insert(const T& value) {
			if (this->size() < _max_size) {
				typename std::multiset<T>::iterator it = std::multiset<T>::insert(value);
				return std::make_pair(it, true);
			} else {
				std::cout << "Error: Insertion failed: maximum size reached" << std::endl;
				return std::make_pair(this->end(), false);
			}
		}

		std::size_t max_size() const {
			return _max_size;
		}
};
