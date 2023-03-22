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

DiamondTrap::DiamondTrap( void ) : ClapTrap("DiamondTrap_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_name = "DiamondTrap";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Paramether constructor called" << std::endl;
	this->_name = name;
}

DiamondTrap::DiamondTrap( DiamondTrap const &other )
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Desctrutor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const &other )
{
	std::cout << "DiamondTrap copy assigment called" << std::endl;
	this->_name = other.getName();
	this->_hitPoints = other.getHitPts();
	this->_energyPoints = other.getEngy();
	this->_attackDamage = other.getDamage();
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is: " << this->_name << std::endl;
	std::cout << "ClapTrap name is: " << this->getName() << std::endl;
}
