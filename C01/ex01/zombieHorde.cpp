/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:02:07 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/23 16:25:01 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*wraith;

	wraith = new Zombie[N];
	for(int row = 0; row < N; row++)
	{
		wraith[row].putname(name);
	}
	return (wraith);
}
