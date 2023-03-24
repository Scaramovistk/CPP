/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:32:36 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 15:10:18 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	AMateria* weapon = new Ice();

	std::cout << " --- Weapon type " << weapon->getType() << std::endl;
	weapon->use(*bob);

	std::cout << std::endl << "+++ Weapon destructor +++" << std::endl;
	delete weapon;
	std::cout << std::endl << "+++ BOB destructor +++" << std::endl;
	delete bob;
	std::cout << std::endl << "+++ Me destructor +++" << std::endl;
	delete me;
	std::cout << std::endl << " +++ SRC destructor +++" << std::endl;
	delete src;

	return 0;
}
