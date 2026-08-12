/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlize <tlize@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:06:20 by tlize             #+#    #+#             */
/*   Updated: 2025/10/07 14:06:20 by tlize            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
