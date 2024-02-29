/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:30:07 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/08 14:16:01 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int	main( void )
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Subject test: " << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << "\n";
	}
	

	try
	{
		Span sp = Span(14);
		sp.addNumber(6);
		sp.addNumber(300);
		sp.addNumber(-10);
		sp.addNumber(900);
		sp.addNumber(950);
		std::cout << "\nAdding a rang of numbers: " << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		int					arr[] = {10, 50, 46, 79, 39, 19, 2890, -28, 0};
		std::vector<int>	vct (arr, arr+9);

		sp.addRange(vct.begin(), vct.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(8);

		int					arr[] = {10, 50, 46, 79, 39, 19, 2890, -28, 0};
		std::vector<int>	vct (arr, arr+9);

		sp.addRange(vct.begin(), vct.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "\nError: " << e.what() << '\n';
	}

	try
	{
		Span sp (20000);

		for(int row = 0; row < 20000; row++)
			sp.addNumber(row);
		std::cout << "\nAdding 20000 numbers: " << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
