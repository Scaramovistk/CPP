/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 13:51:08 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/20 13:52:01 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal ( void );
		explicit WrongAnimal (std::string intype);
		WrongAnimal (WrongAnimal const &other);
		virtual ~WrongAnimal ( void );
		WrongAnimal& operator=(WrongAnimal const &other);
		void makeSound( void ) const;
		std::string getType ( void ) const;
		void setType(std::string intype);
	protected:
		std::string type;
};

std::ostream &operator<< (std::ostream &stream, WrongAnimal const&obj);

#endif