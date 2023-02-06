/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:28:05 by gscarama          #+#    #+#             */
/*   Updated: 2023/02/04 15:16:24 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
	size_t	row;
	size_t	read;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		row = 1;
		while (argv[row])
		{
			read = 0;
			while (argv[row][read])
			{
				std::cout << (char) std::toupper(argv[row][read]);
				read++;
			}
			row++;
		}
		std::cout << std::endl;
	}
	return (0);
}