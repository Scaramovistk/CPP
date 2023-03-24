/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:20 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 12:57:22 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog ( void );
		Dog (Dog const &other);
		~Dog ( void );
		Dog& operator=(Dog const &other);
		void makeSound( void ) const;
		Brain* getBrain( void ) const;
	private:
		Brain *_brain;
};

#endif