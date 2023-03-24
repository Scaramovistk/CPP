/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:15 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 13:13:03 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat ( void ) : Animal("Cat")
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat (Cat const &other) : Animal("Cat")
{
	std::cout << "Cat Copy constructor called" << std::endl;
	*this = other;
}

Cat::~Cat ( void )
{
	std::cout << "Cat Desctructor called" << std::endl;
}

Cat& Cat::operator=( Cat const &other)
{
	std::cout << "Cat Operator constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void Cat::makeSound( void ) const
{
	std::cout << "MEOWWWW" << std::endl;
}
