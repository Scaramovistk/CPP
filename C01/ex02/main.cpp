/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:28:35 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/25 11:08:44 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main( void )
{
	std::string str;
	str = "HI THIS IS BRAIN";

	std::string *stringPTR;
	stringPTR = &str;

	std::string &stringREF = str;

	std::cout << "Adresses: " << std::endl;
	std::cout << "Str: " << &str << std::endl;
	std::cout << "Ptr: " << stringPTR << std::endl;
	std::cout << "Ref: " << &stringREF << std::endl;

	std::cout << "Value: " << std::endl;
	std::cout << "Str: " << str << std::endl;
	std::cout << "Ptr: " << *stringPTR << std::endl;
	std::cout << "Ref: " << stringREF << std::endl;
	return (0);
}
