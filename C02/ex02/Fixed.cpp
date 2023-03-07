/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:22:16 by gabriel           #+#    #+#             */
/*   Updated: 2023/03/07 11:39:30 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::_fractionalBits = 8;

Fixed::Fixed ( void ) : _rawBit{0}
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_rawBit = n << _fractionalBits;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_rawBit = static_cast<int>(roundf(f * (1 << _fractionalBits)));
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(other.getRawBits());
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_rawBit);
}

void Fixed::setRawBits(int const raw)
{
	this->_rawBit = raw;
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->_rawBit) / (1 << _fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->_rawBit >> _fractionalBits);
}

bool	Fixed::operator>(Fixed const &other) const
{
	return (this->_rawBit > other.getRawBits());
}

bool	Fixed::operator<(Fixed const &other) const
{
	return (this->_rawBit < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const &other) const
{
	return (this->_rawBit >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const &other) const
{
	return (this->_rawBit <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const &other) const
{
	return (this->_rawBit == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const &other) const
{
	return (this->_rawBit != other.getRawBits());
}

Fixed Fixed::operator+(Fixed const &other) const
{
	Fixed	temp(this->toFloat() + other.toFloat());
	return (temp);
}

Fixed Fixed::operator-(Fixed const &other) const
{
	Fixed	temp(this->toFloat() - other.toFloat());
	return (temp);
}
Fixed Fixed::operator*(Fixed const &other) const
{
	Fixed	temp(this->toFloat() * other.toFloat());
	return (temp);
}
Fixed Fixed::operator/(Fixed const &other) const
{
	Fixed	temp(this->toFloat() / other.toFloat());
	return (temp);
}

Fixed &Fixed::operator++( void )
{
	++this->_rawBit;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed temp = *this;
	temp._rawBit++;
	return (temp);
}

Fixed &Fixed::operator--( void )
{
	--this->_rawBit;
	return (*this);
}

Fixed Fixed::operator--( int )
{
	Fixed temp = *this;
	temp._rawBit--;
	return (temp);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
	return (obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
	return (obj1.getRawBits() > obj2.getRawBits() ? obj1 : obj2);
}

Fixed const &Fixed::min(Fixed const &obj1, Fixed const &obj2)
{
	return (obj1.getRawBits() < obj2.getRawBits() ? obj1 : obj2);
}

Fixed const &Fixed::max(Fixed const &obj1, Fixed const &obj2)
{
	return (obj1.getRawBits() > obj2.getRawBits() ? obj1 : obj2);
}

std::ostream& operator<<(std::ostream &stream, Fixed const &obj) {
	stream << obj.toFloat();
	return (stream);
}
