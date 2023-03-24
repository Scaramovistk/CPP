/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 13:15:19 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal ( void )
{
	std::cout << "AAnimal constructor called" << std::endl;
	this->type = "AAnimal";
}

AAnimal::AAnimal ( std::string intype ) : type(intype)
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal ( AAnimal const &other )
{
	std::cout << "AAnimal constructor called" << std::endl;
	*this = other;
}

AAnimal::~AAnimal ( void )
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const &other)
{
	std::cout <<"AAnimal Parameter constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

std::string AAnimal::getType( void ) const { return (this->type); }

void AAnimal::setType(std::string intype)
{
	this->type = intype;
}

std::ostream &operator<< (std::ostream &stream, AAnimal const&obj)
{
	stream << obj.getType();
	return (stream);
}
