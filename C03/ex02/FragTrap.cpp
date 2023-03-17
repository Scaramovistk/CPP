/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:37:06 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/16 14:13:22 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ( void ) : ClapTrap()
{
	this->_name = "FragTrap";
	this->_class = "FragTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << "Default constructor called" << std::endl;
}

FragTrap::FragTrap ( std::string name ) : ClapTrap(name)
{
	this->_class = "FragTrap ";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << "Parameter constructor called" << std::endl;
}

FragTrap::FragTrap ( FragTrap const &other )
{
	std::cout << "FragTrap " << "Copy constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap ( void )
{
	std::cout << "FragTrap " << "Destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{
	std::cout << "FragTrap " << "Copy assigment operator called" << std::endl;
	this->_name = other.getName();
	this->_hitPoints = other.getHitPts();
	this->_energyPoints = other.getEngy();
	this->_attackDamage = other.getDamage();
	this->_class = other.getClass();
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getClass() << this->_name << " is waiting someone to give a highfive" << std::endl;
}

void	FragTrap::highFivesGuys(ClapTrap &other)
{
	std::cout << this->getClass() << this->_name << " wants to give a highfive" << std::endl;
	std::cout << other.getClass() << other.getName() << " gives the highfive" << std::endl;
	std::cout << this->_name << " and " << other.getName() << " are so happy!" << std::endl;
}
