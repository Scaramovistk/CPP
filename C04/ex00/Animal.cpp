/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 13:15:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal ( void )
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal ( std::string intype ) : type(intype)
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal ( Animal const &other )
{
	std::cout << "Animal constructor called" << std::endl;
	*this = other;
}

Animal::~Animal ( void )
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &other)
{
	std::cout <<"Animal Parameter constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void Animal::makeSound( void ) const
{
	std::cout << "RARHHHHHHHHHNNN" << std::endl;
}

std::string Animal::getType( void ) const { return (this->type); }

void Animal::setType(std::string intype)
{
	this->type = intype;
}

std::ostream &operator<< (std::ostream &stream, Animal const&obj)
{
	stream << obj.getType();
	return (stream);
}
