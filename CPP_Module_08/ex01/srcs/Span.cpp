#include "Span.hpp"

Span::Span() {
	LimitedMultiset<int> mySpan;
}

Span::Span(int N) {
	LimitedMultiset<int> mySpan(N);
}

// Span::Span(const Span& other) {
// 	LimitedMultiset<int> mySpanO(other);

// }

// Span::Span& operator=(const Span& other){
// 	if (this != &other)
// 		LimitedMultiset<int>::operator=(other);
// 	return *this;
// }

void addNumber(int nb){
	.insert(nb);
}

// int shortestSpan() const{

// }
// int longestSpan() const{

// }
// Befor changes