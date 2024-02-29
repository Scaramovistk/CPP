/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:17:53 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/08 14:12:16 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <array>

int	main(void)
{
	try
	{
		std::vector<int>			vct;
		std::vector<int>::iterator	it;

		for (int row = 0; row < 10; row++)
			vct.push_back(row);
		it = easyfind(vct, 5);
		std::cout << "Value found: " << *it << std::endl;
		it = easyfind(vct, 11);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	try
	{
		std::array<int, 10>	arr = {18, 49, 0, 54, 29, 78, 26, 49, -78, 18};
		int*				it;

		it = easyfind(arr, 0);
		std::cout << "\nValue foundede: " << *it << std::endl;
		it = easyfind(arr, 18);
		std::cout << "Value foundede: " << *it << std::endl;
		it = easyfind(arr, -78);
		std::cout << "Value foundede: " << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: " << e.what() << '\n';
	}

	return (0);
}
