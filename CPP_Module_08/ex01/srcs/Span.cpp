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

// int Span::shortestSpan() const{

// }
int Span::longestSpan() const{
	if (mySpan.size() < 2)
		throw std::length_error("Span have less than 2 int");
	return (*mySpan.rbegin() - *mySpan.begin());
}