/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:22 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 12:57:27 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog ( void ) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog (Dog const &other) : Animal("Dog")
{
	std::cout << "Dog Copy constructor called" << std::endl;
	*this = other;
	this->_brain = new Brain(*other.getBrain());
}

Dog::~Dog( void )
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
}

Dog& Dog::operator=(Dog const &other)
{
	std::cout << "Dog Assigment operator called" << std::endl;
	this->type = other.getType();
	*this->_brain = *other.getBrain();
	return (*this);
}

void Dog::makeSound( void ) const
{
	std::cout << "OUFFFFF" << std::endl;
}

Brain* Dog::getBrain( void ) const { return (this->_brain);}
