/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:36:24 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/22 12:46:44 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("DiamondTrap_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	this->_name = "DiamondTrap";
	this->_class = "DiamondTrap ";
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	this->_class = "DiamondTrap ";
	std::cout << "DiamondTrap Paramether constructor called" << std::endl;
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

std::string DiamondTrap::getName(void) const {return (this->_name);}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const &other )
{
	std::cout << "DiamondTrap copy assigment called" << std::endl;
	this->_name = other.getName();
	ClapTrap::_name = other.ClapTrap::getName();
	this->_hitPoints = other.getHitPts();
	this->_energyPoints = other.getEngy();
	this->_attackDamage = other.getDamage();
	this->_class = other.getClass();
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is: " << this->_name << std::endl;
	std::cout << "ClapTrap name is: " << ClapTrap::getName() << std::endl;
}
