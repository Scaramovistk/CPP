/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:27:00 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 14:53:54 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void )
{
	std::cout << "Character Default counstructor called" << std::endl;
	this->_name = "Player";
	for (int row = 0; row <= BUFF; row++)
	{
		this->_buffer[row] = NULL;
		if (row <= 3)
			this->_inv[row] = NULL;
	}
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character Parameter constructor called" << std::endl;
	for (int row = 0; row < BUFF; row++)
	{
		this->_buffer[row] = NULL;
		if (row <= 3)
			this->_inv[row] = NULL;
	}
}

Character::Character(Character const &other)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = other;
}

Character::~Character( void )
{
	for (int row = 0; row < BUFF; row++)
	{
		if (this->_inv[row] != NULL && row <= 3)
			delete this->_inv[row];
		if (this->_buffer[row] != NULL)
			delete this->_buffer[row];
	}
	std::cout << "Character Destructor called" << std::endl;
}

Character& Character::operator=(Character const &other)
{
	std::cout << "Character Copy operator called" << std::endl;
	this->_name = other.getName();
	for (int row = 0; row <= 3; row++)
	{
		delete this->_inv[row];
		this->_inv[row] = NULL;
		if (other.getAMateria(row))
			this->_inv[row] = other.getAMateria(row)->clone();
	}
	return (*this);
}

std::string const & Character::getName() const { return(this->_name); }

AMateria* Character::getAMateria(int index) const { return(this->_inv[index]); }

void Character::equip(AMateria* m)
{
	std::cout << " @@@@ Equiping new materia at " << this->_name << std::endl;
	for (int row = 0; row <= 3; row++)
	{
		if (this->_inv[row] == NULL)
		{
			std::cout << "Succeded" << std::endl;
			this->_inv[row] = m;
			return ;
		}
	}
	std::cout << "Failled" << std::endl;
}

void Character::unequip(int idx)
{
	if (this->_inv[idx])
	{
		for (int row = 0; row <= BUFF; row++)
		{
			if (!this->_buffer[row])
			{
				this->_buffer[row] = this->_inv[idx];
				this->_inv[idx] = NULL;
				return ;
			}
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	std::cout << this->_name << " will use his power" << std::endl;
	if ((idx >= 0 && idx <= 3) && this->_inv[idx] != NULL)
		this->_inv[idx]->use(target);
	else
		std::cout << this->_name << " failled" << std::endl;
}
