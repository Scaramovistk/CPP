/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:17:55 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/06 11:57:19 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <stdlib.h>

template<typename T, typename U>
void	iter(T* array, size_t size, void(*f)(U const &arr))
{
	for (size_t row = 0; row < size; row++)
		f(array[row]);
}

#endif
