/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 17:04:40 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 14:46:17 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "MateriaSource Default contructor called" << std::endl;
	for (int row = 0; row <= 3; row++)
	{
		this->_inv[row] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	*this = other;
}

MateriaSource::~MateriaSource( void )
{
	for (int row = 0; row <= 3; row++)
	{
		if (this->_inv[row] != NULL)
		{
			delete this->_inv[row];
			this->_inv[row] = NULL;
		}
	}
	std::cout << "MateriaSource Destructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource const &other)
{
	std::cout << "MateriaSource Copy operator called" << std::endl;
	if (this != &other)
	{
		for (int row = 0; row <= 3; row++)
		{
			if (this->_inv[row] != NULL)
			{
				delete this->_inv[row];
				this->_inv[row] = NULL;
			}
			if (other.getAMateria(row))
				this->_inv[row] = other.getAMateria(row)->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *materia)
{
	std::cout << "**** Starting to learn a new materia ****" << std::endl;
	for (int row = 0; row <= 3; row++)
	{
		if (this->_inv[row] == NULL)
		{
			std::cout << "SUCCEDED!" << std::endl;
			this->_inv[row] = materia;
			return ;
		}
	}
	std::cout << "FAILED!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::cout << "**** Creating new mateira ****" << std::endl;
	for (int row = 0; row <= 3; row++)
	{
		if (this->_inv[row] != NULL && this->_inv[row]->getType() == type)
		{
			std::cout << "Succeded!" << std::endl;
			return (this->_inv[row]->clone());
		}
	}
	std::cout << "Failed!" << std::endl;
	return (NULL);
}

AMateria* MateriaSource::getAMateria(int index) const
{
	if (index >= 0 && index <= 3 && this->_inv[index] != NULL)
		return (this->_inv[index]);
	return (NULL);
}
