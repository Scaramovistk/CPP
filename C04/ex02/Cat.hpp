/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:24 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/22 14:06:17 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
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