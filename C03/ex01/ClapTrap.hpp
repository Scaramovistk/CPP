/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:42:01 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/13 14:02:23 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap(void);
		ClapTrap(std::string const name);
		ClapTrap(ClapTrap const &other);
		~ClapTrap(void);
		ClapTrap& operator=(ClapTrap const &other);
		std::string getName(void) const;
		unsigned int getHitPts(void) const;
		unsigned int getEngy(void) const;
		unsigned int getDamage(void) const;
		void	setName(std::string const name);
		void	setHP(unsigned int const HD);
		void	setEnergy(unsigned int const energy);
		void	setDamage(unsigned int const damage);

	protected:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

std::ostream &operator<<(std::ostream &stream, ClapTrap const &obj);

#endif