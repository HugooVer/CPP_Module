#include <Span.hpp>
#include <time.h>
#include <stdlib.h>

int main() {
	try
	{
	Span sp(10);

	sp.fill_it(5);

	std::cout << "Shortest Span :" << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span :" << sp.longestSpan() << std::endl;

	std::multiset<int>::iterator it;
	std::cout << "\nElements of the Multiset : ";
	for (it = sp.begin(); it != sp.end(); it++)
	    std::cout << *it << " ";
	std::cout << std::endl;

	}
	catch (std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return 0;
}
