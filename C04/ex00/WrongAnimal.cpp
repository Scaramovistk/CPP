/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/20 14:05:40 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal ( void )
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal ( std::string intype ) : type(intype)
{
	std::cout << "WrongAnimal Parameter constructor called" << std::endl;
}

WrongAnimal::WrongAnimal ( WrongAnimal const &other )
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal ( void )
{
	std::cout << "WrongAnimal Parameter constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &other)
{
	std::cout << "WrongAnimal Parameter constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void WrongAnimal::makeSound( void ) const
{
	std::cout << "RARHHHHHHHHHNNN" << std::endl;
}

std::string WrongAnimal::getType( void ) const { return (this->type); }

void WrongAnimal::setType(std::string intype)
{
	this->type = intype;
}

std::ostream &operator<< (std::ostream &stream, WrongAnimal const&obj)
{
	stream << obj.getType();
	return (stream);
}
