#include <iostream>
#include <Span.hpp>
int main() {
	Span c2(3);
	c2.addNumber(10);
	c2.addNumber(20);
	Span c3(c2);
	Span c4 = c2;

	c4.addNumber(30);


	return 0;
}
