/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:02:22 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/23 15:51:13 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (void)
{
	Zombie	lary("Lary");
	lary.announce();

	Zombie	*thomas;
	thomas = newZombie("Thomas");
	thomas->announce();

	randomChump("Gary");
	delete thomas;
	return (0);
}
