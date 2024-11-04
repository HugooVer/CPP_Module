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

		int shortestSpan() const;
		int longestSpan() const;

		std::size_t max_size() const {
			return mySpan.max_size();
		}

		void  fill_it(int max_int){
			srand(time(NULL));
			for (std::size_t idx = 0; idx < this->max_size(); ++idx)
				this->addNumber(rand() % max_int);
		}

};