/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:26:26 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 11:41:14 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
	std::cout << "Ice Default construct called" << std::endl;
}

Ice::Ice(std::string type) : AMateria(type)
{
	std::cout << "Ice Parametric constructor called" << std::endl;
}

Ice::Ice(Ice const &other) : AMateria("ice")
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = other;
}

Ice::~Ice( void )
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice& Ice::operator=(Ice const &other)
{
	std::cout << "Ice Operator copy called" << std::endl;
	if (this != &other)
		this->_type = other.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	std::cout << "***** Cloning your Ice Materia *****" << std::endl;
	return(new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
