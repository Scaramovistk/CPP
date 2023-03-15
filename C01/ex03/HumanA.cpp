/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 11:30:20 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/13 13:07:11 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
			: _name(name), _weapon(weapon)
{
	std::cout << this->_name << " takes the weapon " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " died and droped " << this->_weapon.getType() << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
