/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:22 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/20 13:43:30 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog (Dog const &other) : Animal("Dog")
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &other)
{
	std::cout << "Dog Assigment operator called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "OUFFFFF" << std::endl;
}
