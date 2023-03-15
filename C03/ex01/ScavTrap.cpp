/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:25:25 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/15 11:39:05 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void ) : ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name)
{
	std::cout << "Parameter constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << "Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->_name = other.getName();
	this->_hitPoints = other.getHitPts();
	this->_energyPoints = other.getEngy();
	this->_attackDamage = other.getDamage();
	return (*this);
}

void	ScavTrap::attack (const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap" << this->_name << "Cannot attack becouse he's dead!" << std::endl;
		return ;
	}
	else if ()
	{

	}
	else
	{
		
	}
}

void ScavTrap::guardGate()
{
	
}
