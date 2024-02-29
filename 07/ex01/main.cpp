/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:17:21 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/06 12:20:56 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template<typename T>
void	print(T const &elem)
{
	std::cout << elem << std::endl;
}

int main (void)
{
	int	intArr[] = {10, 51, 81, 94, 94, 97};
	char	charArr[] = {'q', 'w', 'e', 'r', 't', 'y'};

	iter<int, int>(intArr, 6, print);
	std::cout << std::endl;
	iter<char, char>(charArr, 6, print);
	return (0);
}
