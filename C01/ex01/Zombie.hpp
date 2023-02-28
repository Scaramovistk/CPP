/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 16:00:53 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/25 14:09:21 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{

	private:
		std::string	_name;

	public:
		Zombie ( void );
		~Zombie( void );
		void announce( void );
		void putname( std::string name );
};

Zombie*	zombieHorde( int N, std::string name );

#endif
