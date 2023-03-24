/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:15 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/22 14:06:11 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ( void ) : AAnimal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat (Cat const &other) : AAnimal("Cat")
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
	this->_brain = new Brain(*other.getBrain());
}

Cat::~Cat ( void )
{
	std::cout << "Cat Desctructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(Cat const &other)
{
	std::cout << "Cat Operator constructor called" << std::endl;
	this->type = other.getType();
	*this->_brain = *other.getBrain();
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "MEOWWWW" << std::endl;
}

Brain* Cat::getBrain( void ) const { return (this->_brain);}
