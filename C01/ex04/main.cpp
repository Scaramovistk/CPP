/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 13:08:47 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/13 13:09:47 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceStr.hpp"

int	main(int argc, char **argv)
{
	int			error;

	if (argc != 4)
	{
		std::cout << "Wrong amount of input, please enter: FIle Name, First string, Second String" << std::endl;
		return (-1);
	}

	ReplaceStr	repstr(argv[1], argv[2], argv[3]);

	if ((error = repstr.openFile()))
	{
		if (error == -1)
			std::cout << "Error in input file" << std::endl;
		else if (error == -2)
			std::cout << "Error reading file string" << std::endl;
		return (-1);
	}
	return (0);
}
