#include "Span.hpp"

Span::Span() : mySpan(0) {
	std::cout << "Span Default Constructor Called" << std::endl;
}

Span::Span(int N) : mySpan(N) {
	// std::cout << "Span Constructor with Size Called: Max size = " << N << std::endl;
}

Span::Span(const Span& other) : mySpan(other.mySpan) {
	// std::cout << "Span Copy Constructor Called" << std::endl;
}

Span::~Span(){}

void Span::addNumber(int nb){
	mySpan.insert(nb);
}

int Span::shortestSpan() const {
	if (mySpan.size() < 2)
		throw std::length_error("Span have less than 2 int");

	std::multiset<int>::iterator prev = --mySpan.end();
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

std::size_t Span::max_size() const {
	return mySpan.max_size();
}
std::multiset<int>::iterator Span::begin() const{
	return mySpan.begin();
}
std::multiset<int>::iterator Span::end() const{
	return mySpan.end();
}

void Span::fill_it(int max_int){
	srand(time(NULL));
	for (std::size_t idx = 0; idx < this->max_size(); ++idx)
		this->addNumber(rand() % (max_int + 1));
}
void Span::show_it(){
	std::multiset<int>::iterator it;
	std::cout << "	Elements of the Multiset : ";
	for (it = this->begin(); it != this->end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}