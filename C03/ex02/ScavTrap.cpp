/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:25:25 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/16 14:08:53 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ( void ) : ClapTrap()
{
	std::cout << "ScavTrap " << "Default constructor called" << std::endl;
	this->_name = "ScavTrap";
	this->_class = "ScavTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap::ScavTrap ( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap " << "Parameter constructor called" << std::endl;
	this->_class = "ScavTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "ScavTrap " << "Copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap ( void )
{
	std::cout << "ScavTrap " << "Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << "ScavTrap " << "Copy assigment operator called" << std::endl;
	this->_name = other.getName();
	this->_hitPoints = other.getHitPts();
	this->_energyPoints = other.getEngy();
	this->_attackDamage = other.getDamage();
	this->_class = other.getClass();
	return (*this);
}

void	ScavTrap::attack (const std::string &target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->getClass() << this->_name << " Cannot attack because he's dead!" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << this->getClass() << this->_name
		<< " Cannot attack because hes without energy!" << std::endl;
	}
	else
	{
		std::cout << this->getClass() << this->_name << " shoot with laser gun " << target
		<< " causing " << this->_attackDamage << " POINTS OF DAMAGE!" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->getClass() << this->_name << "Cannot enter in Guard Gate mode because he's dead!" << std::endl;
		return ;
	}
	std::cout << this->getClass() << this->_name << " is in Guard Gate mode!" << std::endl;
	this->_energyPoints--;
}
