#include <Span.hpp>
#include <time.h>
#include <stdlib.h>

int main() {
	try
	{
	Span sp(5000);

	sp.fill_it(50);

	std::cout << "Shortest Span :" << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span :" << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
