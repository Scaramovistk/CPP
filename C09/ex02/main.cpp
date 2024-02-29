/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:30:30 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/18 15:07:02 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	try
	{
		if (ac < 2)
			throw std::invalid_argument("Error: not the right number of arguments.");
		PmergeMe test(av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
