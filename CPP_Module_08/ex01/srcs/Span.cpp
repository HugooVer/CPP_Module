#include "Span.hpp"

Span::Span() : mySpan(0) {
	std::cout << "Span Default Constructor Called" << std::endl;
}

Span::Span(int N) : mySpan(N) {
	std::cout << "Span Constructor with Size Called: Max size = " << N << std::endl;
}

Span::Span(const Span& other) : mySpan(other.mySpan) {
	std::cout << "Span Copy Constructor Called" << std::endl;
}

Span::~Span(){}

void Span::addNumber(int nb){
	mySpan.insert(nb);
}

int Span::shortestSpan() const {
	if (mySpan.size() < 2)
		throw std::length_error("Span have less than 2 int");

	std::multiset<int>::iterator prev = --mySpan.end();
	std::cout << *prev <<std::endl;
	long long min_span = *prev;
	for (std::multiset<int>::iterator it = mySpan.begin(); it != mySpan.end(); ++it) {
		unsigned int span = *it - *prev;
		if (span < min_span)
			min_span = span;
		if (min_span == 0)
			return 0;
		prev = it;
	}
	return min_span;
}

int Span::longestSpan() const{
	if (mySpan.size() < 2)
		throw std::length_error("Span have less than 2 int");
	return (*mySpan.rbegin() - *mySpan.begin());
}