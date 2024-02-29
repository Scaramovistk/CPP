/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:41:36 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/29 13:39:35 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>
#include <string>
#include <exception>
#include <ctype.h>
#include <limits>

class ScalarConverter
{
	private:
		ScalarConverter( void );
		ScalarConverter(ScalarConverter const& other);
		~ScalarConverter( void );

	public:
		ScalarConverter& operator=(ScalarConverter const &other);
		static void	convert( std::string &_value );
		class	isNotALiteralExeption : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream stream, ScalarConverter const &other);

#endif