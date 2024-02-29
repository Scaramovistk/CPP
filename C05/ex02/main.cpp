/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:30:09 by gscarama          #+#    #+#             */
/*   Updated: 2023/08/22 14:26:33 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	Churchill("Churchill", 1);
		Bureaucrat	Steban("Steban", 150);
		ShrubberyCreationForm plantTree("Churchill's House");
		RobotomyRequestForm britishArmy("English Soldier");
		PresidentialPardonForm peaceTreat("Germans");

		try
		{
			Steban.signForm(plantTree);
			Churchill.signForm(plantTree);
			Churchill.signForm(britishArmy);
			Churchill.signForm(peaceTreat);
			Steban.executeForm(britishArmy);
			Churchill.executeForm(plantTree);
			Churchill.executeForm(britishArmy);
			Churchill.executeForm(peaceTreat);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
