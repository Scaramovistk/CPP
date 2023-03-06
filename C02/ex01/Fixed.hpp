/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:22:19 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/06 13:31:00 by gscarama         ###   ########.fr       */
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
		Fixed::Fixed ( void );
		explicit Fixed( int const n ); //Explicit dont let c++ to use implicit convertion
		explicit Fixed( float const f);
		Fixed(Fixed const &other);
		~Fixed( void );
		Fixed& operator=(Fixed const &other);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &obj); //Overload the operator << to have a code cleaner

#endif