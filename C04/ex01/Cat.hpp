/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:24 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/21 12:57:18 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat ( void );
		Cat (Cat const &other);
		~Cat ( void );
		Cat& operator=( Cat const &other);
		void makeSound( void ) const;
		Brain* getBrain( void ) const;
	private:
		Brain *_brain;
};

#endif