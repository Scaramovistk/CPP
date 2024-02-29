/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:09:11 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/06 12:12:07 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <string>

int	main(void)
{
	try
	{
		Array<char *>	txt(5);

		char str[] = "Lorem ipsum dolor sit amet\n";
		char str2[] = "consectetur adipiscing elit\n";
		for (unsigned int i = 0; i < 5; i++)
			txt[i] = str;
		Array<char *>	txt2 = txt;
		txt[3] = str2;
		std::cout << txt2 << std::endl;
		std::cout << txt2[4] << std::endl;
		std::cout << txt2[5] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
