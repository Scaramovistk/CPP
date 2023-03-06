/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:10:39 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/02 13:39:01 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int			_rawBit;
		static int const _fractionalBits;

	public:
		Fixed( void );
		Fixed(Fixed const &other);
		~Fixed( void );
		Fixed& operator=(Fixed const &other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif