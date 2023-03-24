/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:27:06 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 13:56:20 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

#define BUFF 10

class	Character : public ICharacter
{
	private:
		std::string _name;
		AMateria*	_inv[3];
		AMateria*	_buffer[BUFF];
	public:
		Character( void );
		Character(std::string name);
		Character(Character const &other);
		~Character( void );
		Character& operator=(Character const &other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria* getAMateria(int index) const;
};
