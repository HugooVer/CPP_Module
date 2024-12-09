#pragma once

#include <iostream>
#include <exception>
#include <list>
#include <time.h>
#include <stdlib.h>

#include "LimitedMultiset.hpp"

class Span
{
	private:
		LimitedMultiset<int> mySpan;
		int N;
	public:
		Span();
		Span(int N);
		Span(const Span& other);
		~Span();

		Span& operator=(const Span& other);

		void addNumber(int const nb);
		void fill_it(int max_int);
		void show_it();

		int shortestSpan() const;
		int longestSpan() const;

		std::size_t max_size() const;
		std::multiset<int>::iterator begin() const;
		std::multiset<int>::iterator end() const;
		std::multiset<int>::size_type count(std::multiset<int>::size_type i) const;
		std::multiset<int>::size_type size() const;
};