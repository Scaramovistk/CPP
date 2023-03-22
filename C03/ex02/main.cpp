/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:41:48 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/22 12:49:56 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	std::string p1 = "Cat";
	std::string p2 = "Mouse";
	FragTrap cat(p1);
	ClapTrap mouse(p2);
	ScavTrap def;

	cat.setDamage(8);
	mouse.setDamage(8);

	std::cout << std::endl << cat << std::endl << mouse << std::endl << def << std::endl; 

	cat.attack(p2);
	mouse.takeDamage(cat.getDamage());

	mouse.attack(p1);
	cat.takeDamage(mouse.getDamage());

	cat.beRepaired(5);

	mouse.attack(p1);
	cat.takeDamage(mouse.getDamage());

	std::cout << "-----Mysterios sound----" << std::endl << "A stranger animy appears" << std::endl;

	cat.highFivesGuys(def);

	std::cout << "***** The peace is back again ******" << std::endl;

	return (0);
}