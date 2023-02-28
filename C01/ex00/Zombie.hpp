/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabriel <gabriel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:02:25 by gabriel           #+#    #+#             */
/*   Updated: 2023/02/25 14:09:52 by gabriel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{

	private:
		std::string	_name;

	public:
		Zombie ( std::string name );
		~Zombie( void );
		void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
