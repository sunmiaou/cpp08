/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:06:20 by tlize             #+#    #+#             */
/*   Updated: 2025/10/07 14:06:20 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
# include <algorithm>
# include <cmath>

class Span
{
public:
	Span(unsigned int n);
	~Span();
	Span(const Span& other);
	Span& operator=(const Span& other);

	void			addNumber(int number);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

private:
	std::vector<int>	_numbers;
	unsigned int		_max_size;

	Span();
};

#endif
