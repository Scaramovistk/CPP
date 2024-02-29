/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:47:52 by gscarama          #+#    #+#             */
/*   Updated: 2023/09/08 12:06:43 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack &other) : std::stack<T>(other) {};
		~MutantStack() {};
		const MutantStack& operator=(const MutantStack &other)
		{
			if (this == other)
				return (*this);
			std::stack<T>::operator=(other);
			return (*this);
		};
		iterator begin( void ) {return (std::stack<T>::c.begin());};
		iterator end( void ) {return (std::stack<T>::c.end());};
		reverse_iterator rbegin( void ) {return (std::stack<T>::c.rbegin());};
		reverse_iterator rend( void ) {return (std::stack<T>::c.rend());};
		const_iterator cbegin( void ) const {return (std::stack<T>::c.cbegin());};
		const_iterator cend( void ) const {return (std::stack<T>::c.cend());};
		const_reverse_iterator crbegin( void ) const {return (std::stack<T>::c.crbegin());};
		const_reverse_iterator crend( void ) const {return (std::stack<T>::c.crend());};
};

#endif
