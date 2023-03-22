/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:41:48 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/16 14:12:51 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main (void)
{
	ClapTrap	one("Toto");
	DiamondTrap	four("D");
	std::string	target;

	target = "Jo";
	std::cout << "\n+++++ STANDARD TESTS +++++\n";
	four.guardGate();
	four.highFivesGuys();
	four.highFivesGuys(one);
	four.attack("Cat");
	four.attack("Cat");
	four.beRepaired(1);
	four.whoAmI();

	std::cout << "\n+++++ SOME EXTRA TESTS +++++\n";
	DiamondTrap	five(four);
	DiamondTrap	six;

	five = six;
	std::cout << std::endl;
	return (0);
}
