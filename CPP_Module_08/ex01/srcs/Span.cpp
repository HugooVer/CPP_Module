#include "Span.hpp"

Span::Span() {
	mySpan = new LimitedMultiset<int>();
}

Span::Span(int N) {
	mySpan = new LimitedMultiset<int>(N);
}

Span::Span(const Span& other) {
	mySpan = new LimitedMultiset<int> (other);

}

// Span::Span& operator=(const Span& other){
// 	if (this != &other)
// 		LimitedMultiset<int>::operator=(other);
// 	return *this;
// }

void addNumber(int nb){
	mySpan.insert(nb);
}

// int shortestSpan() const{

// }
// int longestSpan() const{

// }
// Befor changes