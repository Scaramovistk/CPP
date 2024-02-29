/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 14:30:13 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/08 12:16:05 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span ( void )
{
	this->_N = 0;
}

Span::Span (unsigned int n)
{
	this->_N = n;
}
Span::Span(Span const &other)
{
	*this = other;
}

Span::~Span( void )
{
	
}

Span const &Span::operator=(Span const& other)
{
	if (this == &other)
		return (*this);
	this->_N = other._N;
	this->_vct = other._vct;
	return (*this);
}

void	Span::addNumber(unsigned int nbr)
{
	if (this->_N <= this->_vct.size())
		throw(SpanIsFullException());
	this->_vct.push_back(nbr);
}

int	Span::shortestSpan( void ) const
{
	std::vector<int>	tmp;
	iterator			it;
	int					min;

	if (this->_vct.size() < 2)
		throw(NotEnoughNumbersException());
	tmp = this->_vct;
	it = tmp.begin();
	sort(tmp.begin(), tmp.end());
	min = (it[1] - it[0]);
	it++;
	while (it != tmp.end() - 1)
	{
		if (*(it + 1) - *it < min)
			min =  *(it + 1) - *it;
		it++;
	}
	return (min);
}

int	Span::longestSpan( void ) const
{
	std::vector<int>	tmp;

	if (this->_vct.size() < 3)
		throw(NotEnoughNumbersException());
	tmp = this->_vct;
	sort(tmp.begin(), tmp.end());
	return (*(tmp.end() - 1) - *tmp.begin());
}

void	Span::addRange(const iterator &begin, const iterator &end)
{
	std::vector<int>	tmp(begin, end);

	if (tmp.size() + this->_vct.size() > this->_N)
		throw(SpanIsFullException());
	copy(begin, end, std::back_inserter(this->_vct));
}
