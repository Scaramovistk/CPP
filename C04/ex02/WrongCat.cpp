/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:49:55 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/20 14:02:05 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat ( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCats Default constructor called" << std::endl;
}

WrongCat::WrongCat (WrongCat const &other) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	*this = other;
}

WrongCat::~WrongCat ( void )
{
	std::cout << "WrongCat Desctructor called" << std::endl;
}

WrongCat& WrongCat::operator=( WrongCat const &other)
{
	std::cout << "WrongCat Operator constructor called" << std::endl;
	this->type = other.getType();
	return (*this);
}

void WrongCat::makeSound( void ) const
{
	std::cout << "MEOWWWW" << std::endl;
}
