/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:41:48 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/22 12:51:25 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	ClapTrap	base("Thomas");
	DiamondTrap	dion("Dion");
	DiamondTrap	c_dion(dion);

	std::cout << std::endl << base << std::endl << dion << std::endl; 

	std::cout << "******TEST******" << std::endl;
	c_dion.whoAmI();
	c_dion.beRepaired(1);
	c_dion.attack("Cat");
	c_dion.guardGate();
	c_dion.highFivesGuys(base);

	return (0);
}
