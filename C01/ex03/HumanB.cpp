/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:30:15 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/25 13:07:18 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

int	armed = 0;

HumanB::HumanB(std::string name) : _name{name}
{
	std::cout << this->_name << " wake up" << std::endl;
}

HumanB::~HumanB(void)
{
	if (armed == 0)
	{
		std::cout << this->_name << " died and left nothing behind" << std::endl;
		return ;
	}
	std::cout << this->_name << " died and droped " << this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	armed = 1;
}

void	HumanB::attack(void)
{
	if (armed == 0)
	{
		std::cout << this->_name << " attacks with 2 jabs " << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
	return ;
}
