/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:32:27 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 13:29:56 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("unknow")
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	std::cout << "AMateria Parameter constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &other)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = other;
}

AMateria::~AMateria( void )
{
	std::cout << "AMateria Destructor called" << std::endl;
}

AMateria& AMateria::operator=(AMateria const &other)
{
	std::cout << "AMateria Operator copy constructor called" << std::endl;
	this->_type = other.getType();
	return (*this);
}

std::string const & AMateria::getType() const { return (this->_type); }

void AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	else
		std::cout << "* attacks with a unknow materia " << target.getName() << " *" << std::endl;
}
