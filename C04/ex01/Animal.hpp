/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:12 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 12:42:53 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
	public:
		Animal ( void );
		explicit Animal (std::string intype);
		Animal (Animal const &other);
		virtual ~Animal ( void );
		Animal& operator=(Animal const &other);
		virtual void makeSound( void ) const;
		std::string getType ( void ) const;
		void setType(std::string intype);
	protected:
		std::string type;
};

std::ostream &operator<< (std::ostream &stream, Animal const&obj);

#endif