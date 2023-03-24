/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:12 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 12:42:53 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal ( void );
		explicit AAnimal (std::string intype);
		AAnimal (AAnimal const &other);
		virtual ~AAnimal ( void );
		AAnimal& operator=(AAnimal const &other);
		virtual void makeSound( void ) const = 0; // Pure virtual function
		std::string getType ( void ) const;
		void setType(std::string intype);
	protected:
		std::string type;
};

std::ostream &operator<< (std::ostream &stream, AAnimal const&obj);

#endif