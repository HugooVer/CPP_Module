#include <Span.hpp>
#include <time.h>
#include <stdlib.h>

int main() {
	try {
	std::cout << "Manual test :" << std::endl;
	Span sp(5);
	sp.addNumber(20);
	sp.addNumber(10);
	sp.addNumber(90);
	sp.addNumber(100);
	sp.addNumber(30);
	std::cout << "	Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "	Longest Span : " << sp.longestSpan() << std::endl;
	sp.show_it();
	}
	catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
	std::cout << std::endl << "Sall auto test :" << std::endl;
	Span sp(20);
	sp.fill_it(10000);
	std::cout << "	Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "	Longest Span : " << sp.longestSpan() << std::endl;
	sp.show_it();
	}
	catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
	std::cout << std::endl << "Big auto test :" << std::endl;
	Span sp(500000);
	sp.fill_it(500000 * 100);
	std::cout << "	Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "	Longest Span : " << sp.longestSpan() << std::endl;
	// sp.show_it();
	}
	catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
	std::cout << std::endl << "Not working test 1 :" << std::endl;
	Span sp(2);
	sp.addNumber(20);
	sp.addNumber(10);
	sp.addNumber(90);

	std::cout << "	Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "	Longest Span : " << sp.longestSpan() << std::endl;
	sp.show_it();
	}
	catch (std::exception& e) {
		std::cerr << "	Exception caught: " << e.what() << std::endl;
	}

	try {
	std::cout << std::endl << "Not working test 2 :" << std::endl;
	Span sp(2);
	sp.addNumber(20);

	std::cout << "	Shortest Span : " << sp.shortestSpan() << std::endl;
	std::cout << "	Longest Span : " << sp.longestSpan() << std::endl;
	sp.show_it();
	}
	catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	try {
	std::cout << std::endl << "Not working test 3 :" << std::endl;
	Span sp(2);
	sp.addNumber(20);

	std::cout << "	Longest Span : " << sp.longestSpan() << std::endl;
	std::cout << "	Shortest Span : " << sp.shortestSpan() << std::endl;
	sp.show_it();
	}
	catch (std::exception& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	
	return 0;
}
