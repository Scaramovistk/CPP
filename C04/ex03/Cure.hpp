/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:25:43 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 15:01:12 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure( void );
		Cure(std::string type);
		Cure(Cure const &other);
		~Cure( void );
		Cure& operator=(Cure const &other);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif