/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:13:16 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/29 13:51:27 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (void)
{
	Data		people("Vladir", 42);
	Data		*ptr;
	uintptr_t	raw;

	raw = Serializer::serialize(&people);
	std::cout << "\nSerialized Data: " << raw << std::endl;
	ptr = Serializer::deserialize(raw);
	std::cout << "\nDeserializaded Data: " << *ptr << std::endl;
	return (0);
}
