#include <Span.hpp>
#include <time.h>
#include <stdlib.h>

int main() {
	try
	{
	Span sp(10);

	sp.fill_it(20);

	std::cout << "Shortest Span :" << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span :" << sp.longestSpan() << std::endl;
	sp.show_it();
	
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
