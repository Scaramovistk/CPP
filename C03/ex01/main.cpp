/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:41:48 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/10 14:42:24 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	std::string p1 = "Cat";
	std::string p2 = "Mouse";
	ClapTrap cat(p1);
	ClapTrap mouse(p2);
	ClapTrap def;

	cat.setDamage(8);
	mouse.setDamage(8);
	def.setDamage(18);

	std::cout << std::endl << cat << std::endl << mouse << std::endl; 

	cat.attack(p2);
	mouse.takeDamage(cat.getDamage());

	mouse.attack(p1);
	cat.takeDamage(mouse.getDamage());

	cat.beRepaired(5);

	mouse.attack(p1);
	cat.takeDamage(mouse.getDamage());

	std::cout << "-----Mysterios sound----" << std::endl << "A stranger animy appears" << std::endl;

	def.attack(p2);
	mouse.takeDamage(def.getDamage());

	for (int row = 0; row < 9; row++)
		def.beRepaired(1);

	def.attack("ClapTrap");
	def.takeDamage(def.getDamage());
	
	std::cout << "***** The peace is back again ******" << std::endl;

	return (0);
}