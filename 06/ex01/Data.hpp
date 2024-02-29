/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:10:39 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/25 16:13:51 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

class Data
{
	public:
		Data( void );
		Data( std::string name, int age );
		Data(Data const &other);
		~Data( void );
		Data& operator=(Data const &other);
		std::string	_name;
		int			_age;
};

std::ostream	&operator<<(std::ostream &stream, Data const &other);

#endif