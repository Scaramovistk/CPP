/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:36:24 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/17 11:58:32 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_name = "DiamondTrap ";
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( std::string name ) : 
{
	std::cout << "DiamondTrap Paramether constructor called" << std::endl;
	
}

DiamondTrap::DiamondTrap( DiamondTrap const &ohter )
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Desctrutor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const &ohter )
{
	std::cout << "DiamondTrap copy assigment called" << std::endl;
	
}

void DiamondTrap::whoAmI()
{
	
}
