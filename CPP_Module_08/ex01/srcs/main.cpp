#include <iostream>
#include <Span.hpp>
int main() {
	Span sp(5);
	sp.addNumber(20);
	sp.addNumber(10);
	sp.addNumber(50);
	sp.addNumber(100);
	sp.addNumber(20);

	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
