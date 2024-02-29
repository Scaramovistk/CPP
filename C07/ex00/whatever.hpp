/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:46:31 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/30 13:14:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T& a, T& b)
{
	T	c;

	c = a;
	a = b;
	b = c;
}

template<typename T>
T min(T& fElement, T& sElement)
{
	if (fElement > sElement)
		return (sElement);
	else
		return (fElement);
}

template<typename T>
T max(T& fElement, T& sElement)
{
	if (fElement < sElement)
		return (sElement);
	else
		return (fElement);
}

#endif
