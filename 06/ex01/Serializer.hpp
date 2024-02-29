/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:08:24 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/29 13:51:19 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <cstdint>
#include <ostream>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer( void );
		Serializer(Serializer const &other);
		~Serializer();
	public:
		Serializer& operator=(Serializer const &other);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

std::ostream&	operator<<(std::ostream &stream, Serializer const &other);

#endif