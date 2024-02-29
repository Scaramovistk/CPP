/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:10:47 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/25 16:46:33 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data( void )
{
	this->_age = -1;
	this->_name = "MrNobody";
}

Data::Data( std::string name, int age ) : _name(name), _age(age)
{
	
}

Data::Data(Data const &other)
{
	*this = other;
}

Data::~Data( void )
{
	
}

Data& Data::operator=(Data const &other)
{
	if (this != &other)
	{
		this->_age = other._age;
		this->_name = other._name;
	}
	return (*this);
}

std::ostream	&operator<<(std::ostream &stream, Data const &other)
{
	std::cout << "Name: " << other._name << " Age: " << other._age << std::endl;
	return (stream);
}
