#include <Span.hpp>
#include <time.h>
#include <stdlib.h>

int main() {
	try
	{
	Span sp(5000);
	// sp.addNumber(502);
	// sp.addNumber(501);
	// sp.addNumber(20);
	// sp.addNumber(20);
	// sp.addNumber(2000);

	srand(time(NULL));
	for (std::size_t idx = 0; idx < sp.max_size(); ++idx)
	{
		std::cout << idx << std::endl;
		sp.addNumber(rand() % 250);
	}

	std::cout << "Shortest Span :" << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span :" << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
