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

// int shortestSpan() const{

// }
// int longestSpan() const{

// }