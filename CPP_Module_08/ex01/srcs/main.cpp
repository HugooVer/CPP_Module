#include <iostream>
#include <Span.hpp>
int main() {
	try
	{
	Span sp(5);
	sp.addNumber(502);
	sp.addNumber(501);
	// sp.addNumber(20);
	// sp.addNumber(20);
	// sp.addNumber(2000);

	std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
