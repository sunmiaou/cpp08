#include "Span.hpp"
#include <iostream>
#include <climits>

Span::Span(unsigned int n) : _max_size(n)
{
}

Span::~Span()
{
}

Span::Span(const Span& other) : _numbers(other._numbers), _max_size(other._max_size)
{
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_numbers = other._numbers;
		this->_max_size = other._max_size;
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	if (this->_numbers.size() >= this->_max_size)
		throw std::exception();
	this->_numbers.push_back(number);
}

unsigned int	Span::shortestSpan()
{
	if (this->_numbers.size() < 2)
		throw std::exception();

	std::sort(this->_numbers.begin(), this->_numbers.end());

	unsigned int	shortest = UINT_MAX;

	for (size_t i = 0; i < this->_numbers.size() - 1; i++)
	{
		unsigned int	span = this->_numbers[i + 1] - this->_numbers[i];
		if (span < shortest)
			shortest = span;
	}

	return (shortest);
}

unsigned int	Span::longestSpan()
{
	if (this->_numbers.size() < 2)
		throw std::exception();

	std::sort(this->_numbers.begin(), this->_numbers.end());

	return (this->_numbers.back() - this->_numbers.front());
}
