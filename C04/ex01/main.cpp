/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 12:31:19 by gscarama          #+#    #+#             */
/*   Updated: 2023/03/24 14:56:27 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal* zoo[10];
	int		row;

	row = 0;
	std::cout << "******* Constructor *******" << std::endl;
	while (row < 10)
	{
		if (row <= 5)
			zoo[row] = new Dog();
		else
			zoo[row] = new Cat();
		row++;
		std::cout << std::endl;
	}

	row = 0;
	std::cout << "******* Destructor *******" << std::endl;
	while (row < 10)
	{
		delete zoo[row];
		std::cout << std::endl;
		row++;
	}

	Cat *cristal = new Cat();
	std::cout << *cristal->getBrain() << std::endl;
	delete cristal;
	
	return 0;
}