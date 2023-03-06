/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:22:19 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/02 16:37:20 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int			_rawBit;
		static int const _fractionalBits;

	public:
		explicit Fixed( int const n );
		explicit Fixed( float const f);
		Fixed(Fixed const &other);
		~Fixed( void );
		Fixed& operator=(Fixed const &other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

#endif