/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:01:08 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/23 16:26:53 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie	*wraith;
	int		N;

	N = 4;
	wraith = zombieHorde( N, "Lary");
	for (int row = 0; row < N; row++)
	{
		std::cout << row << ": ";
		wraith->announce();
		std::cout << std::endl;
	}
	delete []wraith;
	return (0);
}
