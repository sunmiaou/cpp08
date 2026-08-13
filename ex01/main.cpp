#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);

	sp.addNumber(0);
	sp.addNumber(3);
	sp.addNumber(7);
	sp.addNumber(9);
	sp.addNumber(1);

	std::cout << sp.shortestSpan() << "\n";
	std::cout << sp.longestSpan() << "\n";

	return (0);
}
