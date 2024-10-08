#pragma once

#include <iostream>
#include <exception>
#include <list>

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

};