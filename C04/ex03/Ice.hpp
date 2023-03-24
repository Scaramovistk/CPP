/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:24:04 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 15:14:24 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice( void );
		Ice (std::string type);
		Ice(Ice const &other);
		~Ice( void );
		Ice& operator=(Ice const &other);
		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif
