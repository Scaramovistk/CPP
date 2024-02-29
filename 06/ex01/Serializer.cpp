/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:08:26 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/29 13:50:20 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer( void )
{
	return;
}

Serializer::Serializer(Serializer const &other)
{
	*this = other;
}

Serializer::~Serializer()
{
	return;
}

Serializer& Serializer::operator=(Serializer const &other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t	serie;

	serie = reinterpret_cast<uintptr_t>(ptr);
	return (serie);
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data*	desSerie;

	desSerie = reinterpret_cast<Data *>(raw);
	return (desSerie);
}

std::ostream& operator<<(std::ostream &stream, Serializer const &other)
{
	(void) other;
	return (stream);
}
