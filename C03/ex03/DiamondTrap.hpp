/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 10:36:55 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/22 12:23:50 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string _name;

	public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const &other );
		~DiamondTrap( void );
		DiamondTrap& operator=( DiamondTrap const &other );
		void whoAmI( void );
		std::string getName(void) const;

		using ScavTrap::_energyPoints;
		using FragTrap::_hitPoints;
		using FragTrap::_attackDamage;
		using ScavTrap::attack;
};

#endif