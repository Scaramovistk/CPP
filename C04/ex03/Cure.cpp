/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:26:02 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 13:32:43 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
	std::cout << "Default constructor called" << std::endl;
}

Cure::Cure(std::string type) : AMateria(type)
{
	std::cout << "Cure paramter constructor called" << std::endl;
}

Cure::Cure(Cure const &other) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	*this = other;
}

Cure::~Cure( void )
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(Cure const &other)
{
	std::cout << "Cure operator copy called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	std::cout << "***** Cloning your Cure Materia *****" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
