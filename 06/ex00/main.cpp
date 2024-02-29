/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:41:31 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/29 13:45:25 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main (int argc, char **argv)
{
	(void) argc;
	if (argc != 2)
	{
		std::cout << "Wrong amount of arguments" << std::endl;
		return (0);
	}
	try
	{
		std::string	value = argv[1];
		ScalarConverter::convert(value);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}