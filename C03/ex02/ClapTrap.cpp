/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:41:45 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/10 14:42:43 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	: _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string const name )
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Parametric constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap ( ClapTrap const &other )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->_name = other.getName();
	this->_hitPoints = other.getHitPts();
	this->_energyPoints = other.getEngy();
	this->_attackDamage = other.getDamage();
	return (*this);
}

std::string	ClapTrap::getName(void) const {return (this->_name);}

unsigned int ClapTrap::getHitPts(void) const {return (this->_hitPoints);}

unsigned int ClapTrap::getEngy(void) const {return (this->_energyPoints);}

unsigned int ClapTrap::getDamage(void) const {return (this->_attackDamage);}

void	ClapTrap::setName(std::string const name){this->_name = name;}

void	ClapTrap::setHP(unsigned int const HP){this->_hitPoints = HP;}

void	ClapTrap::setEnergy(unsigned int const energy){this->_energyPoints = energy;}

void	ClapTrap::setDamage(unsigned int const damage){this->_attackDamage = damage;}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack because he's dead!" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot attack because he has no energy!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClaTrap " << this->_name << " attacks " << target 
		<< " causing " << this->_attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClaTrap " << this->_name << " receive "
		<< amount << " points of damage!" << std::endl;
	}
	if (this->_hitPoints - amount <= 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	if (this->_hitPoints == 0)
		std::cout << "ClapTrap " << this->_name << " died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " be repaired he's dead!" << std::endl;
		return ;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " cannot be repared because he has no energy!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClaTrap " << this->_name << " repair himself geting " << amount 
		<< " points of HP" << std::endl;
		if (this->_hitPoints + amount >= 10)
			this->_hitPoints = 10;
		else
			this->_hitPoints += amount;
		_energyPoints--;
	}
}

std::ostream	&operator<<(std::ostream &stream, ClapTrap const &obj)
{
	stream << "Name: " << obj.getName() << std::endl;
	stream << "HP: " << obj.getHitPts() << std::endl;
	stream << "Energy: " << obj.getEngy() << std::endl;
	stream << "Damage: " << obj.getDamage() << std::endl;
	return (stream);
}
