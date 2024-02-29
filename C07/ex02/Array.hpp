/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:09:08 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/06 12:07:19 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stddef.h>
#include <exception>
#include <iostream>

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;
	public:
		Array<T>( void );
		Array<T>( unsigned int n );
		Array<T>( Array<T> const &other );
		~Array<T>( void );
		Array<T> &operator=( Array<T> const &other );
		T &operator[]( unsigned int const poss ) const;
		unsigned int	size( void ) const;
 		class OutOfBoundsException : public std::exception 
		{
			public:
				const char* what( void ) const throw();
		};
};

template <typename T>
std::ostream& operator<<(std::ostream &stream, Array<T> &other);

template<typename T>
Array<T>::Array( void )
{
	this->_size = 0;
	this->_arr = NULL;
}

template<typename T>
Array<T>::Array( unsigned int n ) : _size(n)
{
	if (n)
		this->_arr = new T[n];
	else
		this->_arr = NULL;
}

template<typename T>
Array<T>::Array( Array<T> const &other )
{
	this->_size = other.size();
	this->_arr = new T[other.size()];
	for (unsigned int i = 0; i < this->size(); i++)
		this->_arr[i] = other._arr[i];
}

template<typename T>
Array<T>::~Array( void )
{
	if (this->_arr)
		delete [] this->_arr;
}

template<typename T>
Array<T>& Array<T>::operator=( Array<T> const &other )
{
	if (this == &other)
		return (*this);
	if (this->_arr)
	{
		delete [] this->_arr;
		this->_arr = NULL;
	}
	this->_size = other.size();
	this->_arr = new T[this->size()];
	for (unsigned int i = 0; i < this->size(); i++)
		this->_arr[i] = other[i];
	return (*this);
}

template<typename T>
T& Array<T>::operator[]( unsigned int const poss ) const
{
	if (poss >= this->size() || poss < 0)
		throw(OutOfBoundsException());
	return (this->_arr[poss]);
}

template<typename T>
unsigned int	Array<T>::size( void ) const {return (this->_size);}

template<typename T>
const char*	Array<T>::OutOfBoundsException::what(void) const throw()
{
	return ("The value providede is out of the array range or dont exist");
}

template <typename T>
std::ostream& operator<<(std::ostream &stream, Array<T> &other)
{
	for(unsigned int row = 0; row < other.size(); row++)
	{
		if (other.size() > 0)
			if (other[row])
				stream << other[row];
	}
	return (stream);
}

#endif
