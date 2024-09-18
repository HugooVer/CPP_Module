#include "Span.hpp"

Span::Span() {
	LimitedMultiset<int> mySpan;
}

Span::Span(int N) {
	LimitedMultiset<int> mySpan(N);
}

// Span::Span(const Span& other) {
	
// }

// Span::Span& operator=(const Span& other){

// }

void addNumber(int nb){
	mySpan.insert(nb);
}

// int shortestSpan() const{

// }
// int longestSpan() const{

// }