/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:31:10 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/08 12:18:49 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iterator>
#include <algorithm>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_vct;
	public:
		typedef std::vector<int>::iterator iterator;
		Span( void );
		Span(unsigned int n);
		Span(Span const &other);
		~Span( void );
		Span const& operator=(Span const& other);
		void	addNumber(unsigned int nbr);
		void	addRange(const iterator &begin, const iterator &end);
		int		shortestSpan( void ) const;
		int		longestSpan( void ) const;
		class NotEnoughNumbersException : public std::exception
		{
			public:
				const char* what( void ) const throw()
				{
					return ("Not Enough Numbers Inside Span");
				}
		};
		class SpanIsFullException : public std::exception
		{
			public:
				const char* what( void ) const throw()
				{
					return ("Span Is Already Full");
				}
		};
};

#endif
