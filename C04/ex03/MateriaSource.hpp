/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 16:03:04 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 14:46:03 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class ICharacter;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inv[4];
	public:
		MateriaSource( void );
		MateriaSource(MateriaSource const &other);
		~MateriaSource( void );
		MateriaSource& operator=(MateriaSource const &other);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		AMateria* getAMateria(int index) const;
};

#endif
