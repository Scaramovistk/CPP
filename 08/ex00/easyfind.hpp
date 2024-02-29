/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:18:03 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/08 12:31:02 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <algorithm>

class noElementFound : public std::exception
{
	public :
		const char* what( void ) const throw()
		{
			return ("The element isn't found inside the container");
		}
};

template<typename T>
typename T::iterator	easyfind(T &container, int nbr)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), nbr);
	if (it == container.end() && *it != nbr)
		throw (noElementFound());
	return (it);
}

#endif
