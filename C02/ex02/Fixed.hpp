/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:22:19 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/07 11:40:02 by gscarama         ###   ########.fr       */
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
		bool operator>(Fixed const &other) const;
		bool operator<(Fixed const &other) const;
		bool operator>=(Fixed const &other) const;
		bool operator<=(Fixed const &other) const;
		bool operator==(Fixed const &other) const;
		bool operator!=(Fixed const &other) const;
		Fixed operator+(Fixed const &other) const;
		Fixed operator-(Fixed const &other) const;
		Fixed operator*(Fixed const &other) const;
		Fixed operator/(Fixed const &other) const;
		Fixed &operator++( void );
		Fixed operator++( int );
		Fixed &operator--( void );
		Fixed operator--( int );
		static Fixed &min(Fixed &obj1, Fixed &obj2);
		static Fixed &max(Fixed &obj1, Fixed &obj2);
		static Fixed const &Fixed::min(Fixed const &obj1, Fixed const &obj2);
		static Fixed const &Fixed::max(Fixed const &obj1, Fixed const &obj2);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &obj); //Overload the operator << to have a code cleaner

#endif